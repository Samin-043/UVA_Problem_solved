#include<bits/stdc++.h>
using namespace std;

int Retun_gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    else
    {
        return Retun_gcd(b%a,a);
    }
}

int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        int i,arr[10000],j;
        string line;
        getline(cin,line);
        stringstream ss(line);
        i=0;
        while(ss>>arr[i])
        {
            i++;
        }
        int a,b,result;
        result=0;
        for(a=0;a<i;a++)
        {
            for(b=a+1;b<i;b++)
            {
                result=max((Retun_gcd(arr[a],arr[b])),result);
            }
        }
        cout<<result<<endl;
    }

    return 0;
}
