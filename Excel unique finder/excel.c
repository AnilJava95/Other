/*
 * Author's name and email: Michael
 * Program description: Finds the unique values of a csv file called 
 *  "2" compared to "1" on desktop.
 * Latest version: 12:24 PM, 12/5/2019. Now username of operating system is 
 *  taken automatically by the program instead of humans manually editing code
 *  when the code is transferred to another computer.
 * Older versions: 11/5/2019. Now the program use floating point values instead 
 *  of integer values.
 *    10/5/2019.
 */

 #include <stdio.h>
#include <string.h>


// This function truncates the data we dont need and puts relevant 
//  data to a new file.
void truncateTable(FILE* fp, FILE* fpTrun)
{
	char c;
	short commaCounter = 0;

	// Skip the first line
	while ((c = getc(fp)) != '\n');

	while ((c = getc(fp)) != EOF)
	{
		if (c == ',')
		{
			commaCounter++;

			// Copy "Hesaba Giren" to fpTrun
			if (commaCounter == 3)
			{
				while ((c = getc(fp)) != ',')
					putc(c, fpTrun);
				commaCounter++;
				putc(',', fpTrun);
			}

			// Copy "Aciklama" to fpTrun
			if (commaCounter == 7)
			{
				while ((c = getc(fp)) != ',')
					putc(c, fpTrun);
				putc(',', fpTrun);
				putc('\n', fpTrun);

				// Skip rest of the first line
				while ((c = getc(fp)) != '\n');

				commaCounter = 0; // reset commaCounter for the next line
			}
		}
	}

}

// This function finds the unique rows in b and copies them to c.
void findUniques(FILE* a, FILE* b, FILE* c)
{
	float fp2Number;
	char fp2String[77];

	float fp1Number;
	char fp1String[77];

	// bool flag
	char isUnique = 1;

	while (!feof(b))
	{
		fscanf(b, "%f,", &fp2Number);
		if (fp2Number == 0)
			break;

		fgets(fp2String, 77, b);
		
		while (!feof(a))
		{
			fscanf(a, "%f,", &fp1Number);
			fgets(fp1String, 77, a);

			if (fp2Number != fp1Number)
				continue;
			else if (strcmp(fp2String, fp1String) != 0)
				continue;
			else
			{
				isUnique = 0;
				break;
			}
		}

		if (isUnique == 1)
		{
			fprintf(c, "%f", fp2Number);
			fputs(",", c);
			fputs(fp2String, c);
		}
		isUnique = 1;
		rewind(a);

		// This reset makes sure we dont write the last value twice 
		//  while waiting for input in last line to be finished.
		fp2Number = 0;
		strcpy(fp2String, "");
	}
}
 
int main()
{
	// Operating system addresses of files.
	char address[40]; // The desktop directory of current computer.
	char address1[40];
	char address2[40];
	char addressa[40];
	char addressb[40];
	char addressc[40];

	// address string gets the desktop directory of current computer.
	sprintf(address, "%s\\Desktop\\", getenv("USERPROFILE"));

	// We copy address of directory to address of our files
	//  and then add names of files.
	sprintf(address1, "%s1.csv", address);
	sprintf(address2, "%s2.csv", address);
	sprintf(addressa, "%sa.csv", address);
	sprintf(addressb, "%sb.csv", address);
	sprintf(addressc, "%sc.csv", address);

	// Pointers to files.
	FILE *fp1;  // Pointer to the original smaller file.
	FILE *fp2; // Pointer to the original bigger file.
	FILE *a; // Pointer to truncated smaller file.
	FILE *b; // Pointer to truncated bigger file.
	FILE* c; // Pointer to unique values file.
	
	// Opening file 1 and 2 in read mode, a and b in write mode.
	fp1 = fopen(address1, "r");
	fp2 = fopen(address2, "r");
	a = fopen(addressa, "w");
	b = fopen(addressb, "w");

	// Test code
	/*
	char c;
	while ((c = getc(fp1)) != EOF)
		putch(c);
	*/

	// We truncate files 1 and 2 and assign those to files a and b.
	//  Then we close files a and b.
	truncateTable(fp1, a);
	truncateTable(fp2, b);
	fclose(a);
	fclose(b);
	
	// We open files a and b in read more and file c in write mode.
	//  Then we find uniques in file b and copy them to file c.
	a = fopen(addressa, "r");
	b = fopen(addressb, "r");
	c = fopen(addressc, "w");
	findUniques(a, b, c);
}