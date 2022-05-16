#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a==-1&&b==-1)
        {
            break;
        }
        int min_dis=0;
        if(a==b)
        {
            min_dis=0;
        }
        else if(a<b)
        {
            int dis1=0,dis2=0;
            dis1=abs(a-b);
            dis2=(100-b)+a;
            min_dis=min(dis1,dis2);
        }
        else
        {
            int dis1=0,dis2=0;
            dis1=abs(a-b);
            dis2=(100-a)+b;
            min_dis=min(dis1,dis2);
        }
        cout<<min_dis<<endl;
    }
    return 0;
}
