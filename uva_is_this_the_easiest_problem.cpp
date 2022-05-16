#include<bits/stdc++.h>
int main()
{
    int t;
    signed long long int a,b,c;
    int i=1;
    scanf("%d",&t);
    while(i<=t)
    {
        scanf("%lli %lli %lli",&a,&b,&c);

        printf("Case %d: ",i);

        if((a+b)>c&&(a+c)>b&&(b+c)>a)
        {
            if(a==b&&b==c)
            {
                printf("Equilateral\n");
            }

            else if(a==b||a==c||b==c)
            {
                printf("Isosceles\n");
            }

            else
            {
                printf("Scalene\n");
            }
        }
        else
        {
            printf("Invalid\n");
        }

        i++;
    }

    return 0;
}
