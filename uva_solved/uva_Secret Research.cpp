#include<bits/stdc++.h>
using namespace std;
char s[100005];
int main()
{
    long long int n;
    cin>>n;
    while(n--)
    {
        scanf("%s",s);
        int i,len;
        len=strlen(s);

        if(len==1)
        {
            if(s[0]=='1'||s[0]=='4')
            {
                cout<<"+";
            }
        }
        else if(len==2)
        {
            if(s[0]=='7'&&s[1]=='8')
            {
                cout<<"+";
            }
        }
        else if(s[len-2]=='3'&&s[len-1]=='5')
        {
            cout<<"-";
        }
        else if(s[0]=='9'&&s[len-1]=='4')
        {
            cout<<"*";
        }
        else
        {
            cout<<"?";
        }

        cout<<endl;

    }

    return 0;
}
