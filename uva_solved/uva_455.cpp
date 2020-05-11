#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    cin.ignore();
    cout<<endl;
    while(t--)
    {
        //
        vector<ll>v;
        string s;
        getline(cin,s);
        ll i,len=s.size();
        for(i=0; i<len; i++)
        {
            v.push_back(s[i]);
        }
        ll c,ans=0;
        //int flag;
        for(i=0; i<len; i++)
        {
            //flag=0;
            c=0;
            for(ll j=0; j<len; j++)
            {
                if((s[i]==v[j]))
                {
                    c++;
                    //flag=1;
                    v[j]=1;
                }
                /*else if((flag==1)&&(s[i]==v[j]))
                {
                    v[j]=1;
                }*/
            }
            if(c==len)
            {
                ans=1;
                break;
            }

        }
        cout<<ans<<endl<<endl;
    }

    return 0;
}
