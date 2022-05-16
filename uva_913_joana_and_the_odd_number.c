#include<stdio.h>
int main()
{

    long long int num;
    long long int total_numbers_inLine;
    long long int last_number;
    long long int sum_of_last_three_numbers;
    long long int n;

    while((scanf("%lli",&num))!=EOF)
    {

        n=(num+1)/2;
        total_numbers_inLine=(n*(n+1))-n;
        last_number=2*(total_numbers_inLine)-1;
        sum_of_last_three_numbers=(3*last_number)-6;

        printf("%lli\n",sum_of_last_three_numbers);

    }

    return 0;
}
