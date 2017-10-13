	.file	"test.c"
	.text
	.globl	func
	.type	func, @function
func:
.LFB0:
	.cfi_startproc
	pushq	%rbp				#again the same, this is so as store the base pointer of previous function in the stack
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp			#set start of new stak frame
	.cfi_def_cfa_register 6
	pushq	%rbx				#calee saved
	subq	$56, %rsp			#mentioned before. So as to give space to local variable
	.cfi_offset 3, -24
	movl	%edi, -52(%rbp)		#stores the edi that is the first parameter( that is 9) 52 bytes above 
	movq	%fs:40, %rax		#rax now stores the value at memory  that is at offset 40 from segment selected by fs #This is to check overflows, doesnt mattermuch here
	movq	%rax, -24(%rbp)		#move the value of rax to this position
	xorl	%eax, %eax			# destroys the value at eax, eax now stores 0;
	movq	%rsp, %rax			# rax stores top pointer
	movq	%rax, %rsi 			# rsi also stores value originally in rax
	movl	-52(%rbp), %eax		#eax stores what was stored at stack location -52(%rbp) i.e, 9
	addl	$1, %eax			#eax stores 10
	movslq	%eax, %rdx			#rdx stores 10
	subq	$1, %rdx			#rdx stores 9
	movq	%rdx, -40(%rbp)		#stores 9 40 bytes above the rbp in stack - basically a location
	movslq	%eax, %rdx			#rdx now stores 10
	movq	%rdx, %r8			#r8 stores 9
	movl	$0, %r9d			#register r9d stores 0
	movslq	%eax, %rdx			#rdx stores 10
	movq	%rdx, %rcx			#rcx now stores 10
	movl	$0, %ebx			#ebx stores 0 This will be used as a fibonacci number base, as we will see
	cltq						#rax <- eax => rax <- 10 n+1
	salq	$2, %rax			#rax <- 40 => eax <- 40
	leaq	3(%rax), %rdx		#rdx <- rax + 3 = 43 = 4*(k+1) + 3
	movl	$16, %eax			#eax = 16 => rax <- 16
	subq	$1, %rax			#rax = rax - 1 = 15 and eax = 15
	addq	%rdx, %rax			#rax = 15 + 4k + 7 = 58
	movl	$16, %edi			#edi <- 16 rdi <- 16
 	movl	$0, %edx			#edx <- 0 rdx <-0
	divq	%rdi				# %rax = rax/rdi = (4k+22)/16  =3  %rdx =(4k+22)%16 = 10
	imulq	$16, %rax, %rax		#rax <- 3*16 = 48
	subq	%rax, %rsp			#extended stack by 48 bytes
	movq	%rsp, %rax			#rax points to top of stack
	addq	$3, %rax			#rax points to 3 bytes below
	shrq	$2, %rax			#shift logical right
	salq	$2, %rax			#shift arithematic left last 2 bytes rax <- 48
	movq	%rax, -32(%rbp)		#store array location at stack
	movq	-32(%rbp), %rax		#rax <- rax
	movl	$0, (%rax)			#location that rax points to is has 0
	movq	-32(%rbp), %rax		#rax <- 32(%rbp)
	movl	$1, 4(%rax)			## at location rax + 1 = 1
	movl	$2, -44(%rbp)		# This will count the iterations. Intitially 2
	jmp	.L2						#unconditional jump to L2
.L3:#This is the loop which starts calculating fibonacci  numbers using previous two numbers, stores in array reference by -32(%rbp)
	movl	-44(%rbp), %eax		#eax <- 2,3,4,5,6,7,8
	leal	-1(%rax), %edx 		#edx = rax -1
	movq	-32(%rbp), %rax		#rax <- reference to array
	movslq	%edx, %rdx			#rdx = edx =rax-1 // the i-1 in array reqy=uired for caluclation of arr[i]
	movl	(%rax,%rdx,4), %ecx	#ecx = rax + rdx * 4 ; ecx now points to (i-1)th element
	movl	-44(%rbp), %eax		#eax = the iterator
	leal	-2(%rax), %edx 		#edx = rax-2 = 0 // (i-2)th element's pointer
	movq	-32(%rbp), %rax  	#rax <- reference
	movslq	%edx, %rdx			#rdx <- 0//
	movl	(%rax,%rdx,4), %eax	#eax = rax+rdx * 4
	addl	%eax, %ecx			#add these ans store in ecx
	movq	-32(%rbp), %rax 	#rax <- array reference
	movl	-44(%rbp), %edx 	#edx = 2
	movslq	%edx, %rdx 			#rdx = 2
	movl	%ecx, (%rax,%rdx,4) 
	addl	$1, -44(%rbp) 		# -44(rbp) ++; for iterating
.L2:
	movl	-44(%rbp), %eax		#eax <- count; inially 2
	cmpl	-52(%rbp), %eax		#comapare -52(%rbp) and eax i.e 9(k) and 2 
	jle	.L3						#looping jumps the frst time
	movq	-32(%rbp), %rax		#rax <- stack position  
	movl	-52(%rbp), %edx 	#edx <- n = 9
	movslq	%edx, %rdx			#rdx <- 9
	movl	(%rax,%rdx,4), %eax	#rax + 4*rdx
	movq	%rsi, %rsp			#restored the original top pointer
	movq	-24(%rbp), %rbx		#fs:40, this is for overflow checking of stack
	xorq	%fs:40, %rbx		#xors both
	je	.L5						#if correct go to l5, else error
	call	__stack_chk_fail@PLT	# else error
.L5:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	func, .-func
	.section	.rodata
.LC0:
	.string	"%d"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbp 				#to store previous base pointer of previous stack frame
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp			# to start the new stack frame
	.cfi_def_cfa_register 6
	subq	$16, %rsp			# The rsp now points to 16 bytes up. Basically, rsp store the top of current stack pointer; This saves 16 bytes for local variables. This space is always a multiple of 16
	movl	$9, -4(%rbp)		# Stores 9 at the 4 bytes above rbp, also 9 is an int since it is occupying 4 bytes
	movl	-4(%rbp), %eax		# 9 is now stores in register called %eax
	movl	%eax, %edi			# edi also stores 9
	call	func                # function is called fuction & parameter (9) is stored in eax
	movl	%eax, %esi			#eax is stored in esi, for calling prinf, The return value of fibonacci(9)
	leaq	.LC0(%rip), %rdi	
	movl	$0, %eax			#return value of main - 0
	call	printf@PLT 			#called prinf with value 9
	call	getchar@PLT			#called getchar
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (GNU) 7.1.1 20170630"
	.section	.note.GNU-stack,"",@progbits


#The program is asically calculating fibonacci number for k = 9;
#It uses the array approch and starts calculating from k = 2, base conditions are hardcoded, as required
#the loop required is f[n] = f[n-1] + f[n-2] i.e previous two values of array
#-32(%rbp) stores the reference to array in stack