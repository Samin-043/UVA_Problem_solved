#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    ll amount=0,report=0;
    while(t--)
    {
        string s;
        getline(cin,s);
        int len=s.size();
        int x;
        if(s[0]=='d')
        {
            for(int i=0; i<len; i++)
            {
                if(s[i]==' ')
                {
                    x=i+1;
                    break;
                }
            }
            ll digit=0;
            for(int i=x; i<len; i++)
            {
                digit=digit*10+s[i]-'0';

            }
            amount=digit;
            report+=amount;
        }
        else
        {
            cout<<report<<endl;
        }
    }
    return 0;
}
