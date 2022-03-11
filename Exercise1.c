#include <stdio.h>
int main()
{
	int m, n, temp;
	printf("User insert the value of m and n:");
	scanf("%d %d", &m, &n);
	printf("Prior to switching m = %d,b = %d\n", m,n);
	temp = m;
	m = n;
	n = temp;
	printf("After switching m = %d, n = %d", m,n);
	return 0;
}
