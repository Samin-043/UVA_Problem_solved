#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int top;
char stc[140];

void push(char x)
{

    top=top+1;
    stc[top]=x;

}

void pop(char t)
{
    if(t==')')
    {
        if(stc[top]=='(')
        {
            top=top-1;
        }
    }

    else if(t=='}')
    {
        if(stc[top]=='{')
        {
            top=top-1;
        }
    }

    else if(t==']')
    {
        if(stc[top]=='[')
        {
            top=top-1;
        }
    }


}

bool isEmpty()
{
    if(top==0)
    {
        return true;
    }

    else
    {
        return false;
    }

}

bool isBalanced(char a[],int len)
{
    int i;
    char c,d;

    for(i=0; i<len; i++)
        {
            if(a[i]=='{'||a[i]=='['||a[i]=='(')
            {
                c=a[i];
                push(c);

            }

            if(isEmpty())
            {
                return false;
            }

            else if(a[i]==')'||a[i]=='}'||a[i]==']')
            {

                    d=a[i];
                    pop(d);

            }

        }

        return (isEmpty());

}

int main()
{
    char a[140];
    int i,n;
    scanf("%d",&n);

    while(n--)
    {
        top=0;
        scanf("%s",a);
        int len;
        len=strlen(a);

        if(isBalanced(a,len))
        {
            printf("Yes\n");

        }

        else
        {
            printf("No\n");

        }

    }

    return 0;
}


