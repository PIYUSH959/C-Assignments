
#include<iostream>
using namespace std;

int main()
{
    int num , sum = 0 , rem;

    cout << "\n Enter a number : ";

    cin >> num;

    for ( ; num > 0 ; )
    {

        rem = num % 10;

        sum = sum + rem;

        num = num / 10;
    }

    cout << "\n Sum of digits = " << sum;
    return 0;
}
