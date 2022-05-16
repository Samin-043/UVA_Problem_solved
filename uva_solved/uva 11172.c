#include<stdio.h>
int main()
{
    int a,b,test,i;
    scanf("%d",&test);
    for(i=0;i<test;i++)
    {
       scanf("%d %d",&a,&b);
       if(a>b)
        printf(">\n");
       else if(a<b)
        printf("<\n");
       else if(a==b)
       printf("=\n");

    }

    return 0;
}
