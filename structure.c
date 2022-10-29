#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int salary(int km);
struct employee
{
    char emp_id[30];
    char name[30];
    int kms;
    int sal;
};
void main()
{
    
    int n,y;
    printf("\nTHE NUMBER OF DRIVERS IN THE COMPANY\t:");
    scanf("%d",&n);
    struct employee e[n];
    for (int i =1; i <=n; i++)
    {
       printf("NAME OF THE EMPLOYEE\t");
       scanf("%s",&e[i].name);
       printf("\nENTER YOUR EMPLOYEE ID \t ");
       scanf("%s",&e[i].emp_id);
       printf("\nENTER THE NUMBER OF KILOMETRES\t");
       scanf("%d",&e[i].kms);
    }  
    printf("NAME OF EMP\t\t\tEMPLOYEE ID\t\t\tNUMBER OF KILOMETERS\t\t\tSALARY\n");
    for(int i = 1; i <=n ; i++)
    {
        e[i].sal=salary(e[i].kms);
        printf("%s\t\t\t%s\t\t\t%d\t\t\t%d\n",e[i].name,e[i].emp_id,e[i].kms,e[i].sal);
    }
}
int salary(int km)
{
    int y;
    if(km<=30)
    {
        y=km*100;
        return y;
    }
    else{
        y=km*150;
        return y;
    }
}