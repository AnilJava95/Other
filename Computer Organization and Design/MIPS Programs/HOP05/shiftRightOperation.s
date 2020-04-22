main:

	li $t1, 7			# Binary equivalent of 7 = 111
	
	srl $t2, $t1, 1		# Shift right by 1, t2 = 011, 3 in decimal
	
	li $v0, 1
	move $a0, $t2
	syscall
	
	li $v0, 10
	syscall