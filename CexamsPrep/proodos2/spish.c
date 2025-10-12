/* Version #4 of SPISH */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <stdlib.h>

#define MAXLINE 1024
char line[MAXLINE+1];                /* The line the user typed */

#define MAXHISTORY 10
int  histcount;                      /* History counter */
char hist[MAXHISTORY][MAXLINE];      /* Keep MAXHISTORY lines */

#define MAXPROMPT 20
char prompt[MAXPROMPT] = "spish$";   /* Default prompt */

int echocmds = 0;         /* Print the command before executing it */

/* Just print our prompt */
void show_prompt()
{
	printf("%s ", prompt);
}

/* Read a line and update history */
int read_line()
{
	if (fgets(line, MAXLINE, stdin) == NULL)      /* Check for EOF */
		return 1;

	line[ strlen(line)-1 ] = '\0';   /* Remove the \n at the end */

	/* Add to history: copy to the next history row (wraps arround) */
	if (strlen(line) > 0)            /* Don't add empty lines */
	{
		strcpy(hist[histcount % MAXHISTORY], line);
		histcount++;
	}
	return 0;
}

void do_history()
{
	int i, start = (histcount > MAXHISTORY) ? histcount - MAXHISTORY : 0;

	for (i = start; i < histcount; i++)
		printf("[%d] %s\n", i, hist[i % MAXHISTORY]);
}

void do_pwd()
{
	static char cwd[512];
	getcwd(cwd, 512);
	printf("%s\n", cwd);
}

void do_chdir(char *restofline)
{
	if (chdir(restofline) != 0)
		printf("Something was wrong with the directory [%s].\n", restofline);
}

/* Check if user gave a command we understand and execute it by calling
 * the corresponding function
 */
int do_command()
{
	char *cmd;
	int cmdlen;

	if (strlen(line) == 0)
		return 0;
	if (echocmds)
		printf("%s\n", line);

	cmd = strtok(line, " \t\n");  /* Get 1st word */
	cmdlen = strlen(cmd);         /* So as to jump to the next word */
	if (cmd == NULL)              /* empty line */
		return 0;
	if (strcmp(cmd, "exit") == 0)
		return 1;
	else if (strcmp(cmd, "history") == 0)
		do_history();
	else if (strcmp(cmd, "pwd") == 0)
		do_pwd();
	else if (strcmp(cmd, "cd") == 0)
		do_chdir(cmd + cmdlen + 1);
	return 0;
}

void getoptions()
{
	FILE *fp;
	char key[MAXLINE], value[MAXLINE];

	sprintf(line, "%s/.spishrc", getenv("HOME"));
	if ((fp = fopen(line, "r")) == NULL)    /* Failed to open */
		return;
	/* Loop to get lines with <option> <value> */
	while (fgets(line, MAXLINE, fp) != NULL)
	{
		if (sscanf(line, "%s%s", key, value) < 2)
			continue;                 /* Not an options line */
		if (*key == '#')            /* Lines starting with # are comments */
			continue;
		if (strcmp(key, "prompt") == 0)
			strncpy(prompt, value, MAXPROMPT-1);
		else if (strcmp(key, "echo") == 0)
			echocmds = strcmp(value, "off");
	}
	fclose(fp);
}

int main()
{
	printf("This is the Systems Programming @ Ioannina Shell (spish)\n");
	printf("Enter 'exit' to finish\n\n");

	getoptions();

	while (1)
	{
		show_prompt();
		if (read_line() == 1)
			break;
		if (do_command() == 1)
			break;
	}
	printf("bye!\n");
	return 0;
}

