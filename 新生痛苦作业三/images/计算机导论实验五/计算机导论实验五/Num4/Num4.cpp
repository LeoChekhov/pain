#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;
#pragma warning (disable:4996)
int main()
{
	double x;
	scanf("%lf", &x);
	if (x < 1)	printf("%lf\n", x);
	else {
		if (x < 10)	printf("%lf\n", 2 * x - 1);
		else printf("%lf\n", 3 * x);
	}
	return 0;
}