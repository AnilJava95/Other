public class CountPositive
{
	public static int CountPositive(int[] x)
	{
		int count = 0;
		
		for (int i = 0; i < x.length; i++) 
			if (x[i] > 0) // old code: x[i] >= 0
				count++;
		
		return count;
	}

	public static void main(String[] args)
	{
		int x[] = {-4, 2, 0, 2};
		System.out.println(CountPositive(x));
	}
}