#include<stdio.h>
int main()
{
    unsigned long int n1,n2;

    while((scanf("%lu%lu",&n1,&n2))==2)
    {

        printf("%lu\n",n2^n1);


    }

    return 0;
}
