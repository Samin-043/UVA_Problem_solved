#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int ans=0;
        if(x>y)
        {
            int m=x+y;
            int n=x+(x-y);
            if(n<0)
            {
                ans=0;
            }
            else
            {
                ans=(z*n/m);
            }
        }
        else if(x==y)
        {
            int m=x+y;
            ans=(z*x/m);
        }
        else
        {
            int m=x+y;
            int n=x-(y-x);
            if(n<0)
            {
                ans=0;
            }
            else
            {
                ans=(z*n/m);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
