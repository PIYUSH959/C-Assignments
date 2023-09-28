#include<iostream>
using namespace std;

int main()
{
    int i,num , cnt = 0;

    cout << "\n Enter a number : ";

    cin >> num;

    for ( i = 2 ; i<num ; i++)
    {
        if((num%i) == 0)
            cnt = cnt + 1;
    }
    if(cnt>0)
        cout << "\n It is a prime";
    else
        cout << "\n It is not a prime";
    return 0;
}
