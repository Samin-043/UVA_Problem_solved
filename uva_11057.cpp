#include<bits/stdc++.h>

int main()
{
    int n,a[100];

    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }

    int target,p;
    int x,y;

    scanf("%d",&target);

    p=target/2;

    for(int i=0; i<n; i++)
    {
        if(a[i]>=p)
        {
            x=target-a[i];
            y=a[i];
        }

    }

    printf("%d %d\n",x,y);


    return 0;

}
