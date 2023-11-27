#include<stdio.h>
#include<string.h>
int main()
{

    int n; 
    scanf("%d",&n);
    getchar();
    for(int i=1;i<=n;i++)
    {
        char c;c=getchar();
        int s=0,score=0;
        while(c!='\n')
        {

            if(c=='z')
            s++;
            if(c=='p')
                s=0;
            score+=s;
                c=getchar();

        }
        printf("%d\n",score);
    }
    return 0;
}
