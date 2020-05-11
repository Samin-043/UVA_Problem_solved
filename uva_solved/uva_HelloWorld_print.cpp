#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long long int i,j=0,num;
    long long int c,res;
    while(cin >> num)
    {
        if(num<0)
            break;

        c=-1;
        for(i=0; i<=10001; i++)
        {
            res=pow(2,i);
            c++;
            if(res>=num)
            {
                break;
            }

        }
        //printf("Case %lld: %lld\n",j+1,c);
        cout << "Case "<<j+1<<": "<<c<<endl;

        j++;

    }

    return 0;
}
