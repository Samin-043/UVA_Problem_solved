#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,flag;
    int arr[3010];
    while((scanf("%d",&n))!=EOF)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        flag=0;
        int b[3010];
        for(i=0; i<n-1; i++)
        {
            int m;
            m=arr[i+1]-arr[i];
            m=abs(m);
            b[i]=m;
        }
        sort(b,b+n-1);
        for(i=0; i<n-1; i++)
        {
            if(b[i]!=i+1)
            {
                flag=1;
            }
        }

        if(flag==1)
        {
            printf("Not jolly");
        }
        else
        {
            printf("Jolly");
        }
        printf("\n");

    }

    return 0;
}
