#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    int x=1;
    while(x<=t)
    {
        string s;
        getline(cin,s);
        int len=s.size();
        char c;
        int d=0,m;
        int length;
        cout<<"Case "<<x<<": ";
        for(int i=0; i<len;)
        {
            if((s[i]>='A'&&s[i]<='Z'))
            {
                if(d>0)
                {
                    length=i-d;
                    int sum=0;
                    for(int j=length; j<=(i-1); j++)
                    {
                        sum=sum*10+s[j]-'0';
                    }
                    for(int k=0; k<sum; k++)
                    {
                        cout<<c;
                    }
                }
                c=s[i];
                d=0;
                i++;
            }
            else if(s[i]>='0'&&s[i]<='9')
            {
                d++;
                m=i;
                if(i==length-1)
                {
                    break;
                }
                i++;
            }
        }

        if(d>0)
        {
            m++;
            length=m-d;
            int sum=0;
            for(int q=length;q<=(m-1);q++)
            {
                sum=sum*10+s[q]-'0';
            }
            for(int k=0; k<sum; k++)
            {
                cout<<c;
            }
        }
        cout<<endl;
        x++;
    }

    return 0;
}
