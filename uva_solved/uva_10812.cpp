#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll s,d;
        cin>>s>>d;
        ll x,y;
        s+=d;
        x=s/2;
        if(d>x||s%2!=0)
        {
            cout<<"impossible";
        }
        else
        {
            y=x-d;
            cout<<x<<" "<<y;
        }
        cout<<endl;
    }
    return 0;
}

