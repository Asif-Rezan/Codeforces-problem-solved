#include <stdio.h>
int main()
{
    int a,b,c,d,sum;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    sum=a+b+c+d;
    if(sum%2==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
