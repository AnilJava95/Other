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
public class IntegerSetTest
{
	IntegerSet set1 = new IntegerSet();
	IntegerSet set2 = new IntegerSet();
	IntegerSet set3 = new IntegerSet();

	public IntegerSetTest()
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
	 * Union set1 and set2.
	 */
	@Test
	public void testUnion()
	{
		System.out.println("union");
		boolean expResult = true;

		set1.insertElement(0);
		set2.insertElement(1);
		set3 = set1.union(set2);
		boolean result = set3.integerSet[0] && set3.integerSet[1];

		assertEquals(expResult, result);
	}

	/**
	 * Intersect set1 and set2.
	 */
	@Test
	public void testIntersection()
	{
		System.out.println("intersection");
		boolean expResult = false;

		set1.insertElement(0);
		set2.insertElement(1);
		set3 = set1.intersection(set2);
		boolean result = set3.integerSet[0] && set3.integerSet[1];

		assertEquals(expResult, result);
	}

	/**
	 * Insert element to set1.
	 */
	@Test
	public void testInsertElement()
	{
		System.out.println("insert");
		boolean expResult = true;

		set1.insertElement(0);
		boolean result = set1.integerSet[0];

		assertEquals(expResult, result);
	}

	/**
	 * Delete element from set1.
	 */
	@Test
	public void testDeleteElement()
	{
		System.out.println("delete");
		boolean expResult = false;

		set1.insertElement(0);
		set1.deleteElement(0);
		boolean result = set1.integerSet[0];

		assertEquals(expResult, result);
	}

	/**
	 * Test of toString with set1.
	 */
	@Test
	public void testToString()
	{
		System.out.println("toString");
		boolean expResult = true;

		set1.insertElement(0);
		System.out.println(set1);
		boolean result = "0".equals(set1.toString().charAt(0));

		assertEquals(expResult, result);
	}

	/**
	 * Test of isEqualTo with set1 and set2.
	 */
	@Test
	public void testIsEqualTo()
	{
		System.out.println("isEqualTo");
		boolean expResult = true;

		set1.insertElement(0);
		set2.insertElement(0);
		boolean result = set1.isEqualTo(set2);

		assertEquals(expResult, result);
	}
}
