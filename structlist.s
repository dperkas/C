	.file	"structlist.c"
	.text
	.section	.rodata
.LC0:
	.string	"Sum of numbers: %d\n "
	.text
	.globl	find_sum
	.type	find_sum, @function
find_sum:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L2
.L3:
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	addl	%eax, -4(%rbp)
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -24(%rbp)
.L2:
	cmpq	$0, -24(%rbp)
	jne	.L3
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	find_sum, .-find_sum
	.globl	bubble_sort
	.type	bubble_sort, @function
bubble_sort:
.LFB7:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -40(%rbp)
	movq	$0, -24(%rbp)
	cmpq	$0, -40(%rbp)
	je	.L11
	movq	-40(%rbp), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	je	.L11
.L6:
	movl	$0, -4(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, -16(%rbp)
	jmp	.L8
.L10:
	movq	-16(%rbp), %rax
	movl	(%rax), %edx
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jle	.L9
	movq	-16(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -28(%rbp)
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	movl	(%rax), %edx
	movq	-16(%rbp), %rax
	movl	%edx, (%rax)
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	movl	-28(%rbp), %edx
	movl	%edx, (%rax)
	movl	$1, -4(%rbp)
.L9:
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -16(%rbp)
.L8:
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	cmpq	%rax, -24(%rbp)
	jne	.L10
	movq	-16(%rbp), %rax
	movq	%rax, -24(%rbp)
	cmpl	$0, -4(%rbp)
	jne	.L6
	jmp	.L4
.L11:
	nop
.L4:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	bubble_sort, .-bubble_sort
	.section	.rodata
.LC1:
	.string	"Sorted list: "
.LC2:
	.string	"%d "
	.text
	.globl	print_list
	.type	print_list, @function
print_list:
.LFB8:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, -8(%rbp)
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	jmp	.L13
.L14:
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -8(%rbp)
.L13:
	cmpq	$0, -8(%rbp)
	jne	.L14
	movl	$10, %edi
	call	putchar
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	print_list, .-print_list
	.globl	free_list
	.type	free_list, @function
free_list:
.LFB9:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	jmp	.L16
.L17:
	movq	-24(%rbp), %rax
	movq	%rax, -8(%rbp)
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -24(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	free
.L16:
	cmpq	$0, -24(%rbp)
	jne	.L17
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	free_list, .-free_list
	.section	.rodata
.LC3:
	.string	"How many elements?"
.LC4:
	.string	"%d"
	.align 8
.LC5:
	.string	"The number of elements must be positive "
.LC6:
	.string	"Memory allocation failed "
	.text
	.globl	main
	.type	main, @function
main:
.LFB10:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	$0, -8(%rbp)
	movl	$.LC3, %edi
	call	puts
	leaq	-28(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC4, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	-28(%rbp), %eax
	testl	%eax, %eax
	jg	.L19
	movl	$.LC5, %edi
	call	puts
	movl	$1, %eax
	jmp	.L24
.L19:
	movl	$0, -12(%rbp)
	jmp	.L21
.L23:
	movl	$16, %edi
	call	malloc
	movq	%rax, -24(%rbp)
	cmpq	$0, -24(%rbp)
	jne	.L22
	movl	$.LC6, %edi
	call	puts
	movl	$1, %edi
	call	exit
.L22:
	movq	-24(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC4, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movq	-24(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-24(%rbp), %rax
	movq	%rax, -8(%rbp)
	addl	$1, -12(%rbp)
.L21:
	movl	-28(%rbp), %eax
	cmpl	%eax, -12(%rbp)
	jl	.L23
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	find_sum
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	bubble_sort
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	print_list
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	free_list
	movl	$0, %eax
.L24:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	main, .-main
	.ident	"GCC: (GNU) 14.1.1 20240522 (Red Hat 14.1.1-4)"
	.section	.note.GNU-stack,"",@progbits
