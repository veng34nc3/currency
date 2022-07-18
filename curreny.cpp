#include <iostream>

using namespace std;

int main()
{
    float pln;
    float dollar,pound,euro,sek;
    int choice;

    cout << "Input value in Pln" << endl;
    cin >> pln;

    dollar=pln*0.21;
    pound=pln*0.18;
    euro=pln*0.21;
    sek=pln*2.21;

    while(true)
    {
        cout << "Choose the currency:\n1.American Dollar\n2.British Pound\n3.Euro\n4.Swedish Crown\n5.Exit" << endl;
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << pln << "pln is " << dollar << " American Dollars" << endl;
                break;
            case 2:
                cout << pln << "pln is " << pound << " British Pounds" << endl;
                break;
            case 3:
                cout << pln << "pln is " << euro << " Euro" << endl;
                break;
            case 4:
                cout << pln << "pln is " << sek << " Swedish Crowns" << endl;
                break;
            case 5:
                return 0;
        }
    }
}
