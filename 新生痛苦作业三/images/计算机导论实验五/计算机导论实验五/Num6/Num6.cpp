#include<cstdio>
#include<cstdlib>
using namespace std;
#define MAXN 10000010
int n, m;
int pri[MAXN + 1];
bool unpri[MAXN + 1]; //通过这个也可以快速判断一个数是不是素数
//true 代表不是素数 false代表是素数
//bool pri_[MAXN+1];
void Prime(int n)
{
    int tot = 0;
    for (int i = 2; i <= n; i++) {
        if (!unpri[i])   pri[++tot] = i;
        int j = 1, t = i * pri[1];
        while (j <= tot && t <= n) {
            unpri[t] = true;
            if (i % pri[j] == 0)   break;
            t = i * pri[++j];
        }
    }
}
int main()
{
    for (int i = 50; i <= 100; i++)
        if (i % 9 == 0)  printf("%d ", i);
    printf("\n");
    printf("\n");
    int n = 100;
    Prime(n);
    unpri[0] = true;
    unpri[1] = true;//0 1 不是素数     题目中一定要考虑号一切特殊情况 特判
    for (int i = 50; i <= 100; i++) {
        if (unpri[i] == false)   printf("%d ", i);
    }
    printf("\n");
    printf("\n");
    for(int i = 1;i <= 9;i++){
        for (int j = 1; j <= i; j++)
            printf("%d ", i * j);
        printf("\n");
        }
    printf("\n");
    for (int i = 1; i <= 5; i++) {
        for (int z = 1; z <= i - 1; z++)
            printf(" ");
        for (int j = 5 - i + 1; j >= 1; j--)
            printf("#");
        printf("\n");
    }
	return 0;
}