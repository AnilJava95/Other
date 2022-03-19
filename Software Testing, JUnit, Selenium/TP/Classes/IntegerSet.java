package programs;

/*
 * Author's name and email: Michael, michaeljava95@gmail.com
 * Program description: Keeps a set of integers as a boolean array. Has methods 
 *  that lets you find union, intersect of two sets. Has a method to see if 
 *  two sets are equal. Has methods to add or remove elements from sets. And 
 *  has a method to display a set.
 * Latest version: 4:23 PM, 9/6/2019
 * Older versions: 
 */

import java.util.Arrays;

public class IntegerSet
{
	boolean[] integerSet = new boolean[101];

	public IntegerSet()
	{
		Arrays.fill(integerSet, false);
	}

	public IntegerSet union(IntegerSet set2)
	{
		IntegerSet set3 = new IntegerSet();

		for (byte counter = 0; counter <= 100; counter++)
			if (integerSet[counter] || set2.integerSet[counter])
				set3.integerSet[counter] = true;

		return set3;
	}

	public IntegerSet intersection(IntegerSet set2)
	{
		IntegerSet set3 = new IntegerSet();

		for (byte counter = 0; counter <= 100; counter++)
			if (integerSet[counter] && set2.integerSet[counter])
				set3.integerSet[counter] = true;

		return set3;
	}

	public void insertElement(int element)
	{
		integerSet[element] = true;
	}

	public void deleteElement(int element)
	{
		integerSet[element] = false;
	}

	public String toString()
	{
		String setString = "";

		for (byte counter = 0; counter <= 100; counter++)
			if (integerSet[counter] == true)
				setString += counter + " ";
			else
				setString += "- ";

		return setString;
	}

	public boolean isEqualTo(IntegerSet set2)
	{
		for (byte counter = 0; counter <= 100; counter++)
			if (integerSet[counter] != set2.integerSet[counter])
				return false;

		return true;
	}
	
		public static void main(String[] args)
	{
		IntegerSet set1 = new IntegerSet();
		IntegerSet set2 = new IntegerSet();
		IntegerSet set3 = new IntegerSet();

		set1.insertElement(0);
		set1.insertElement(1);
		set1.insertElement(2);

		set2.insertElement(1);
		set2.insertElement(2);
		set2.insertElement(3);

		set3 = set1.union(set2);
		System.out.println("set1 union set2: \t" + set3.toString());
		System.out.println("");

		set3 = set1.intersection(set2);
		System.out.println("set1 intersect set2: \t" + set3.toString());
		System.out.println("");

		set1.deleteElement(0);
		System.out.println("set1 deleteElement 0: \t" + set1.toString());
		System.out.println("");

		System.out.println("set1 isEqualTo set2: " + set1.isEqualTo(set2));
		System.out.println("");
	}
}
