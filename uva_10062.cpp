#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    int flag1=0;
    while(getline(cin,s))
    {
        if(flag1!=0)
        {
            cout<<endl;
        }
        flag1=1;
        int freq[100];
        int ascii_value[100];
        int x=0;
        for(int i=32; i<=128; i++)
        {
            ascii_value[x]=i;
            x++;
        }
        for(int l=0; l<x; l++)
        {
            freq[l]=0;
        }

        ll len=s.size();
        for(int i=0;i<len;i++)
        {
            int len=s[i];
            for(int j=0;j<x;j++)
            {
                if(len==ascii_value[j])
                {
                    freq[j]++;
                }
            }
        }
        int arr[100000];
        int k=0;
        for(int i=0;i<x;i++)
        {
            if(freq[i]>0)
            {
                arr[k]=freq[i];
                k++;
            }
        }
        sort(arr,arr+k);
        for(int i=0;i<k;i++)
        {
            for(int j=x-1;j>=0;j--)
            {
                if(arr[i]==freq[j])
                {
                    cout<<ascii_value[j]<<" "<<arr[i];
                    freq[j]=-1;
                    cout<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
