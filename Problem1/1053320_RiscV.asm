#20200419輾轉相除法求求最大公因數

.globl  main
.data
	endl: .string"\n"
	Input0: .string"請輸入兩個數字"
	Input1: .string"第一個數a:\n"
	Input2: .string"第二個數b:\n"
	Output1: .string"最大公因數:\n"

.text
main:
	la a0,Input0	#將要輸出的字串放在a0			請輸入兩個數字
	li a7,4		#a7=4 >> print string
	ecall		#system call
	la a0, Input1	#					第一個數a
	li a7,4
	ecall
	li a7,5		#a7=5 >> read int
	ecall
	add t1,a0,zero	#第一個輸入的值放到 t1
	la a0,Input2	#					第二個數b
	li a7,4
	ecall
	li a7,5
	ecall
	add t2,a0,zero	#第二個輸入的值放到 t2
	
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
	la a0, Output1	#					最大公因數
	li a7, 4
	ecall
	
	mv a0,t1	# a0 = t1
	li a7, 1		#a7=1 >> print int
	ecall
	li a7,10		#a7=10 >> exit
	ecall
	
LB:	
	la a0, Output1	#					最大公因數
	li a7, 4
	ecall
	
	mv a0,t2
	li a7, 1
	ecall
	li a7,10
	ecall
	
	
	
