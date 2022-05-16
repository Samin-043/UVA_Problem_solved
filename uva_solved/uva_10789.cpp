#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int prime_indicate(ll value)
{
    int ans=0;
    if(value<=1)
    {
        ans=1;
    }
    else
    {
        for(ll i=2; i<value; i++)
        {
            if(value%i==0)
            {
                ans=1;
            }
        }
    }
    return ans;
}

int main()
{
    int t;
    while(cin>>t)
    {
        cin.ignore();
        int x=1;
        while(x<=t)
        {
            string s;
            getline(cin,s);
            ll len=s.size();
            vector<int>v;
            for(int i=0; i<len; i++)
            {
                int l=s[i];
                v.push_back(l);
            }

            sort(v.begin(),v.end());
            cout<<"Case "<<x<<": ";;
            int c=1,flag=0;
            int v_len=v.size();
            v[v_len+1]=-1;
            for(int i=0; i<v_len; i++)
            {
                if(v[i]==v[i+1])
                {
                    cout<<v[i]<<" "<<v[i+1]<<endl;
                    c++;
                }
                else
                {
                    cout<<v[i]<<" "<<v[i+1]<<endl;
                }
                /*else
                {
                    int sol=prime_indicate(c);
                    if(sol==0)
                    {
                        flag=1;
                        char ch=v[i];
                        cout<<ch;
                        c=1;
                    }
                    else
                    {
                        c=1;
                    }
                }*/
            }
            if(flag==0)
            {
                cout<<"empty";
            }
            cout<<endl;
            x++;
        }
    }
    return 0;
}
