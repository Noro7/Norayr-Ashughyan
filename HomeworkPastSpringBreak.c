#include <stdio.h>
int main() {
	int i;
	printf("User insert the lenght of Array:");
	scanf("%d",&i);
	int arr[i];
	for (int j = 0; j < i;j++){
		scanf("%d",&arr[j]);
	}
	for (int j = 0; j < i;j++){
		if (arr[j] < 0) {
			printf("%d\n",arr[j]);
		}
	}
	return 0;
};
