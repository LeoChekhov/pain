#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
	double a, b;
	cin >> a >> b;
	double ans;
	ans = 3 * a * (b + 4) / 2;
	//cout << ans << endl;
	printf("%lf\n", ans);
	return 0;
}