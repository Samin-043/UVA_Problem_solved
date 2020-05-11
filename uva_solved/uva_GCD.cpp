#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,m,i,j,c;

    while((scanf("%d",&n))!=EOF)
    {
        c=0;

        if(n==0)
            break;

        for(i=1; i<=n; i++)
        {
            for(j=i+1; j<=n; j++)
            {

                c+=__gcd(i,j);

            }

        }


        printf("%d\n",c);

    }

    return 0;
}

