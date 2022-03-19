/*
Inputs to cover all paths of blocks of triang method.

1- negative side length: -3, 4, 5

2- a triangle where side1 = side2: 3, 3, 4
3- a triangle where side2 = side3: 4, 3, 3
4- a triangle where side1 = side3: 3, 4, 3
5- a triangle where side1 = side2 = side3: 3, 3, 3

6- a invalid triangle: 1, 2, 3
7- a scalene triangle: 2, 3, 4
 */

 /*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package programs;

import org.junit.After;
import org.junit.AfterClass;
import org.junit.Before;
import org.junit.BeforeClass;
import org.junit.Test;
import static org.junit.Assert.*;

/**
 *
 * @author Michael
 */
public class TriTypTest
{
	private TriTyp triTyp = new TriTyp();

	public TriTypTest()
	{
	}

	@BeforeClass
	public static void setUpClass()
	{
	}

	@AfterClass
	public static void tearDownClass()
	{
	}

	@Before
	public void setUp()
	{
	}

	@After
	public void tearDown()
	{
	}

	/**
	 * Negative side length.
	 */
	@Test
	public void testTriang()
	{
		System.out.println("triang negative side length");
		int side1 = -3;
		int side2 = 4;
		int side3 = 5;
		int expectedResult = 4;

		int result = triTyp.triang(side1, side2, side3);

		assertEquals(expectedResult, result);
	}

	/**
	 * side1 == side2
	 */
	@Test
	public void testTriang2()
	{
		System.out.println("triang side1 == side2");
		int side1 = 3;
		int side2 = 3;
		int side3 = 4;
		int expectedResult = 2;

		int result = triTyp.triang(side1, side2, side3);

		assertEquals(expectedResult, result);
	}

	/**
	 * side2 == side3
	 */
	@Test
	public void testTriang3()
	{
		System.out.println("triang side2 == side3");
		int side1 = 4;
		int side2 = 3;
		int side3 = 3;
		int expectedResult = 2;

		int result = triTyp.triang(side1, side2, side3);

		assertEquals(expectedResult, result);
	}

	/**
	 * side1 == side3
	 */
	@Test
	public void testTriang4()
	{
		System.out.println("triang side1 == side3");
		int side1 = 3;
		int side2 = 4;
		int side3 = 3;
		int expectedResult = 2;

		int result = triTyp.triang(side1, side2, side3);

		assertEquals(expectedResult, result);
	}

	/**
	 * side1 = side2 = side3
	 */
	@Test
	public void testTriang5()
	{
		System.out.println("triang equilateral triangle");
		int side1 = 3;
		int side2 = 3;
		int side3 = 3;
		int expectedResult = 3;

		int result = triTyp.triang(side1, side2, side3);

		assertEquals(expectedResult, result);
	}

	/**
	 * non-valid triangle
	 */
	@Test
	public void testTriang6()
	{
		System.out.println("triang invalid triangle");
		int side1 = 1;
		int side2 = 2;
		int side3 = 3;
		int expectedResult = 4;

		int result = triTyp.triang(side1, side2, side3);

		assertEquals(expectedResult, result);
	}

	/**
	 * scalene triangle
	 */
	@Test
	public void testTriang7()
	{
		System.out.println("triang scalene triangle");
		int side1 = 2;
		int side2 = 3;
		int side3 = 4;
		int expectedResult = 1;

		int result = triTyp.triang(side1, side2, side3);

		assertEquals(expectedResult, result);
	}
}
