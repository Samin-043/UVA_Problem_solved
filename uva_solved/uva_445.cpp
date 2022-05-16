#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    while(getline(cin,s))
    {
        ll len=s.size();
        int num,sum=0;
        for(int i=0; i<len; i++)
        {
            if(s[i]>='0'&&s[i]<='9')
            {
                num=s[i]-'0';
                sum+=num;
            }
            else if(s[i]=='!')
            {
                cout<<endl;
            }
            else if(s[i]=='b')
            {
                for(int j=0; j<sum; j++)
                {
                    cout<<" ";
                }
                sum=0;
            }
            else
            {
                for(int j=0; j<sum; j++)
                {
                    cout<<s[i];
                }
                sum=0;
            }
        }
        cout<<endl;
    }
    return 0;
}
