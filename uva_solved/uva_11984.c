#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int x=1;
    while(x<=t)
    {
        float c,d;
        scanf("%f%f",&c,&d);
        float f;
        f=((9*c)/5)+32;
        f+=d;
        if(d>0)
        {
            c=((f-32)*5)/9;
        }
        printf("Case %d: %.2f\n",x,c);
        x++;
    }
}

