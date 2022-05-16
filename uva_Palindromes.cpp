#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    while(getline(cin,s))
    {
        ll len1=s.size();
        ll len2=(s.size())/2;
        int flag=0;
        for(ll i=0,j=len1-1; i<=len2&&j>=len2; i++,j--)
        {
            if(s[i]==s[j])
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
        int flag1=0;
        for(ll i=0,j=len1-1; i<=len2&&j>=len2; i++,j--)
        {
            if(s[i]=='A'&&s[j]=='A')
            {
                flag1=1;
            }
            else if(s[i]=='H'&&s[j]=='H')
            {
                flag1=1;
            }
            else if(s[i]=='I'&&s[j]=='I')
            {
                flag1=1;
            }
            else if(s[i]=='M'&&s[j]=='M')
            {
                flag1=1;
            }
            else if((s[i]=='O'&&s[j]=='O')||(s[i]=='T'&&s[j]=='T')||(s[i]=='U'&&s[j]=='U')||(s[i]=='V'&&s[j]=='V')||(s[i]=='W'&&s[j]=='W')||(s[i]=='X'&&s[j]=='X')||(s[i]=='Y'&&s[j]=='Y')||(s[i]=='1'&&s[j]=='1')||(s[i]=='8'&&s[j]=='8'))
            {
                flag1=1;
            }
            else if((s[i]=='E'&&s[j]=='3')||(s[i]=='3'&&s[j]=='E'))
            {
                flag1=1;
            }
            else if((s[i]=='J'&&s[j]=='L')||(s[i]=='L'&&s[j]=='J'))
            {
                flag1=1;
            }
            else if((s[i]=='S'&&s[j]=='2')||(s[i]=='2'&&s[j]=='S'))
            {
                flag1=1;
            }
            else if((s[i]=='Z'&&s[j]=='5')||(s[i]=='5'&&s[j]=='Z'))
            {
                flag1=1;
            }
            else
            {
                flag1=0;
                break;
            }
        }

        if(flag==1&&flag1==0)
        {
            cout<<s<<" -- is a regular palindrome."<<endl<<endl ;
        }
        else if(flag==0&&flag1==1)
        {
            cout<<s<<" -- is a mirrored string."<<endl<<endl;
        }

        else if(flag==1&&flag1==1)
        {
            cout<<s<<" -- is a mirrored palindrome."<<endl<<endl;
        }

        else
        {
            cout<<s<<" -- is not a palindrome."<<endl<<endl;
        }

    }

    return 0;
}
