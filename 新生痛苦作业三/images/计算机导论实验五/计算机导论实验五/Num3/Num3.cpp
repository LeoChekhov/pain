#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
	double r = 1.5;
	double h = 3, temp = 3.1415926;
	double c, s, S, V1, V2;
	c = 2 * temp * r;
	//double temp2 = pow(r, 2);
	s = temp * pow(r,2);
	S = 4 * temp * pow(r,2);
	V1 = 4 * temp * pow(r, 3) / 3;
	V2 = s * h;
	printf("Բ���ܳ� = %lf \nԲ��� = %lf \nԲ������ = %lf \nԲ����� = %lf \nԲ����� = %lf\n", c, s, S, V1, V2);
	return 0;
}