#include<stdio.h>
#define PI 3.14
int main()
{
	double r, s, c;
	scanf_s("%lf", &r);
	s = PI * r * r;
	c = r * 2 * PI;
	printf("s=%lf c=%lf\n", s, c);
	return 0;

}