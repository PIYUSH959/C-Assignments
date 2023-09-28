#include<stdio.h>
using namespace std;

int main()
{
    int ch , qty , total_bill = 0;

    do
    {
        cout << "\n 1. Tea ";
        cout << "\n 2. Coffee ";
        cout << "\n 3. Black Tea ";
        cout << "\n 4. Vada paav ";
        cout << "\n 5. Exit ";

        cout << "\n Enter your choice : ";

        cin >> ch;

        if((ch>1) && (ch<4))
            {
                cout << "\n Enter quantity : ";
                cin >> qty;
            }

        switch (ch)
        {
            case 1 : total_bill = total_bill + qty * 10;
            break;

            case 2 : total_bill = total_bill + qty * 20;
            break;

            case 3 : total_bill = total_bill + qty * 220;
            break;

            case 4 : total_bill = total_bill + qty * 15;
            break;

            case 5 break;

            default : cout << " Invalid choice. Enter no. 1 to 5 ";
        }
    }while(ch!=5);

    cout << "Total Bill Amount = " << total_bill;

    return 0;
}
