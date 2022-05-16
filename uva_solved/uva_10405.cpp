#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s1,s2;
    while((getline(cin,s1))&&(getline(cin,s2)))
    {
        ll len1=s1.size();
        ll len2=s2.size();
        ll i,j,ans=0;
        for(i=0;i<len1;i++)
        {
            for(j=0;j<len2;j++)
            {
                if(s1[i]==s2[j])
                {
                    ans++;
                    s2[j]='-1';
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
