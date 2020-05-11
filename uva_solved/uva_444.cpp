#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        if(s[0]>='0'&&s[0]<='9')
        {
            int k=0;
            char rev_string[1005];
            for(int i=(s.size()-1); i>=0;)
            {
                if(s[i]=='1')
                {
                    int len=(100*(s[i]-'0'))+(10*(s[i-1]-'0'))+(s[i-2]-'0');
                    char ascii_char=len;
                    rev_string[k]=ascii_char;
                    k++;
                    i=i-3;
                }
                else
                {
                    int len=(10*(s[i]-'0'))+(s[i-1]-'0');
                    char ascii_char=len;
                    rev_string[k]=ascii_char;
                    k++;
                    i=i-2;
                }
            }
            for(int i=0; i<k; i++)
            {
                cout<<rev_string[i];
            }

        }
        else
        {
            int k=0;
            int rev[1005];
            for(int i=s.size(); i>=0; i--)
            {
                int len=s[i];
                int x=len;
                while(x>0)
                {
                    rev[k]=x%10;
                    k++;
                    x=x/10;
                }
            }

            for(int i=0; i<k; i++)
            {
                cout<<rev[i];
            }
        }

        cout<<endl;
    }
    return 0;
}
