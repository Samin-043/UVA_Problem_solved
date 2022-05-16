#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    char output_string[1005][1005];
    ll i,j,a=0,b=0,max_b=0;
    while(getline(cin,s))
    {
        b=0;
        int len=s.size();
        for(i=0; i<len; i++)
        {
            output_string[a][b]=s[i];
            b++;
        }
        if(b>max_b)
        {
            max_b=b;
        }
        a++;

    }
    for(i=0;i<max_b;i++)
    {
        for(j=a-1;j>=0;j--)
        {
            cout<<output_string[j][i];
        }
        cout<<endl;
    }

    return 0;
}
