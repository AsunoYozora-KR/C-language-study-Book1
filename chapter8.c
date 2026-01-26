#include <stdio.h>

int main()
{
	/*chapter8-1 Example:
	
	int data = 5;
	if (data > 3) printf("data is bigger than 3. \n");
	printf("END");*/

	/*chapter8-2 Example:
	
	int score = 92;
	char grade;
	
	if (score >= 90) {
		grade = 'A';
		printf("score is %d, grade is %c.\n", score, grade);
	}
	printf("END");*/

	/*chapter8-3:
	
	int data = 5;
	if (data > 3) printf("data is bigger than 3.\n");
	else printf("data is same or samller than 3.\n");
	printf("END");*/

	/*chapter8-4 Example:
	
	int score = 82;
	char grade;

	if (score >= 90) {
		grade = 'A';
		printf("score is %d, grade is %c.\n", score, grade);
	}
	else {
		grade = 'B';
		printf("score is %d, grade is %c.\n", score, grade);
	}
	printf("END");*/

	/*chapter8-5 Example:
	
	int year = 2025, month = 12, day = 31;
	day++;

	if (day > 31) {
		month++;
		day = 1;

		if (month > 12) {
			year++;
			month = 1;
		}
	}
	printf("Date: %d.%d.%d\n", year, month, day);*/

	/*chapter8-6 Example:
	
	int score = 86;
	char grade;

	if (score >= 90) {
		grade = 'A';
	}
	else {
		if (score >= 80) {
			grade = 'B';
		}
		else {
			if (score >= 70) {
				grade = 'C';
			}
			else {
				if (score >= 60) {
					grade = 'D';
				}
				else {
					grade = 'F';
				}
			}
		}
	}
	printf("score is %d, grade is %c", score, grade);*/

	/*chapter8-7 Example:
	
	int score = 86;
	char grade;

	if (score >= 90) grade = 'A';
	else {
		if (score >= 80) grade = 'B';
		else {
			if (score >= 70) grade = 'C';
			else {
				if (score >= 60) grade = 'D';
				else {
					grade = 'F';
				}
			}
		}
	}
	printf("score is %d, grade is %c", score, grade);*/

/*chapter8-8 Example:

int score = 86;
char grade;

if (score >= 90) grade = 'A';
else if (score >= 80) grade = 'B';
else if (score >= 70) grade = 'C';
else if (score >= 60) grade = 'D';
else grade = 'F';

printf("score is %d, grade is %c", score, grade);*/

/*chapter8-9 Example:

int score;
char grade;

switch (score / 10) {
case 10:
case 9:
	grade = 'A';
	break;
case 8:
	grade = 'B';
	break;
case 7:
	grade = 'C';
	break;
case 6:
	grade = 'D';
	break;
default:
	grade = 'F';
	break;
}
printf("score is %d, grade is %c", score, grade);*/

}