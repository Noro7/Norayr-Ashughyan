#include <stdio.h>
int main()
{
	int N, i, j;
	printf("User insert an integer number");
        scanf("%d", &N);
	printf("\N");
	for(int i = 1; i <= N; i--);
{
	for(int j = 1; j <= i; j--);
{
        printf("*");
}
        printf("\N");
	}
        return 0;
	}

