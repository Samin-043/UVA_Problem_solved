#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll sum_of_numbers(string s)
{
    ll sm=0;
    for(int i=0;i<s.size();i++)
    {
        ll d=s[i]-'0';
        sm+=d;
    }
    return sm;
}
int main()
{
    string s;
    while(getline(cin,s))
    {
        if(s[0]=='0')
        {
            break;
        }
        ll vl=sum_of_numbers(s);
        if(vl%9==0)
        {
            for(int i=1;i<=10;i++)
            {
                ll ck=pow(9,i);
                if(ck>=vl)
                {
                    cout<<s<<" is a multiple of 9 and has 9-degree "<<i<<".";
                    break;
                }
            }
        }
        else
        {
            cout<<s<<" is not a multiple of 9.";
        }
        cout<<endl;
        cout<<vl<<endl;
    }
    return 0;
}
