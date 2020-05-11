#include<stdio.h>
int main()
{

    int test,index,a[20];

    int i,j;

    while(scanf("%d",&test)!=EOF)
    {

        for(i=0;i<test;i++)
        {

            scanf("%d",&index);

            for(j=0;j<index;j++)
            {

                scanf("%d",&a[j]);


            }

            printf("Case %d: %d\n",i+1,a[j/2]);


        }

    }

    return 0;

}
