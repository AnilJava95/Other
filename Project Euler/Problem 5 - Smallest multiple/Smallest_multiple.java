/*
 * Author's name and email: Michael
 * Program description: What is the smallest positive number that is evenly 
 *  divisible by all of the numbers from 1 to 20?
 * Latest version: 10:51 PM 6/18/2019.
 * Older versions: 
 */

public class Smallest_multiple
{
	public static void main(String[] args)
	{
		byte[] array1 = new byte[20];
		array1[0] = 2;
		array1[1] = 3;

		int smallestMultiple = 1;
		byte tempCounter;

		/* We are going through numbers from 1 to 20 one by one. We divide each 
		 number by elements of array1 one by one. If an element of array1 divides 
		 current number evenly, we actually go through with the division. After 
		 we try the last element of array1, if the current number is still not 1, 
		 we add it to end of array1. */
		for (byte counter = 4; counter <= 20; counter++)
		{
			tempCounter = counter;

			byte counter2 = 0;
			while (array1[counter2] != 0)
			{
				if (tempCounter % array1[counter2] == 0)
				{
					tempCounter /= array1[counter2];
				}
				counter2++;
			}
			array1[counter2] = tempCounter;
		}

		byte counter2 = 0;
		while (array1[counter2] != 0)
		{
			smallestMultiple *= array1[counter2];
			counter2++;
		}
		System.out.println(smallestMultiple);
	}
}
