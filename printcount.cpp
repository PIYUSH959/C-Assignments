#include<iostream>
using namespace std;

int main()
{
    int num , cnt = 0;

    cout << "\n Enter a number : ";

    cin >> num;

    for (; num > 0 ;)
    {
        cnt = cnt + 1 ;
        num = num / 10 ;

    }
    cout << "\n The Number count is " << cnt ;
    return 0;
}
