
.globl  main
.data
	endl: .string"\n"
	Input0: .string"����۰��k�A��J��ӼƦr�D�̤j���]��"
	Input1: .string"�п�J�Ʀra:\n"
	Input2: .string"�п�J�Ʀrb:\n"
	Output1: .string"�̤j���]�Ƭ�:\n"
	

.text
main:
	add t3,a0,zero
	add t4,a0,zero
	la a0,Input0
	li a7,4
	ecall
	la a0, Input1
	li a7,4
	ecall
	li a7,5
	ecall
	add t1,a0,zero
	la a0,Input2
	li a7,4
	ecall
	li a7,5
	ecall
	add t2,a0,zero
	
	REM t1,t1,t2
	
Loop:	
	beq t1,zero,lefB
	beq t2,zero,lefA
	bge t1,t2,AbtB
	REM t2,t2,t1
	beq x0,x0,Loop
AbtB:	
	REM t1,t1,t2
	beq x0,x0,Loop
lefA:
	la a0, Output1 #�̤j���]�Ƭ�
	li a7, 4
	ecall
	
	mv a0,t1
	li a7, 1 #�̤j���]��
	ecall
	li a7,10
	ecall
	
lefB:	
	la a0, Output1 #�̤j���]�Ƭ�
	li a7, 4
	ecall
	
	mv a0,t2
	li a7, 1 #�̤j���]��
	ecall
	li a7,10
	ecall
	
	
	
