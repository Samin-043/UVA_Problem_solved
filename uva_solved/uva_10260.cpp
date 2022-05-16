#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        vector<int>v_first;
        int len=s.size();
        int pos=0;
        for(int i=0; i<len; i++)
        {
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='H'||s[i]=='W'||s[i]=='Y')
            {
                int x=0;
                v_first.push_back(x);
                pos++;
                //continue;
            }
            else if(s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V')
            {
                int x=1;
                v_first.push_back(x);
                pos++;
            }
            else if(s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='Q'||s[i]=='S'||s[i]=='X'||s[i]=='Z')
            {
                int x=2;
                v_first.push_back(x);
                pos++;
            }
            else if(s[i]=='D'||s[i]=='T')
            {
                int x=3;
                v_first.push_back(x);
                pos++;
            }
            else if(s[i]=='L')
            {
                int x=4;
                v_first.push_back(x);
                pos++;
            }
            else if(s[i]=='M'||s[i]=='N')
            {
                int x=5;
                v_first.push_back(x);
                pos++;
            }
            else if(s[i]=='R')
            {
                int x=6;
                v_first.push_back(x);
                pos++;
            }
        }

        vector<int>result;
        for(int i=0;i<pos;i++)
        {
            if(i==(pos-1))
            {
                if(v_first[i]!=0)
                {
                    result.push_back(v_first[i]);
                    break;
                }
            }

            if((v_first[i]==v_first[i+1])||(v_first[i]==0))
            {
                continue;
            }
            result.push_back(v_first[i]);
        }

        for(int i=0;i<result.size();i++)
        {
            cout<<result[i];
        }
        cout<<endl;
    }
    return 0;
}
