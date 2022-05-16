#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        int len=s.size();
        vector<char>v1;
        vector<char>v2;
        int pos1,pos2,index1,index2;
        pos1=pos2=-1;
        for(int i=0; i<len; i++)
        {
            if((s[i]=='(')||(s[i]=='['))
            {
                index1=i;
                pos1++;
                v1.push_back(s[i]);
            }
            else if((s[i]==')')||(s[i]==']'))
            {
                index2=i;
                pos2++;
                v2.push_back(s[i]);
            }

            if(!v1.empty()&&!v2.empty())
            {
                if(index1<index2)
                {
                    if(v1[pos1]=='('&&v2[pos2]==')')
                    {
                        v1.pop_back();
                        pos1--;
                        v2.pop_back();
                        pos2--;
                    }
                    else if(v1[pos1]=='['&&v2[pos2]==']')
                    {
                        v1.pop_back();
                        pos1--;
                        v2.pop_back();
                        pos2--;
                    }
                }
            }
        }

        if(v1.empty()&&v2.empty())
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
        cout<<endl;
    }
    return 0;
}
