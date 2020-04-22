subTwo:
	# Map sub to $t0.
	add		$t0, $a0, $a1
	move	$v0, $t0
	jr		$ra
	
doSomething:
	# Allocate space for $ra, x, and y, which all
	#  must live past the first call to subTwo.
	addiu	$sp, $sp, -12
	
	# Save these values onto the stack.
	sw		$s0, 0($sp)
	sw		$s1, 4($sp)
	sw		$ra, 8($sp)
	
	# s0 = a0, s1 = a1.
	move	$s0, $a0
	move	$s1, $a1
	
	# Calling subtwo with a0 and a1.
	jal		subTwo
	
	# Adding 10 to return value of subTwo
	#  before returning it.
	addi	$v0, $v0, 10
	
	# After we are done using ra1, s1, and s2, 
	#  we load old values.
	lw		$ra, 8($sp)
	lw		$s1, 4($sp)
	lw		$s0, 0($sp)
	addiu	$sp, $sp, 12
	jal		$ra
	
main:
	li		$a0, 20
	li		$a1, 10
	jal		doSomething
	
	# Keep return value of doSomething at t0.
	move	$t0, $v0
	
	# Print t0.
	li		$v0, 1
	move	$a0, $t0
	syscall
	
	# Exit.
	li $v0, 10
	syscall