#include <stdio.h>

	int main()
{
	int age; 
	float gpa;
	char grade;

	printf("Enter your age: ");
	scanf("%i", &age);
	fflush(stdin);

	printf("Enter your GPA: ");
	scanf(" %f", &gpa);
	fflush(stdin);

	printf("Enter your grade: ");
	scanf(" %c", &grade);
	fflush(stdin);

	printf("Your age is: %i\n", age);
	printf("Your GPA is: %f\n", gpa);
	printf("Your grade is: %c\n", grade);	

	return 0;
}


