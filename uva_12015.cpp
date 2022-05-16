#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int l;
    for(l=1; l<=n; l++)
    {
        int i,j,var[105],data;
        int larger;
        char s[105][105];
        larger=0;
        int flag,k;
        flag=k=0;
        for(i=0; i<10; i++)
        {
            cin>>s[i];
            cin>>var[i];
            if(var[i]>=larger)
            {
                larger=var[i];
            }
        }
        cout<<"Case #"<<l<<":"<<endl;
        for(i=0; i<10; i++)
        {
            if(larger==var[i])
            {
                for(j=0; s[i][j]!='\0'; j++)
                {
                    cout<<s[i][j];
                }
                cout<<endl;
            }
        }
    }

    return 0;
}
