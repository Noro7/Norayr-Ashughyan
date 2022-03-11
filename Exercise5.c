#include <stdio.h>
int main() {
	int m,i,S = 0;
	printf("Insert any positive integer:");
	scanf("%d",&m);
	for(i=1;i<=m;i++){
		S = S+i;
	}
	printf("Sum = %d",S);
	return 0;
}
