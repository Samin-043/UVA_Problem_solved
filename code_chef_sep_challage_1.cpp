#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[105];
    int n,t,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);

        }

        sort(arr,arr+n);
        printf("%d",arr[0]);
        printf("\n");

    }
    return 0;
}
