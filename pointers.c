#include<stdio.h>
int main()
{
    //& GIVES THE ADRESS 
    //* IS THE DE-REFERENCE OPERATOR
    int a=32;
    int *ptr=&a;//POINTER ptr IS ASSSINGED WITH MEMORY LOCATION OF A BUT POINTER KA APNA ADRESS ALAG RAHEGA...
    printf("%d\n",(&ptr));//GIVES THE ADRESS OF THE POINTER
    printf("%d\n",(ptr));
    printf("%d\n",*(&a));
    return 0;
}
