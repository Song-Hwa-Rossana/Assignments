#include<stdio.h>
int main()
{
	int a, b;
	int perimeter, area;
	scanf("%d %d", &a, &b);
	perimeter = 2 * (a+b);
	area = a * b;
	printf("c=%d, s=%d\n", perimeter, area);
	return 0;
}