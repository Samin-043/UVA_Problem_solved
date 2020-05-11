#include<stdio.h>
int main()
{
    int t;
    int a[100],temp[100];
    int i,j;

    while((scanf("%d",&t))!=EOF)
    {
        if(t==0)
            break;
        for(i=0; i<t; i++)
        {
            scanf("%d",&a[i]);

        }
        for(i=0; i<t-1; i++)
        {

            for(j=0; j<t-i-1; j++)
            {
                if(a[j]>a[j+1])
                {
                    temp[j]=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp[j];

                }
            }

        }

        for(i=0; i<t; i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");


    }
    return 0;
}
