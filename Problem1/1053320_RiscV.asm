#20200419����۰��k�D�D�̤j���]��

.globl  main
.data
	endl: .string"\n"
	Input0: .string"�п�J��ӼƦr"
	Input1: .string"�Ĥ@�Ӽ�a:\n"
	Input2: .string"�ĤG�Ӽ�b:\n"
	Output1: .string"�̤j���]��:\n"

.text
main:
	la a0,Input0	#�N�n��X���r���ba0			�п�J��ӼƦr
	li a7,4		#a7=4 >> print string
	ecall		#system call
	la a0, Input1	#					�Ĥ@�Ӽ�a
	li a7,4
	ecall
	li a7,5		#a7=5 >> read int
	ecall
	add t1,a0,zero	#�Ĥ@�ӿ�J���ȩ�� t1
	la a0,Input2	#					�ĤG�Ӽ�b
	li a7,4
	ecall
	li a7,5
	ecall
	add t2,a0,zero	#�ĤG�ӿ�J���ȩ�� t2
	
	REM t1,t1,t2
	
loop1:	
	beq t1,zero,LB	#if(t1==0) goto LB
	beq t2,zero,LA	#if(t2==0) goto LA
	bge t1,t2,abt	#if(t1>=t2) goto abt
	REM t2,t2,t1	# t2 %= t1
	beq x0,x0,loop1	#goto loop1
abt:	
	REM t1,t1,t2	# t1 %= t2
	beq x0,x0,loop1	#goto loop1
LA:
	la a0, Output1	#					�̤j���]��
	li a7, 4
	ecall
	
	mv a0,t1	# a0 = t1
	li a7, 1		#a7=1 >> print int
	ecall
	li a7,10		#a7=10 >> exit
	ecall
	
LB:	
	la a0, Output1	#					�̤j���]��
	li a7, 4
	ecall
	
	mv a0,t2
	li a7, 1
	ecall
	li a7,10
	ecall
	
	
	
