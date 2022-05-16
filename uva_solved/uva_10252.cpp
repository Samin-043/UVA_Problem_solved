#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string s1;
    while((getline(cin,s))&&(getline(cin,s1)))
    {
        int len1=s.size();
        int len2=s1.size();
        int x=0;
        int arr[100000];
        for(int i=0;i<len1;i++)
        {
            for(int j=0;j<len2;j++)
            {
                if(s[i]==s1[j])
                {
                    arr[x]=s[i];
                    s1[j]='0';
                    x++;
                    break;
                }
            }
        }
        sort(arr,arr+x);
        for(int i=0;i<x;i++)
        {
            char c=arr[i];
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}
