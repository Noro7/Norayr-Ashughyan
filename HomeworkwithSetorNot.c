#include <stdio.h>
int main()
{
	int shift;
	int number, location;
	printf("User insert the number");
	scanf("%d", &number);
	printf("User insert location");
	scanf("%d", &location);
	shift = 1<< location;
        number = number & shift;
	if (number ==0){
		printf("Not");
	}
	else {
		printf("Set"); }
	return 0;
}
