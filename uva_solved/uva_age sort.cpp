#include<bits/stdc++.h>
using namespace std;
long long int arr[2000012];

int main()
{
    long long int n;

    while((scanf("%lld",&n))!=EOF)
    {
        if(n==0)
            break;

        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }

        sort(arr,arr+n);

        for(int i=0;i<n;i++)
        {
            printf("%d",arr[i]);
            if(i<n-1)
                printf(" ");
        }

        printf("\n");



    }

    return 0;
}
