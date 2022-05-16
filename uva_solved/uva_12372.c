#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,len,wid,height;
    for(i=0; i<n; i++)
    {

        scanf("%d%d%d",&len,&wid,&height);
        if(len>20||wid>20||height>20)
            printf("Case %d: bad\n",i+1);
        else
            printf("Case %d: good\n",i+1);
    }

    return 0;
}
