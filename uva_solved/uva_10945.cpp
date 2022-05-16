#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    while(getline(cin,s))
    {
        if(s=="DONE")
        {
            break;
        }
        ll len=s.size();
        vector<char>v;
        for(int i=0;i<len;i++)
        {
            if((s[i]>='a'&&s[i]<='z'))
            {
                v.push_back(s[i]);
            }
            else if((s[i]>='A'&&s[i]<='Z'))
            {
                s[i]=s[i]+32;
                v.push_back(s[i]);
            }
        }
        ll l=v.size();
        ll middle_len=l/2;
        int flag=0;
        if(v.size()==0)
        {
            flag=1;
        }
        for(int i=0,j=(l-1);i<=middle_len&&j>=middle_len;i++,j--)
        {
            if(v[i]==v[j])
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }

        if(flag==1)
        {
            cout<<"You won't be eaten!";
        }
        else
        {
            cout<<"Uh oh..";
        }
        cout<<endl;
    }
    return 0;
}
