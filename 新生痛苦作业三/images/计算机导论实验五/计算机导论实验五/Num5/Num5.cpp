#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;
#pragma warning (disable:4496)
int main()
{
	int n;
	cin >> n;
	if (n % 3 == 0 && n % 5 == 0)	printf("Yes\n");
	else printf("No\n");
	return 0;
}