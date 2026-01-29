#include <stdio.h>

/*chapter9-6 Exmaple:

void ShowMultiplication(int step)
{
	int i;
	for (i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", step, i, step * i);
	}
}*/

void main()
{
	/*chapter9-1 Example:
	
	int sum = 0, num;

	for (num = 1; num <= 5; num++) {
		printf("num(%d) + sum(%d) = ", num, sum);
		sum = sum + num;
		printf("%d\n", sum);
	}
	printf("\nResult : num = %d sum = %d\n",num, sum);*/

	/*chapter9-2 Example:
	
	int sum = 0;
	int num = 1;
	for (;;) {
		printf("num(%d) + sum(%d) = ", num, sum);
		sum = sum + num;
		printf("%d\n", sum);
		num++;
		if (num > 5) break;
	}
	printf("\nResult : num = %d sum = %d\n", num, sum);*/

	/*chapter9-3 Example:
	
	int sum = 0;
	int num = 1;

	while (num <= 5) {
		printf("num(%d) + sum(%d) = ", num, sum);
		sum = sum + num;
		printf("%d\n", sum);
		num++;
	}
	printf("\nResult : num = %d sum = %d\n", num, sum);*/

	/*chapter9-4 Example:
	
	int sum = 0;
	int num = 1;

	do {
		printf("num(%d) + sum(%d) = ", num, sum);
		sum = sum + num;
		printf("%d\n", sum);
		num++;
	} while (num <= 5);
	printf("\nResult : num = %d sum = %d\n", num, sum);*/

	/*chapter9 - 5 Exampke:
	
	int i;
	for (i = 1; i <= 9; i++) {
		printf("2 * %d = %d\n", i, 2 * i);
	}*/
	
	/*chapter9-6 Example:
	
	int m;
	for (m = 2; m <= 9; m++) {
		ShowMultiplication(m);
	}*/

	/*chapter9-7 Example:
	
	int m, n;
	for (m = 5; m < 7; m++) {
		for (n = 0; n < 3; n++)
			printf("m(%d) - n(%d)\n", m, n);
	}*/

	/*chapter9-8 Example:
	
	int step, i;
	for (step = 2; step <= 9; step++) {
		for (i = 1; i <= 9; i++)
			printf("%d * %d = %d\n", step, i, step * i);
	}*/

	/*chapter9-9 Example:
	
	int m, n;
	for (m = 5; m < 7; m++) {
		for (n = 0; n < 3; n++) {
			if (m == 5 && n == 1) break;
			printf("m(%d) - n(%d)\n", m, n);
		}
	}*/

	/*chapter9 - 9 Example:
	
	int m, n;
	for (m = 5; m < 7; m++) {
		for (n = 0; n < 3; n++) {
			if (m == 5 && n == 1) break;
			printf("m(%d) - n(%d)\n", m, n);
		}
		if (m == 5 && n == 1) break;
	}*/
	
	/*chapter9-10 Example:

	int m;
	for (m = 5; m < 8; m++) {
		if (m == 6) continue;
		printf("m(%d)\n", m);
	}*/

	/*chapter9-11 Example:

	int m, n;
	for (m = 5; m < 7; m++) {
		for (n = 0; n < 3; n++) {
			if (m == 5 && n == 1) goto exit_pos;
			printf("m(%d) - n(%d)\n", m, n);
		}
	}
	exit_pos:
	printf("<END>\n");*/

}

