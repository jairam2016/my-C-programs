#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[50];
    char rollno[10];
    int age;
}s1,s2,s3,s4;
void main()
{
        //  struct student s5;
    {
        printf("\nENTER THE NAME OF STUDENT 1: ");
        scanf("%s",&s1.name);
        printf("\nENTER THE ROLL NO OF THE STUDENT 1: ");
        scanf("%s",&s1.rollno);
        printf("\nENTER THE AGE OF STUDENT 1:");
        scanf("%d",&s1.age);
    }

    {
        printf("\nENTER THE NAME OF STUDENT 2: ");
        scanf("%s",&s2.name);
        printf("\nENTER THE ROLL NO OF THE STUDENT 2: ");
        scanf("%s",&s2.rollno);
        printf("\nENTER THE AGE OF STUDENT 2: ");
        scanf("%d",&s2.age);
    }

    {
        printf("\nENTER THE NAME OF STUDENT 3: ");
        scanf("%s",&s3.name);
        printf("\nENTER THE ROLL NO OF THE STUDENT 3: ");
        scanf("%s",&s3.rollno);
        printf("\nENTER THE AGE OF STUDENT 3: " );
        scanf("%d",&s3.age);
    }
    {
        printf("\nENTER THE NAME OF STUDENT 4: ");
        scanf("%s",&s4.name);
        printf("\nENTER THE ROLL NO OF THE STUDENT 4: ");
        scanf("%s",&s4.rollno);
        printf("\nENTER THE AGE OF STUDENT 4: " );
        scanf("%d",&s4.age);
    }

    if((s1.age>s2.age) && (s1.age>s3.age) && (s1.age>s4.age))
    {
        printf("\n%d IS THE MAXIMUM AGE AND THE DETAILS ARE:",s1.age);
        printf("\nTHE NAME OF STUDENT IS %s",s1.name);
        printf("\nTHE ROLL NO IS %s",s1.rollno);
        printf("\nTHE AGE IS %d",s1.age);
    }
    if((s2.age>s1.age) && (s2.age>s3.age) && (s2.age>s4.age))
    {
       printf("\n%d IS THE MAXIMUM AGE AND THE DETAILS ARE:",s2.age);
        printf("\nTHE NAME OF STUDENT IS %s",s2.name);
        printf("\nTHE ROLL NO IS %s",s2.rollno);
        printf("\nTHE AGE IS %d",s2.age);
    }
    if((s3.age>s1.age) && (s3.age>s2.age) && (s3.age>s4.age))
    {
        printf("\n%d IS THE MAXIMUM AGE AND THE DETAILS ARE:",s3.age);
        printf("\nTHE NAME OF STUDENT IS %s",s3.name);
        printf("\nTHE ROLL NO IS %s",s3.rollno);
        printf("\nTHE AGE IS %d",s3.age);
    }
    if((s4.age>s1.age) && (s4.age>s3.age) && (s4.age>s1.age))
    {
        printf("\n%d IS THE MAXIMUM AGE AND THE DETAILS ARE:",s4.age);
        printf("\nTHE NAME OF STUDENT IS %s",s4.name);
        printf("\nTHE ROLL NO IS %s",s4.rollno);
        printf("\nTHE AGE IS %d",s4.age);
    }
}