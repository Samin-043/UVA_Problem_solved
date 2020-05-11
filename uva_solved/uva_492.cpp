#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    while(getline(cin,s))
    {
        ll len=s.size();
        ll i;
        int flag1=0,flag=0;
        char c;
        for(i=0; i<len; i++)
        {
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
            {
                if(flag1==0)
                {
                    if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u')
                    {
                        cout<<s[i];
                        flag1=1;
                    }
                    else
                    {
                        c=s[i];
                        flag1=1;
                        flag=1;
                    }
                }
                else if(flag1==1)
                {
                    cout<<s[i];
                }

            }
            else
            {
                if(flag1==1)
                {
                    if(flag==1)
                    {
                        cout<<c<<"ay";
                        flag=0;
                    }
                    else
                    {
                        cout<<"ay";
                    }
                }
                cout<<s[i];
                flag1=0;
            }

        }
        if(flag1==1)
        {
            if(flag==1)
            {
                cout<<c<<"ay";
                flag=0;
                flag1=0;
            }
            else
            {
                cout<<"ay";
                flag1=0;
            }
        }

        cout<<endl;
    }
    return 0;
}
