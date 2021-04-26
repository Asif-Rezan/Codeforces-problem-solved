#include<stdio.h>

struct student
{

    int roll;
    char name[10];
    int mark;

};

int main()
{

    int i,n;
    scanf("%d",&n);

    struct student s[n],temp;

    for( i=0; i<n; i++)
    {
        scanf("%d",&s[i].roll);
        scanf("%s",&s[i].name);
        scanf("%d",&s[i].mark);
    }
    printf("\n");


    int j;


    for( i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(s[j].mark<s[j+1].mark)
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }

        }

    }

    printf("\n");


    for( i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(s[j].mark==s[j+1].mark)
            {
                if(s[j].roll>s[j+1].roll)
                {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
                }


            }

        }

    }
    printf("\n");

    for(int i=0; i<n; i++)
    {
        printf("%d\t",s[i].roll);
        printf("%s\t",s[i].name);
        printf("%d\t",s[i].mark);
    }




    return 0;
}
