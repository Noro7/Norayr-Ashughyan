#include <stdio.h>
void set_nth_1(int*q, int n)
{
	int shift = 1 <<(n-1);
	*q= *q|shift;};
void set_nth_0(int*q,int n)
{
	int shift = 1 <<(n-1);
	*q=*q & (!(shift));
};
void toggle_nth(int*q,int n)
{
	*q=!*q;
}
int main()
{
	int M = 1025;
	int N = 5;
	set_nth_1(&M,N);
	printf("%d",M);
	return 0;
};
