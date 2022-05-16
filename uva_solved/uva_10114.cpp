#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int m;
    float a,b,c;
    while(cin>>m>>a>>b>>c)
    {
        if(m<0)
        {
            break;
        }
        float p=b,q,last_y;
        int last=1500,ct=0;
        bool flag=false;
        while(c--)
        {
            int x;
            float y;
            cin>>x>>y;

            if(x==0)
            {
                q=(b-(b*y+a*y)*1.00000);
                cout<<"q: "<<q<<endl;
                last=x+1;
                p=p-a;
                cout<<"p: "<<p<<endl;
                if(p<q)
                {
                    flag=true;
                    break;
                }
                last_y=y;
            }
            while(last<x)
            {
                ct++;
                q=(q-(q*last_y*1.00000));
                cout<<"q: "<<q<<endl;
                last++;
                p=p-a;
                cout<<"p: "<<p<<endl;
                if(p<q)
                {
                    flag=true;
                    break;
                }
                last_y=last_y;
            }
            if(p<q)
            {
                flag=true;
                break;
            }
            if(last==x)
            {
                ct++;
                q=(q-(q*y*1.00000));
                cout<<"q: "<<q<<endl;
                last++;
                p=p-a;
                cout<<"p: "<<p<<endl;
                if(p<q)
                {
                    flag=true;
                    break;
                }
                last_y=y;
            }
        }
        if(flag==false)
        {
            while(last<=m)
            {
                ct++;
                q=(q-(q*last_y*1.00000));
                cout<<"q: "<<q<<endl;
                last++;
                p=p-a;
                cout<<"p: "<<p<<endl;
                if(p<q)
                {
                    flag=true;
                    break;
                }
            }
        }

        if(flag==true)
        {
            if(ct==1)
            {
                cout<<ct<<" month";
            }
            else
            {
                cout<<ct<<" months";
            }
        }
        cout<<endl;
    }
    return 0;
}
