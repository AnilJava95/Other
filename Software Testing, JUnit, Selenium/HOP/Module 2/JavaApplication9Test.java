/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import org.junit.After;
import org.junit.AfterClass;
import org.junit.Before;
import org.junit.BeforeClass;
import org.junit.Test;
import static org.junit.Assert.*;

/**
 * Unit test for simple JavaApplication9.
 */
public class JavaApplication9Test
{
	/**
	 * Rigorous Test :-)
	 */
	@Test
	public void shouldAnswerWithTrue()
	{
		assertTrue(true);
	}

	@Test
	public void add_TwoPlusTwo_ReturnsFour()
	{
		// Arrange
		final int expected = 4;

		// Act
		final int actual = JavaApplication9.add(2, 2);

		// Assert
		assertEquals(actual, expected);
	}

	@Test
	public void multiply_FourTimesTwo_ReturnsEight()
	{
		// Arrange
		final int expected = 8;

		// Act
		final int actual = JavaApplication9.multiply(4, 2);

		// Assert
		assertEquals(actual, expected);
	}

	@Test
	public void divide_TenDividedTwo_ReturnsFive()
	{
		// Arrange
		final int expected = 5;

		// Act
		final int actual = JavaApplication9.divide(10, 2);

		// Assert
		assertEquals(actual, expected);
	}
}
