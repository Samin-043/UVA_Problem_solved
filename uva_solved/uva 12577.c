#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i=0;
    while(scanf("%s",s))
    {
        if(s[0]=='*')
            break;
        else if(s[1]=='a')
            printf("Case %d: Hajj-e-Akbar\n",i+1);
        else if(s[1]=='m')
            printf("Case %d: Hajj-e-Asghar\n",i+1);
        i++;
    }


    return 0;
}
