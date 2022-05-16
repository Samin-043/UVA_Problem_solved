#include<bits/stdc++.h>
using namespace std;
int palindrome(string s,int len)
{
    int mid_len=len/2;
    int flag=0;
    for(int i=0,j=(len-1);i<=mid_len&&j>=mid_len;i++,j--)
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
    return flag;
}
int main()
{
    string s;
    while(getline(cin,s))
    {
        int total_len=s.size();
        string main_str=s.substr(0,total_len);
        int len=total_len;
        int c=0;
        while(len>1)
        {
            for(int i=0;i<total_len;i++)
            {
                if((total_len-(i))<len)
                {
                    break;
                }
                string sub_s=s.substr(i,len);
                int d=palindrome(sub_s,len);
                if(d==1)
                {
                    c++;
                }
            }
            len--;
        }

        for(int i=0;i<total_len;i++)
        {
            for(int j=i+1;j<total_len;j++)
            {
                if(s[i]==s[j])
                {
                    s[j]='0';
                }
            }
        }

        for(int i=0;i<total_len;i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                c++;
            }
            else if(s[i]>='A'&&s[i]<='Z')
            {
                c++;
            }
        }

        cout<<"The string "<<"'"<<main_str<<"'"<<" contains "<<c<<" palindromes."<<endl;
    }
    return 0;
}
