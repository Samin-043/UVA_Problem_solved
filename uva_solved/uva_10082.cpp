#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string row1="`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";
    string s;
    while(getline(cin,s))
    {
        string result;
        for(int k=0; k<s.size(); k++)
        {
            for(int i=0; i<row1.size(); i++)
            {
                int x=s[k];
                if(s[k]==' ')
                {
                    cout<<" ";
                    break;
                }
                else if(s[k]==row1[i])
                {
                    cout<<row1[i-1];
                    break;
                }
                else if(x==92)
                {
                    cout<<"]";
                    break;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
