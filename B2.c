#include<stdio.h>

struct student
{
    int roll,marks;
    char name[30];
}stu[100],swap;

void main()
{
    int i,j,n;
    scanf("%d", &n);
    for(i = 0;i<n;i++)
    {
        scanf("%d %s %d",&stu[i].roll,stu[i].name,&stu[i].marks);
    }

    for(i = 0;i<n;i++)
    {
        for(j = 0;j<n-1;j++)
        {
            if(stu[j].marks<stu[j+1].marks || stu[j].roll>stu[j+1].roll)
            {
                swap = stu[j];
                stu[j] = stu[j+1];
                stu[j+1 ]= swap;
            }
        }
    }

    printf("\n Roll | Name       | Marks\n");
    printf("-------------------------\n");
    for(i = 0;i<n;i++)
    {
        printf(" %d | %s         %d\n",stu[i].roll,stu[i].name,stu[i].marks);
    }

}
