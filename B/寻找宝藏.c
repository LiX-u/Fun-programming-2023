#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    int a = 1e9;
    int b = -1e9;
    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);
        if(x > 0)
            sum += x;
        if ((x & 1) && x > 0 && x < a)//找最小的正奇数
        {
            a = x;
        }
        if ((x & 1) && x < 0 && x > b)//找最大的负奇数
        {
            b = x;
        }
    }
    if (sum & 1)
    {
        printf("%d\n", sum);
    }
    else
    {
        a = sum - a;
        b = sum + b;
        printf("%d", a > b ? a : b);
    }
    return 0;
}
