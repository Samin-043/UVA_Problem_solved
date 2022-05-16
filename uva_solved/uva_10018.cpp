#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll z;
ll find_digit(string s)
{
    ll num=0,len=s.size();
    for(int i=0; i<len; i++)
    {
        num=num*10+s[i]-'0';
    }

    return num;
}
ll find_rev_digit(string rev)
{
    ll num=0,len=rev.size();
    for(int i=len-1; i>=0; i--)
    {
        num=num*10+rev[i]-'0';
    }

    return num;
}
int ans_find(ll v,ll st_ans[])
{

    z=0;
    while(v!=0)
    {
        st_ans[z]=v%10;
        v=v/10;
        z++;
    }
    return z;

}
ll an_compare(ll st_ans[],int z)
{
    ll ans=0;
    for(int i=0; i<z; i++)
    {
        ans=ans*10+st_ans[i];
    }
    return ans;
}

int palindrome(ll p[],int z)
{
    ll len=z;
    ll l1=(len/2);
    int flag=0;
    for(int i=0,j=(len-1); i<=l1&&j>=l1; i++,j--)
    {
        if(p[i]!=p[j])
        {
            flag=0;
            break;
        }
        else
        {
            flag=1;
        }
    }
    return flag;
}

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        int flag=0;
        ll st_ans[105]= {0};
        ll c=0;
        ll ans;
        ll z;
        while(flag==0)
        {
            ll digit,rev_digit;
            int w;
            ll len;
            if(c==0)
            {
                digit=find_digit(s);
                rev_digit=find_rev_digit(s);
            }
            else if(c>0)
            {
                digit=ans;
                rev_digit=an_compare(st_ans,w);
            }

            ans=rev_digit+digit;
            ll v=ans;
            w=ans_find(v,st_ans);
            int e=palindrome(st_ans,w);
            if(e==0)
            {
                c++;
            }
            else if(e==1)
            {
                c++;
                flag=1;
                break;
            }
        }
        cout<<c<<" "<<ans<<endl;
    }
    return 0;
}
