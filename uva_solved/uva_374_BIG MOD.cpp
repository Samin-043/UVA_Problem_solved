#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod_exponential(ll a,ll b,ll mod)
{
    if(b==0)
    {
        return 1;
    }
    else if(b%2==0)
    {
        ll x=mod_exponential(a,(b/2),mod);
        return (x*x)%mod;
    }
    else
    {
        ll x,y;
        x=a%mod;
        y=mod_exponential(a,b-1,mod);
        return (x*y)%mod;
    }
}
int main()
{
    ll b,p,mod;
    while(cin>>b>>p>>mod)
    {
        cout<<mod_exponential(b,p,mod)<<endl;
    }
    return 0;
}
