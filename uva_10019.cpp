#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        string s;
        getline(cin,s);
        ll num=0,num1;
        int i=0,c_hex=0;
        while(s[i]!='\0')
        {
            num1=0;
            num1=s[i]-'0';
            while(num1>0)
            {
                int r=num1%2;
                if(r==1)
                {
                    c_hex++;
                }
                num1=num1/2;
            }
            num=num*10+s[i]-'0';
            i++;
        }

        int k=0;
        int binary[1005];
        int c_binary=0;
        while(num>0)
        {
            binary[k]=num%2;
            if(binary[k]==1)
            {
                c_binary++;
            }
            num=num/2;
            k++;
        }

        cout<<c_binary<<" "<<c_hex<<endl;
    }
    return 0;
}
