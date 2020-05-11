#include<stdio.h>
int main()
{
    long int a[10006];
    int i,test,j,n,m;
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        scanf("%d",&n);
        int j=0;
        while(j<n)
        {
            scanf("%li",&a[j]);
            if(j==0)
            {
                m=a[j];
            }
            else if(a[j]>m)
            {
                m=a[j];
            }
            j++;
        }
        printf("Case %d: %d\n",i+1,m);

    }
    return 0;

}
