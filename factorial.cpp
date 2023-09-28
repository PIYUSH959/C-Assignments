#include<iostream>
using namespace std;

int main()
{
    int i , num , fact = 1;

    cout << "\n Enter a number : ";

    cin >> num;

    for( i=num ; i>=1 ; i--)
        fact = fact * i;

    cout << "\n Factorial of " << num << " = " << fact;

    return 0;
}
