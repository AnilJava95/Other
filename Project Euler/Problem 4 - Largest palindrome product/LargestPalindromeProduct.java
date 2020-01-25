/*
 * Author's name and email: Michael
 * Program description: Find the largest palindrome made from the product of two 
 *  3-digit numbers.
 * Latest version: 5:04 PM 6/18/2019.
 * Older versions: 
 */

public class LargestPalindromeProduct
{
   public static void main(String[] args)
   {
		int largestPalindrome = 0;
		
		for (short number1 = 999; number1 >= 100; number1--)
		{
			for (short number2 = 999; number2 >= 100; number2--)
			{
				if (number1 >= number2) // Gets rid of duplicates.
				{
					int product = number1 * number2;
					if (isPalindrome(product) && product > largestPalindrome)
					{
						largestPalindrome = product;
					}
				}
			}
		}
		System.out.println("Largest palindrome made from the product of two "
			+ "3-digit numbers: " + largestPalindrome);
		
   }
	
	private static boolean isPalindrome(int number)
	{
		int tempnumber = number;
		int reverseNumber = 0;
		
		while (tempnumber > 1)
		{
			reverseNumber *= 10;
			reverseNumber += tempnumber % 10;
			tempnumber /= 10;
		}
		
		if (number == reverseNumber)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}