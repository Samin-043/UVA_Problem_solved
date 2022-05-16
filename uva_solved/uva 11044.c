#include<stdio.h>
int main()
{
    int test;
    int i,m,n;
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        scanf("%d %d",&m,&n);
        if((m>=6&&n>=6)&&(m<=10000&&n<=10000))
        {
            printf("%d\n",(m/3)*(n/3));

        }

    }

    return 0;
}
