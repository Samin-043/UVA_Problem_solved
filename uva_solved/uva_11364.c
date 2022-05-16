#include<stdio.h>
int main()
{
    int a[100],i,j,n,test;
    int max,min;
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        scanf("%d",&n);
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
            if(j==0)
            {
                min=a[j];
                max=a[j];
            }
            else if(a[j]>max)
                max=a[j];
            else if(a[j]<min)
                min=a[j];

        }
        printf("%d\n",(max-min)*2);
    }

    return 0;
}
