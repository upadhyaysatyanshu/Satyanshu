#include<stdio.h>
int* fetch();

int main()
{

    int *c;
    c=fetch();
    printf("%d",*c);
    return 0;
}
int* fetch()
{

    int x;
    x=80;
    return &x ;
}

