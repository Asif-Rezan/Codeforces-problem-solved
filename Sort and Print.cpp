#include<stdio.h>

struct student{
    int roll;
    char name[11];
    float marks;

}s[100];

int main()
{
    int x,i,j;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&s[i].roll);
        scanf("%s",&s[i].name);
        scanf("%d",&s[i].marks);
    }

    for(i=0;i<x;i++)
    {
       if(s[i].marks>s[i+1].marks)
       {
           s[i+1].marks=s[i].marks;

       }

       for(j=0;j<x;j++)
       {
           if(s[i].marks==s[j].marks)
           {
               if(s[i].roll<s[i+1].roll)
               {
                s[i].marks++;
               }
           }
       }
    }

    for(i=0;i<x;i++)
    {
        puts(s[i].name);
    }

}
