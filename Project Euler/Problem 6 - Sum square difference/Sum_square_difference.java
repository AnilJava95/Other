/*
 * Author's name and email: Michael
 * Program description: Find the difference between the sum of the squares of 
 *  the first one hundred natural numbers and the square of the sum.
 * Latest version: 11:16 PM, 6/19/2019.
 * Older versions: 
 */

public class Sum_square_difference
{
	public static void main(String[] args)
	{
		int squareOfSum;
		int sumOfSquares = 0;
		
		// Square of the sum.
		squareOfSum = (int) Math.pow(5050, 2); // 100 * 101 / 2 = 5050
		
		// Sum of the squares.
		for (byte counter = 1; counter <= 100; counter++)
		{
			sumOfSquares += Math.pow(counter, 2);
		}
		/*
		sumOfSquares = (2 * 100 + 1) * (100 + 1) * 100 / 6;
		*/
		
		System.out.printf("%,d%n", squareOfSum - sumOfSquares);
	}
}