package other;

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
 *
 * @author Michael
 */
public class BoundedQueueTest
{

	Object o0 = null;
	Object o1 = "o1";
	Object o2 = "o2";

	BoundedQueue instance1 = new BoundedQueue(2);
	BoundedQueue instance2 = new BoundedQueue(0);

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
	 * enQueue a null object to the queue.
	 */
	@Test(expected = NullPointerException.class)
	public void testEnQueue()
	{
		System.out.println("enQueue null o");
		
		instance1.enQueue(o0);
	}

	/**
	 * enQueue an object to the queue when size == capacity.
	 */
	@Test(expected = IllegalStateException.class)
	public void testEnQueue2()
	{
		System.out.println("enQueue size == capacity");
		
		instance2.enQueue(o1);
	}

	/**
	 * enQueue an object to the queue.
	 */
	@Test
	public void testEnQueue3()
	{
		System.out.println("enQueue");
		int expectedValue = 1;
		
		instance1.enQueue(o1);
		int result = instance1.getSize();
		
		assertEquals(expectedValue, result);
	}

	/**
	 * deQueue when size is 0.
	 */
	@Test(expected = IllegalStateException.class)
	public void testDeQueue()
	{
		System.out.println("deQueue size == 0");
		
		instance1.deQueue();
	}

	/**
	 * deQueue an object from the queue.
	 */
	@Test
	public void testDeQueue2()
	{
		System.out.println("deQueue");
		int expResult = 0;
		
		instance1.enQueue(o1);
		instance1.deQueue();
		int result = instance1.getSize();
		
		assertEquals(expResult, result);
	}

	/**
	 * Test isEmpty when array is not empty.
	 */
	@Test
	public void testIsEmpty()
	{
		System.out.println("isEmpty size != 0");
		boolean expResult = false;
		
		instance1.enQueue(o1);
		boolean result = instance1.isEmpty();
		
		assertEquals(expResult, result);
	}

	/**
	 * Test isEmpty when array is empty.
	 */
	@Test
	public void testIsEmpty2()
	{
		System.out.println("isEmpty size == 0");
		boolean expResult = true;
		
		boolean result = instance1.isEmpty();
		
		assertEquals(expResult, result);
	}

	/**
	 * Test isFull when array is not full.
	 */
	@Test
	public void testIsFull()
	{
		System.out.println("isFull size != capacity");
		boolean expResult = false;
		
		boolean result = instance1.isFull();
		
		assertEquals(expResult, result);
	}

	/**
	 * Test isFull when array is full.
	 */
	@Test
	public void testIsFull2()
	{
		System.out.println("isFull size == capacity");
		boolean expResult = true;
		
		boolean result = instance2.isFull();
		
		assertEquals(expResult, result);
	}

	/**
	 * Test toString when array is empty.
	 */
	@Test
	public void testToString()
	{
		System.out.println("toString size == 0");
		String expResult = "[]";
		
		String result = instance1.toString();
		
		assertEquals(expResult, result);
	}

	/**
	 * Test toString when array is not empty.
	 */
	@Test
	public void testToString2()
	{
		System.out.println("toString size != 0");
		String expResult = "[o1, o2]";
		
		instance1.enQueue(o1);
		instance1.enQueue(o2);
		String result = instance1.toString();
		
		assertEquals(expResult, result);
	}
}
