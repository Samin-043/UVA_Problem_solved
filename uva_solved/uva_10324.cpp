#include<bits/stdc++.h>
using namespace std;
#define ll long long
string s;

bool check_true_false(ll a,ll b)
{
    char c=s[a];
    bool check=true;
    for(int i=(a+1);i<=b;i++)
    {
        if(c==s[i])
        {
            continue;
        }
        else
        {
            check=false;
            break;
        }
    }
    return check;
}

int main()
{
    ll te=1;
    while(getline(cin,s))
    {
        if(s=="\0"||s=="EOF")
        {
            break;
        }
        ll n;
        cin>>n;
        vector<string>v_str;
        while(n--)
        {
            ll ab,cd;
            cin>>ab>>cd;
            cin.ignore();
            ll mi=min(ab,cd);
            ll ma=max(ab,cd);

            int ck=check_true_false(mi,ma);
            if(ck==1)
            {
                v_str.push_back("Yes");
            }
            else
            {
                v_str.push_back("No");
            }
        }
        cout<<"Case "<<te<<":"<<endl;
        for(int i=0;i<v_str.size();i++)
        {
            cout<<v_str[i]<<endl;
        }
        te++;
    }
    return 0;
}
