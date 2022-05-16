#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        cin.ignore();
        string s;
        getline(cin,s);
        int m=0,initital_index=0;
        int len=s.size();
        for(int i=0;i<(len-n);i++)
        {
            int c=1;
            string pass;
            pass=s.substr(i,n);
            for(int j=i+1;j<(len-n)+1;j++)
            {
                string compare;
                compare=s.substr(j,n);
                if(pass==compare)
                {
                    c++;
                }
            }
            if(c>m)
            {
                m=c;
                initital_index=i;
            }
         }
         string ans=s.substr(initital_index,n);
         cout<<ans<<endl;
    }
    return 0;
}
