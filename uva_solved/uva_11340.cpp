#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int k;
        cin>>k;
        vector<char>cha;
        vector<int>value;
        while(k--)
        {
            char c;
            ll val;
            cin>>c>>val;
            cha.push_back(c);
            value.push_back(val);
        }
        ll lines;
        cin>>lines;
        cin.ignore();
        ll total=0;
        while(lines--)
        {
            string s;
            getline(cin,s);
            ll len=s.size();
            for(int i=0; i<len; i++)
            {
                for(int j=0; j<cha.size(); j++)
                {
                    if(s[i]==cha[j])
                    {
                        total+=value[j];
                    }
                }
            }
        }

        if(total==0)
        {
            cout<<"0.00"<<"$"<<endl;
        }
        else
        {
            cout<<total/100<<".";
            if((total%100)<10)
            {
                cout<<"0"<<total%100<<"$"<<endl;
            }
            else if(((total%100)<100)&&(total%100)%10==0)
            {
                cout<<total%100<<"$"<<endl;
            }
            else
            {
                cout<<total%100<<"$"<<endl;
            }
        }
    }
    return 0;
}
