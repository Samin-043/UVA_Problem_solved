#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin>>s;
        ll total=0,current=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='X')
            {
                current=0;
            }
            else
            {
                current++;
                total+=current;
            }
        }
        cout<<total<<endl;
    }
    return 0;
}
