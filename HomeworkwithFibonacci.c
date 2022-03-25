#include <stdio.h>
int main()
{
	int lenght;
	printf("User insert the sequence lenght");
	scanf("%d", &lenght);
	int arr[lenght];
	arr[0]=0;
        arr[1]=1;
        for (int i = 2; i<=lenght; i++)
	{
		arr[i]= arr[i-1]+arr[i-2];
		}
	for (int i = 0; i<lenght; i++) 
	{
		printf("%d",arr[i]);
	}
	return 0;}
