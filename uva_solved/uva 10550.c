#include<stdio.h>
int main()
{
    int a,b,c,d,num1,num2,num3,total;
    while((scanf("%d%d%d%d",&a,&b,&c,&d))!=EOF)
    {
        if(a==0&&b==0&&c==0&&d==0)
            break;
        if(b>a)
            num1=40-(b-a);
        else
            num1=a-b;
        if(b>c)
            num2=40-(b-c);
        else
            num2=c-b;
        if(d>c)
            num3=40-(d-c);
        else
            num3=c-d;

        total=360*3+(num1+num2+num3)*9;
        printf("%d\n",total);

    }

    return 0;
}
