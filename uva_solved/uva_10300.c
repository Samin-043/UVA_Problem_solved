#include<stdio.h>
int main()
{
    int test;
    int a[100],b[100],c[100];
    int i,j=0,n,sum,multiple;
    scanf("%d",&n);
    while(j<n)
    {
        scanf("%d",&test);
        sum=0;
        multiple=1;
        for(i=0; i<test; i++)
        {
            scanf("%d %d %d",&a[i],&b[i],&c[i]);
            if(a[i]>0&&c[i]>0)
            {
                multiple=a[i]*c[i];
                sum+=multiple;
            }
        }
        printf("%d\n",sum);
        j++;
    }


    return 0;
}
