#include<stdio.h>
int main()
{

    int t,n;
    char s[100];

    scanf("%d",&t);
    int i;
    int a,b,c,d,e,f,g,h,j,k;

    while(t--)
    {
        scanf("%d",&n);

        int num,rem;
        a=b=c=d=e=f=g=h=j=k=0;
        rem=0;

        for(i=1; i<=n; i++)
        {
            if(i>9)
            {
                num=i;

                while(num!=0)
                {
                    rem=num%10;

                    switch(rem)
                    {
                    case 1:
                        a++;
                        break;
                    case 2:
                        b++;
                        break;
                    case 3:
                        c++;
                        break;
                    case 4:
                        d++;
                        break;
                    case 5:
                        e++;
                        break;
                    case 6:
                        f++;
                        break;
                    case 7:
                        g++;
                        break;
                    case 8:
                        h++;
                        break;
                    case 9:
                        j++;
                        break;
                    default :
                        k++;
                        break;


                    }

                    num/=10;

                }

            }
            else
            {

                switch(i)
                {
                case 1:
                    a++;
                    break;
                case 2:
                    b++;
                    break;
                case 3:
                    c++;
                    break;
                case 4:
                    d++;
                    break;
                case 5:
                    e++;
                    break;
                case 6:
                    f++;
                    break;
                case 7:
                    g++;
                    break;
                case 8:
                    h++;
                    break;
                case 9:
                    j++;
                    break;
                default :
                    k++;
                    break;


                }

            }
        }

        printf("%d %d %d %d %d %d %d %d %d %d\n",k,a,b,c,d,e,f,g,h,j);

    }



    return 0;
}
