#include<bits/stdc++.h>
#include<string.h>

int arr[100];

int fibo_print(int n)
{
    if(n==0||n==1)
        return 1;

    else if(arr[n]==0)
        arr[n]=fibo_print(n-1)+fibo_print(n-2);

    return arr[n];

}

int main()
{
    char s1[1000],s2[1000];

    scanf("%s",s1);
    scanf("%s",s2);

    int a,b,i,j;
    i=j=a=b=0;
    while(s1[i]!='\0')
    {
        a=a*10+s1[i]-'0';
        i++;

    }

    printf("%d ",a);

    while(s2[j]!='\0')
    {
        b=b*10+s2[j]-'0';
        j++;

    }

    printf("%d",b);

    return 0;
}
