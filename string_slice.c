#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void slice(char *st,int start ,int end)
{
  int i=0;
  while(start+i!=end)
  {
    st[i]=st[i+start];
    i++;
  }
  st[i]='\0';
}
int main()
{
  char st[]="asfgalsfglufhslhfljfsfjsfjasfh";
  slice(st,1,15);
  printf("%s",st);
  return 0;
}