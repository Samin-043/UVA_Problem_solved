#include<stdio.h>
unsigned long long int a[5000];
int fibonacci_freeze(int num)
{

    if(num==0||num==1)
        return 1;
    else if(a[num]==0)
        a[num]=fibonacci_freeze(num-1)+fibonacci_freeze(num-2);

    return a[num];

}

int main()
{
    int num;
    scanf("%d",&num);
    int i;
    unsigned long long int result;
    for(i=1;i<=5000;i++)
    {

        if(i==num)
        {
            result=fibonacci_freeze(num-1);
            printf("The Fibonacci number for %d is %llu\n",i,result);
            break;
        }

    }

    return 0;
}
