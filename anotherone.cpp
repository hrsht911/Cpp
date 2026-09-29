#include <iostream>
using namespace std;

void IVR()
{
    int choice;

    cout << "\n--- CUSTOMER IVR ---\n";
    cout << "1. Technical Support\n";
    cout << "2. Billing Support\n";
    cout << "3. Account Support\n";
    cout << "4. General Enquiry\n";
    cout << "5. Exit IVR\n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "\nTechnical Support selected.\n";
            IVR();   // Recursive call
            break;

        case 2:
            cout << "\nBilling Support selected.\n";
            IVR();   // Recursive call
            break;

        case 3:
            cout << "\nAccount Support selected.\n";
            IVR();   // Recursive call
            break;

        case 4:
            cout << "\nGeneral Enquiry selected.\n";
            IVR();   // Recursive call
            break;

        case 5:
            cout << "\nExiting IVR...\n";
            return;

        default:
            cout << "\nInvalid choice!\n";
            IVR();   // Recursive call
    }
}

int main()
{
    IVR();
    return 0;
}