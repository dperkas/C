#include <stdio.h>

#define MAXLINE 1024
char line[MAXLINE+1];

/* Just print our prompt */
void show_prompt()
{
	printf("spish$ ");
	}

	/* a) read characters and put them in the line[] array until \n is met
	 * b) do not exceed MAXLINE characters
	  * c) add the '\0' character at the end
	   */
	   void read_line()
	   {
	   	int i;
			char ch;

				for (i = 0; i < MAXLINE; i++)   // do not read more than MAXLINE chars
					{
							scanf("%c", &ch);             // read char
									if (ch == '\n')               // check if end-of-line
												break;
														line[i] = ch;
															}
																line[i] = '\0';                 // put \0 after the last character
																}

																/* Check if the line[] array starts with the word "exit"
																 * Return 1 if it does, or 0 if it does not.
																  */
																  int check_for_exit()
																  {
																  	if (line[0] == 'e' && line[1] == 'x' && line[2] == 'i' && line[3] == 't')
																			return 1;
																				else
																						return 0;
																						}

																						int main()
																						{
																							printf("This is the Systems Programming @ Ioannina Shell (spish)\n");
																								printf("Enter 'exit' to finish\n\n");

																									while (1)
																										{
																												show_prompt();
																														read_line();
																																if (check_for_exit() == 1)
																																			break;
																																					else
																																								printf("you typed: %s\n", line);
																																									}
																																										printf("bye!\n");
																																											return 0;
																																											}
