#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct class_10
{
    int mark1,mark2,mark3;
    char name[50];
    int class;
    char result[4];
    float avg;
};

void get_names(struct class_10 *ptr , int size)
{
    for(int i=0;i<size;i++)
    {
        printf("ENTER THE NAME OF STUDENT %d :",i+1);
        scanf("%s",&ptr->name);
        ptr++;
    }
}

void calc_marks(struct class_10 *ptr, int size)
{
    for(int i=0;i<size;i++)
    {

        ptr->class=9;
        printf("ENTER MARK OF SUBJECT 1 OF %s:",ptr->name);
        scanf("%d",&ptr->mark1);
        printf("ENTER MARK OF SUBJECT 2 OF %s:",ptr->name);
        scanf("%d",&ptr->mark2);
        printf("ENTER MARK OF SUBJECT 3 OF %s:",ptr->name);
        scanf("%d",&ptr->mark3);
        if((ptr->mark1<33)||(ptr->mark2<33)||(ptr->mark3<33))
        {
            strcpy(ptr->result,"FAIL");
            ptr->avg=0;
        }
        else
        {
            float avg1=(float)((ptr->mark1+ptr->mark2+ptr->mark3)/3.0);
            ptr->avg=avg1;
            strcpy(ptr->result,"PASS");
        }
        ptr++;
    }
}

void display_result(struct class_10 *ptr,int size)
{
    printf("\nSL.No\t\tCLASS\t\tNAME\t\tMARK1\t\tMARK2\t\tMARK3\t\tRESULT\t\tAVG");
    for(int i=0;i<size;i++)
    {
        printf("\n%d\t\t%d\t\t%s\t\t%d\t\t%d\t\t%d\t\t%s\t\t%f",(i+1),ptr->class,ptr->name,ptr->mark1,ptr->mark2,ptr->mark3,ptr->result,ptr->avg);
        ptr++;
    }
}

void main()
{
    int size;
    printf("\nNUMBER OF STUDENTS IN THE CLASS:");
    scanf("%d",&size);
    struct class_10 student[size];
    struct class_10 *ptr=&student[0];
    get_names(ptr,size);
    ptr=&student[0];
    calc_marks(ptr,size);
    ptr=&student[0];
    display_result(ptr,size);
}

