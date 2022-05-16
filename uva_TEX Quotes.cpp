#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    char s;
    long long int c;
    c=0;
    while(scanf("%c",&s)!=EOF)
    {
        if(s=='"')
        {
            c++;
            if(c%2==1)
            {
                printf("``");
            }
            else
            {
                printf("''");
            }
        }
        else
        {
            printf("%c",s);
        }

    }
    return 0;
}
