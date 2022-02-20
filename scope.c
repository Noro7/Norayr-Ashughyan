#include <stdio.h>
int increment(int i)
{
	int a = i + 1;
	return a;
}

int main()
{
	int n = 0;
	printf("Enter integer: \n");
	scanf("%d", &n);
	int n1 = increment(n);
	int n2 = increment(n1);
	printf("incerement %d", n2);
	return 0;
}
