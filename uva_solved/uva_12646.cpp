#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a==b&&a==c)
        {
            cout<<"*";
        }
        else if(a==b)
        {
            cout<<"C";
        }
        else if(a==c)
        {
            cout<<"B";
        }
        else if(b==c)
        {
            cout<<"A";
        }
        cout<<endl;
    }
    return 0;
}
