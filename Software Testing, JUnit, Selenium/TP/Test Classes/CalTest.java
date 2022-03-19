/*
Inputs to cover all paths of blocks of triang method.

1- months are equal: 1, 8, 1, 15, 2020

2- months are not equal: 1, 8, 5, 15, 2020
3- months are not equal: 1, 8, 5, 15, 2019

4- 
5- 
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
public class CalTest
{

	public CalTest()
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
	 * Months are equal.
	 */
	@Test
	public void testCal()
	{
		System.out.println("cal month1 == month2");
		int month1 = 1;
		int day1 = 8;
		int month2 = 1;
		int day2 = 15;
		int year = 2020;
		int expResult = 7;

		int result = Cal.cal(month1, day1, month2, day2, year);

		assertEquals(expResult, result);
	}

	/**
	 * Months are not equal. Leap year.
	 */
	@Test
	public void testCal2()
	{
		System.out.println("cal month1 != month2. leap year");
		int month1 = 1;
		int day1 = 8;
		int month2 = 5;
		int day2 = 15;
		int year = 2020;
		int expResult = 128;

		int result = Cal.cal(month1, day1, month2, day2, year);

		assertEquals(expResult, result);
	}

	/**
	 * Months are not equal. Non leap year.
	 */
	@Test
	public void testCal3()
	{
		System.out.println("cal month1 != month2. non leap year");
		int month1 = 1;
		int day1 = 8;
		int month2 = 5;
		int day2 = 15;
		int year = 2019;
		int expResult = 127;

		int result = Cal.cal(month1, day1, month2, day2, year);

		assertEquals(expResult, result);
	}
}
