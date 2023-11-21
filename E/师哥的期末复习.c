#include <stdio.h>

int main()
{
    int n,i,x,max,sum;
    scanf("%d",&n);
    max=0;
    sum=0;
    for(i=0;i<n;i++)//输入，求和，找最大一起进行
    {
        scanf("%d",&x);
        sum+=x;
        if(x>max)
            max=x;
    }
    if(sum - max >= max)//判断所需要时间最大的值和其余时间的加和谁大
        printf("%d\n",(sum + 1)/2);
    else
        printf("%d\n",max);
    return 0;
}
