#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        cin.ignore();
        getline(cin,s);
        int len=s.size();
        int group=len/n;
        vector<char>ans;
        int pos=0;
        for(int i=0; i<len;)
        {
            string rev_group=s.substr(i,group);
            int l=rev_group.size();
            for(int j=(l-1); j>=0; j--)
            {
                char ch=rev_group[j];
                ans.push_back(ch);
            }
            i+=group;
            if((len-i)<group)
            {
                if(i==len-1)
                {
                    break;
                }
                else if(i<(len-1))
                {
                    pos=i;
                    break;
                }
            }
        }

        if(pos!=0)
        {
            for(int i=pos; i<len; i++)
            {
                ans.push_back(s[i]);
            }
        }

        for(int i=0; i<ans.size(); i++)
        {
            cout<<ans[i];
        }
        cout<<endl;

    }
    return 0;
}
