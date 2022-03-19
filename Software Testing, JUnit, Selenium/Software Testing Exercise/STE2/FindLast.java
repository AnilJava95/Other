public class FindLast
{
	public static int findLast(int[] x, int y)
	{
		for (int i = x.length - 1; i >= 0; i--) // old code: i > 0
			if (x[i] == y)
				return i;
		
		return -1;
	}

	public static void main(String[] args)
	{
		int x[] = {2, 3, 5};
		System.out.println(findLast(x, 2));
	}
}
