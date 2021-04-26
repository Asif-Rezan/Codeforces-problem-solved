#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c)
    {
        printf("Equilateral Triangle\n");
    }
    else if((a==b || a==c)||(b==a || b==c)||(c==a||c==b))
    {
        printf("Isosceles Triangle\n");
    }
    else
    {
        printf("Bad Triangle\n");
    }

    return 0;
}
