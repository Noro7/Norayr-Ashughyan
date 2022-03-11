#include <stdio.h>
int main()
{
	int m, n, k;
	printf("User insert three numbers");
	printf("\nInsert m: ");
	scanf("%d", &m);
	printf("\nInsert n: ");
	scanf("%d", &n);
	printf("\nInsert k: ");
	scanf("%d" , &k);

	printf("The biggest number is");
	if (m<n) {
		if (n<k) {
			printf("k");
		}
		else {
			printf("n");
		}
	}
	else {
		if (m<k) {
			printf("k");
		}
		else {
			printf("m");
		}
	}
}
