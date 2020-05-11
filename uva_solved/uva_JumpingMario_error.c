#include<stdio.h>
int main()
{
    int a[55],test,num,c1,c2;
    int i,j,min;

    scanf("%d",&test);

    for(i=0;i<test;i++)
    {
        scanf("%d",&num);
        c1=0;
        c2=0;

        for(j=0;j<num;j++)
        {
            scanf("%d",&a[j]);

            if(j==0)
                min=a[j];


            if(a[j]>min)
            {

                min=a[j];
                c1++;
            }

             if(a[j]<min)
            {

                min=a[j];
                c2++;
            }

        }

    printf("Case %d: %d %d\n",i+1,c1,c2);

    }

    return 0;
}
