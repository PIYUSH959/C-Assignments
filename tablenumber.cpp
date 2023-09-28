#include<iostream>
using namespace std;

int main()
{
    int i , num;

    cout << "\n Enter a number : ";

    cin >> num;

    for ( i=1 ; i<=10 ; i++)

        cout << num << " * " << i << " = " << num * i << "\n";


    return 0;
}
