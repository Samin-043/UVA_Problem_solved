#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        int len=s.size();
        int l=0,r=0;

        for(int i=0;i<len;i++)
        {
            if(s[i]==' ')
            {
                r=i-1;
                for(int j=r;j>=l;j--)
                {
                    cout<<s[j];
                }
                cout<<s[i];
                l=r+2;
            }
            else if(i==len-1)
            {
                r=i;
                for(int k=r;k>=l;k--)
                {
                    cout<<s[k];
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
