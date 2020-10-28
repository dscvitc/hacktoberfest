			.data 
out: 		.asciiz "\nHello, World!\n"
			.text 
main: 
			li $v0, 4 
			la $a0, out 
			syscall 

			li $v0, 10 
			syscall

#A assembly language program for printing Hello, World!
