/*
	Name of the program: NewtonRaphsonCalculator
	Copyright:
	Author: Anýl Ertürk
	E-Mail: anilerturk1@gmail.com
	Date of relase(v1.0): 23.02.16 12:40
	Date's of edits: 
	Description: This can calculator can find the real roots of functions.
*/

#include<stdio.h>
#include<math.h>

int main() {
	
	float function( float x ) {
		//return pow( x, 3.0 ) + ( 4 * pow( x, 2.0 ) ) -10;
		return x*log10(x) - 1.2;
	}
	
	float derivativeFunction( float x) {
		//return ( 3 * pow( x, 2.0 ) ) + ( 8 * x );
		return log10(x) + 0.43429;
	}
	
	int rangeMin, rangeMax;
	float x0, root2, error, temp;
	
	printf("Enter x0, error and maximum range: ");
	
    scanf("%f %f %d", &x0, &error, &rangeMax);
    printf("\n");
    
    for ( rangeMin=1; rangeMin<=rangeMax; rangeMin++ )
    {
        temp = function(x0) / derivativeFunction(x0);
        root2 = x0 - temp;
        printf("%d x = %5.6f\n", rangeMin, root2);
        
        if ( fabs(temp) < error )
        {
            printf("\nRoot = %5.6f\n", rangeMin, root2);
            return 0;
        }
        x0 = root2;
    }
	
	getchar();
	return 0;
} // end main

