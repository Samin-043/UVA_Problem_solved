#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    string name[105];
    for(int i=1; i<=t; i++)
    {
        cin>>name[i];
    }
    int i,j=1;
    for(i=1; i<=16; i++,j++)
    {
        if(i%4==1)
        {
            cout<<name[j]<<": Happy"<<endl;
        }
        else if(i%4==2)
        {
            cout<<name[j]<<": birthday"<<endl;
        }
        else if(i%4==3)
        {
            cout<<name[j]<<": to"<<endl;
        }
        else if(i%4==0&&i==12)
        {
            cout<<name[j]<<": Rujia"<<endl;
        }
        else
        {
            cout<<name[j]<<": you"<<endl;
        }
        if(j==t)
        {
            j=0;
        }
        if(i%16==0&&j%16==0)
        {
            if(t>16)
            {
                i=0;
            }
        }
    }
    return 0;
}
