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
        int flag=0,row_colounm;
        for(int i=2;i<=105;i++)
        {
            if((i*i)==len)
            {
                flag=1;
                row_colounm=i;
                break;
            }
            else if((i*i)>len)
            {
                break;
            }
        }

        if(flag==1)
        {
            int k=0;
            char arr[row_colounm][row_colounm];
            for(int i=0;i<row_colounm;i++)
            {
                for(int j=0;j<row_colounm;j++,k++)
                {
                    arr[i][j]=s[k];
                    if(k==len-1)
                    {
                        break;
                    }
                }
            }
            for(int i=0;i<row_colounm;i++)
            {
                for(int j=0;j<row_colounm;j++)
                {
                    cout<<arr[j][i];
                }
            }
        }
        else
        {
            cout<<"INVALID";
        }
        cout<<endl;
    }
    return 0;
}
