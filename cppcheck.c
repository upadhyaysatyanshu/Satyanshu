#include<stdio.h>
int main()
{
 int i=3 ,z;
 int *p=&i;
 z=100;
 z=z/(*p);
 printf("%d%d",i,z);
 return 0;
}

