#include<bits/stdc++.h>
int main()
{
    int i,n,h,sum;
    int arr[1005];
    int x;
    x=0;
    while((scanf("%d",&n))!=0)
    {
        x++;
        sum=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }
        int value;
        int d;
        d=0;
        value=sum/n;
        for(i=0; i<n; i++)
        {
            if(arr[i]<value)
            {
                d+=value-arr[i];
            }
        }

        printf("Set #%d\n",x);
        printf("The minimum number of moves is %d.\n",d);
        printf("\n");

    }

    return 0;
}
