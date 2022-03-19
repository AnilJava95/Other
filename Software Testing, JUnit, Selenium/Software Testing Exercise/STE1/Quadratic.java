/*
We pass X, Y, Z to the root method from main method as arguments. Root method 
takes these three parameters and uses them as local variables.

root1 and root2 static fields dont need to be passed since they are static fields 
which means they are avaiable from the entire class and they are available without 
a need to instantiate an object of the class. So we can just assign values to 
them in the root method and then access to these values in the main method.
 */

public class Quadratic
{
	// static fields
	private static double root1, root2;

	public static void main(String[] argv)
	{
		// 2 integer and 1 boolean local variables
		int X, Y, Z;
		boolean ok;

		// execute the "if block" only if the main method's parameter list length is 3
		if (argv.length == 3)
		{
			// we use try block for code that can throw an exception
			try
			{
				// we try to convert main method parameters to integer and assign to X, Y, Z
				X = Integer.parseInt(argv[0]);
				Y = Integer.parseInt(argv[1]);
				Z = Integer.parseInt(argv[2]);
			}
			// if the code in "if block" throws an exception, "catch block" handles it
			catch (NumberFormatException e)
			{
				// print error message and assign default values to X, Y, Z
				System.out.println("Input not integers, using 8, 10, -33.");
				X = 8;
				Y = 10;
				Z = -33;
			}
		}
		// execute if main method's parameter list is not 3
		else
		{
			// print error message and assign default values to X, Y, Z
			X = 8;
			Y = 10;
			Z = -33;
		}

		// call the root method with X, Y, Z arguments and assign the bool result to ok
		ok = root(X, Y, Z);
		// execute if ok is true
		if (ok)
			System.out.println("Quadratic Root 1 = " + root1 + ", Root 2 = " + root2);
		// execute if ok is false
		else
			System.out.println("No Solution.");
	}

	// TFinds quadratic root, A must be non-zero
	private static boolean root(int A, int B, int C)
	{
		// local variables on top of A, B, C parameters
		double D;
		boolean Result;

		// delta = B*2 -4*A*C
		D = (double) (B * B) - (double) (4.0 * A * C);

		// if delta is negative, there are no roots
		if (D < 0.0)
		{
			// return false
			Result = false;
			return (Result);
		}
		// if delta is positive, we can calculate two roots with the following equations
		else
		{
			root1 = (double) ((-B + Math.sqrt(D)) / (2.0 * A));
			root2 = (double) ((-B - Math.sqrt(D)) / (2.0 * A));
			
			// return true
			Result = true;
			return (Result);
		}
	} // End method Root49 
} // End class Quadratic

