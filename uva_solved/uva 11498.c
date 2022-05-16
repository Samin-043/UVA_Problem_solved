#include<stdio.h>
int main()
{
    int test;
    int i,m,n,x,y;
    while ((scanf("%d",&test))!=EOF)
    {
        if(test==0)
            break;
        scanf("%d %d",&m,&n);
        for(i=0; i<test; i++)
        {

            scanf("%d %d",&x,&y);
            if(x==m||y==n)
                printf("divisa\n");
            else if(x>m&&y>n)
                printf("NE\n");
            else if(x>m&&y<n)
                printf("SE\n");
            else if(x<m&&y>n)
                printf("NO\n");
            else if(x<m&&y<n)
                printf("SO\n");

        }
    }

    return 0;
}
