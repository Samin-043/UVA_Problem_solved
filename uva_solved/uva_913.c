#include<stdio.h>
int main()
{
    int count=0;
    long int i,n;
    long int sum=0;
    scanf("%li",&n);

    for(i=n;i>0;i=i-2)
    {

        count++;
        if(count>3)
            break;
        sum+=i;


    }

    printf("%li\n",sum);
    return 0;
}
