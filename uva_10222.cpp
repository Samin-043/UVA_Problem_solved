#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    while(getline(cin,s))
    {
        string row1="qwertyuiopasdfghjklzxcvbnm";
        string ROW1="QWERTYUIOPASDFGHJKLZXCVBNM";
        ll len=s.size();
        for(ll i=0; i<len; i++)
        {
            int len=s[i];

            if(s[i]==' ')
            {
                cout<<" ";
            }
            else if(s[i]=='{'||s[i]=='[')
            {
                cout<<"o";
            }
            else if(s[i]=='}'||s[i]==']')
            {
                cout<<"p";
            }
            else if(s[i]==':'||s[i]==';')
            {
                cout<<"k";
            }
            else if(s[i]=='"'||len==39)
            {
                cout<<"l";
            }
            else if(s[i]=='<'||s[i]==',')
            {
                cout<<"n";
            }
            else if(s[i]=='>'||s[i]=='.')
            {
                cout<<"m";
            }
            else
            {
                for(ll j=0; j<(row1.size()); j++)
                {
                    if(s[i]==row1[j])
                    {
                        if(j==0)
                        {
                            cout<<"n";
                        }
                        else if(j==1)
                        {
                            cout<<"m";
                        }
                        else
                        {
                            cout<<row1[j-2];
                        }
                    }
                    else if(s[i]==ROW1[j])
                    {
                        if(j==0)
                        {
                            cout<<"n";
                        }
                        else if(j==1)
                        {
                            cout<<"m";
                        }
                        else
                        {
                            cout<<row1[j-2];
                        }
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
