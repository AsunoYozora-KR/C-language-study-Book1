#include <stdio.h>

int Sum(int value1, int value2)
{
	int result = value1 + value2;
	return result;
}

int main()
{
	int s = Sum(2, 3);
	printf("The result is %d", s);
}