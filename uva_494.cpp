#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    while(getline(cin,s))
    {
        ll len=s.size();
        int c=0,word=0,rem,flag=0;
        for(ll i=0;i<len;i++)
        {
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
            {
                c=1;
                if(i==len-1)
                {
                    rem=i;
                    flag=1;
                }
            }
            else
            {
                word+=c;
                c=0;
            }
        }

        if(flag==1)
        {
            cout<<word+1<<endl;
        }
        else
        {
            cout<<word<<endl;
        }
    }
    return 0;
}
