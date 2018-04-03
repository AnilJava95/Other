/*
 *	Name: CourseGrade
 *	Copyright: Anil Erturk
 *	Author: Anil Erturk
 *	E-Mail: anilerturk1@gmail.com
 *	Date of relase(v1.0): 23:56 12.07.2016
 *	Dates of updates and changelog: 
 *	Description of the last version: Takes course name, course number, grades 
 *   and grade weights, then calculates and prints average grade of course
 */

#include<stdio.h> // program uses stdio.h library

int main(void) {
	
	int courseNumber; // integer for course number
	char courseName[30]; // string for course name
	int quizWeight; // integer for quiz weight
	int homeworkWeight; // integer for homework weight
	int finalWeight; // integer for final weight
	int grade; // integer to hold inputted grades
	int total = 0; // integer to hold totals of quizzes, homeworks etc.
	int quizNumber = 0; // integer to hold how many quiz grades there are
	float quizAverage = 0; // float that holds quizAverage;
	int homeworkNumber = 0; // integer to hold how many homework grades there are
	float homeworkAverage = 0; // float that holds homeworkAverage;
	int ifGrades; // integer that holds if there are final grades to input
	int finalNumber = 0; // integer to hold how many final grades there are
	float finalAverage = 0; // float that holds finalAverage;
	float averageGrade = 0; // float that holds average grade for course
	
	// prompting and reading variables
	printf("Input course number: "); // prompt course number
	scanf("%d", &courseNumber); // read course number
	
	getchar(); 
	getchar(); 
	
	printf("Input course name: "); // prompt course name
	gets(courseName); // read course name
	
	printf("\nInput weighting factor for quizes(WQ): "); // prompt quiz weight
	scanf("%d", &quizWeight); // read quiz weight
	
	printf("Input weighting factor for homeworks(WH): "); // prompt homework weight
	scanf("%d", &homeworkWeight); // read homework weight
	
	printf("Input weighting factor for finals(WF): "); // prompt final weight
	scanf("%d", &finalWeight); // read final weight
	
	// reading quiz grades and calculating quiz average
	printf("\nEnter quiz grade or enter -1 to exit: ");
	scanf("%d", &grade);
	
	while (grade != -1) 
	{
		total = total + grade;
		quizNumber = quizNumber + 1;
		printf("Enter quiz grade or enter -1 to exit: ");
		scanf("%d", &grade);
	}
	
	if (quizNumber == 0)
	{
		printf("You didnt enter any quiz grades. Quiz average will be 0 by default\n");
	}
	else
	{
		quizAverage = (float)total /  quizNumber;
		total = 0;
	}
	
	// reading homework grades and calculating homework average
	printf("\nEnter homework grade or enter -1 to exit: ");
	scanf("%d", &grade);
	
	while (grade != -1) 
	{
		total = total + grade;
		homeworkNumber = homeworkNumber + 1;
		printf("Enter homework grade or enter -1 to exit: ");
		scanf("%d", &grade);
	}
	
	if (homeworkNumber == 0)
	{
		printf("You didnt enter any homework grades. Quiz average will be 0 by default\n");
	}
	else
	{
		homeworkAverage = (float) total /  homeworkNumber;
		total = 0;
	}
	
	// asking user if this course has final grades
	printf("\nEnter 1 if there is final grades for this course else enter 2: ");
	scanf("%d", &ifGrades);
	
	if (ifGrades == 1)
	{
		// reading homework grades and calculating final average
		printf("Enter final grade or enter -1 to exit: ");
		scanf("%d", &grade);
	
		while (grade != -1) 
		{
			total = total + grade;
			finalNumber = finalNumber + 1;
			printf("Enter final grade or enter -1 to exit: ");
			scanf("%d", &grade);
		}
	
		if (finalNumber == 0)
		{
			printf("You didnt enter any final grades. Quiz average will be 0 by default\n");
		}
		else
		{
			finalAverage = (float) total /  finalNumber;
			total = 0;
		}
		
		// calculating average grade for course(AG)
		averageGrade = (quizWeight * quizAverage + homeworkWeight * homeworkAverage + finalWeight * finalAverage) / (quizWeight + homeworkWeight + finalWeight);
	}
	else
	{
		// calculating average grade for course(AG)
		averageGrade = (quizWeight * quizAverage + homeworkWeight * homeworkAverage ) / (quizWeight + homeworkWeight);
	}
	
	// prints results
	printf("\nCourse number: %d\nCourse name: %s\nAverage Grade: %.2f", courseNumber, courseName, averageGrade);
	
	
	getchar();
	return 0;
}

