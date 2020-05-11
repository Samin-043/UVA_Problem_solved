#include<bits/stdc++.h>

int main()
{

    int n,k;

    while((scanf("%d %d",&n,&k))!=EOF)
    {

        int s=0;

        int m=n;

        while(n>=k)
        {

            s=m+(n/k);

            m=s;

            n=(n/k)+(n%k);
        }



        printf("%d\n",m);



    }

}
