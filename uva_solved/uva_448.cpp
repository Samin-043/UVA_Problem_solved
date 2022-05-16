#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    ll l=1;
    while(l<=t)
    {
        ll amp,freq;
        cin>>amp>>freq;
        ll x=1;
        while(x<=freq)
        {
            ll i,j;
            for(i=1; i<=amp; i++)
            {
                for(j=1; j<=i; j++)
                {
                    cout<<i;
                }
                cout<<endl;
            }
            for(i=amp-1; i>=1; i--)
            {
                for(j=i; j>=1; j--)
                {
                    cout<<i;
                }
                cout<<endl;
            }
            if(x<freq)
            {
                cout<<endl;
            }
            x++;
        }
        if(l<t)
        {
            cout<<endl;
        }
        l++;
    }
    return 0;
}
