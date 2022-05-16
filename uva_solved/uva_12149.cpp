#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        ll sum=0;
        for(int i=n; i>=1; i--)
        {
            sum+=i*i;
        }
        cout<<sum<<endl;
    }
    return 0;
}
