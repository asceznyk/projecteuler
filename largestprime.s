	.file	"largestprime.c"
	.text
	.globl	factorial
	.type	factorial, @function
factorial:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	cmpl	$0, -4(%rbp)
	jg	.L2
	movl	$1, %eax
	jmp	.L3
.L2:
	movl	-4(%rbp), %eax
	subl	$1, %eax
	movl	%eax, %edi
	call	factorial
	imull	-4(%rbp), %eax
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	factorial, .-factorial
	.globl	check_prime
	.type	check_prime, @function
check_prime:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, %edi
	call	factorial
	movl	%eax, %edx
	movl	-20(%rbp), %eax
	leal	1(%rax), %ecx
	movl	%edx, %eax
	cltd
	idivl	%ecx
	movl	%edx, %eax
	cltd
	idivl	-20(%rbp)
	cvtsi2sd	%eax, %xmm1
	movl	-20(%rbp), %eax
	subl	$1, %eax
	cvtsi2sd	%eax, %xmm0
	mulsd	%xmm1, %xmm0
	movsd	.LC0(%rip), %xmm1
	addsd	%xmm1, %xmm0
	cvttsd2si	%xmm0, %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	check_prime, .-check_prime
	.section	.rodata
.LC1:
	.string	"%d "
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$29, -12(%rbp)
	movl	-12(%rbp), %eax
	subl	$1, %eax
	movl	%eax, %edi
	call	check_prime
	movl	%eax, -8(%rbp)
	movl	$5, %edi
	call	factorial
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC0:
	.long	0
	.long	1073741824
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
