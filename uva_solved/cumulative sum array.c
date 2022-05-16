#include<stdio.h>
int n;
int main()
{
    int a[100],sum[100];
    int i,n,value;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        //printf("%d",a[i]);
        sum[0]=a[0];
        sum[i]=sum[i-1]+a[i];

        if(i>=2&&i<=4)
            printf("Sum : %d\n",sum[i]);

    }



    return 0;
}



