#20200419劣锣埃猭――程そ计

.globl  main
.data
	endl: .string"\n"
	Input0: .string"叫块ㄢ计"
	Input1: .string"材计a:\n"
	Input2: .string"材计b:\n"
	Output1: .string"程そ计:\n"

.text
main:
	add t3,a0,zero		#t3=a0+0
	add t5,a0,zero		#t5=a0+0
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
	
loop1:	
	beq t1,zero,LB		#if(t1==0) goto LB
	beq t2,zero,LA		#if(t2==0) goto LA
	bge t1,t2,abt		#if(t1==t2) goto abt
	REM t2,t2,t1
	beq x0,x0,loop1
abt:	
	REM t1,t1,t2
	beq x0,x0,loop1		#goto loop1
LA:
	la a0, Output1
	li a7, 4
	ecall
	
	mv a0,t1
	li a7, 1
	ecall
	li a7,10
	ecall
	
LB:	
	la a0, Output1
	li a7, 4
	ecall
	
	mv a0,t2
	li a7, 1
	ecall
	li a7,10
	ecall
	
	
	
