#include<stdio.h>
int main()
{
    int a=0,b=0,i,j,n;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);

    for(i=0;i<n;i++)
    {
        if(str[i]=='z')
        {
            a++;
        }
        if(str[i]=='n')
        {
            b++;
        }
    }
    for(j=0;j<b;j++)
    {
        printf("1 ");
    }
    for(j=0;j<a;j++)
    {
        printf("0 ");
    }

    return 0;


}
