#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        vector<ll>v;
        while(p--)
        {
            int party_date;
            cin>>party_date;
            for(int i=1;(party_date*i)<=n;i++)
            {
                ll x=party_date*i;
                if(x%7==6||x%7==0)
                {
                    continue;
                }
                v.push_back(x);
            }

        }
        sort(v.begin(),v.end());
        ll len=v.size();
        ll lose_day=0;
        for(int i=0;i<len;i++)
        {
            if(i==(len-1))
            {
                lose_day++;
                break;
            }
            else if(v[i]==v[i+1])
            {
                continue;
            }
            else
            {
                lose_day++;
            }
        }

        cout<<lose_day<<endl;
    }
    return 0;
}
