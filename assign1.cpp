#include<iostream>

using namespace std;

int main()
{
    int num ;

    cout << " Enter a number : ";

    cin >> num;

    if ( num % 2 == 0 )
    {
        cout << "\n It is a EVEN number.. ";
    }
    else
    {
        cout << "\n It is a ODD number..";
    }
    return 0;
}
