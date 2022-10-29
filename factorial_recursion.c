//RECURSION IS THE PROCESS IN WHICH WE CALL A FUNCTION IN ITSELF....("FUNCTION KE ANDAR HE FUNCTION KO FIRSE CALL KARTE HE")
#include<stdio.h>
int factorial(int n);
int main()
{
    int f,n;
    printf("\n WHICH NUMBER FACTORIAL DO YOU WANT:\t\n");
    scanf("%d",&n);
    printf("THE FACTORIAL OF THE NUMBER IS: %d",factorial(n));
    return 0;
}
int factorial(int n)
{
   if(n>1)
   {
       return (n*factorial(n-1));
   }
   else 
   {
       return 1;
   }
    
}
