		.data
msg:	.asciiz "The answer of b^e is: "
prompt1:	.asciiz "Enter the base: "
prompt2:	.asciiz "Enter the exponent: "
		.text

power:
		bne		$a1, $zero, recursion	# if the power is greater than 1, then jump to recursion label
		li		$v0, 1					# otherwise return 1
		jr $ra

recursion:
		addi	$sp, $sp, -4			# Allocate space for one integer on the stack
		sw		$ra, 0($sp)				# store the return address on the stack
		addi	$a1, $a1, -1			# decrease the power by one
		jal		power					# call the power func with the new parameter
		mul		$v0, $a0, $v0			# multiply the result by the base and save it as the new res
		lw		$ra, 0($sp)				# store the return address from the stack
		addi	$sp, $sp, 4				# deallocate the memory on the stack
		jr		$ra						# return to the calling function

main:
		li		$v0, 4					# print prompt1
		la		$a0, prompt1
		syscall
		
		li		$v0, 5					# read integer for base
		syscall
		move	$a3, $v0				# for now keep base at a3 because we will use a0 to print string
		
		li		$v0, 4					# print prompt2
		la		$a0, prompt2
		syscall
		
		li		$v0, 5					# read integer for exponent
		syscall
		move	$a1, $v0				# put exponent to a1
		move	$a0, $a3				# take base from a3 and put it to a0 before calling power

		jal		power					# computer base^exponent
		
		move	$t0, $v0
		
		li		$v0, 4
		la		$a0, msg
		syscall
		
		li		$v0, 1
		move	$a0, $t0
		syscall							# display the result
		
		li		$v0, 10
		syscall
		
		