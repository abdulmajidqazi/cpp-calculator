#include <iostream>
#include <string>
using namespace std;

int add(int num1, int num2)
{
    return num1 + num2;
}

int sub(int num1, int num2)
{
    return num1 - num2;
}

int mul(int num1, int num2)
{
    return num1 * num2;
}

int divide(int num1, int num2)
{
    return num1 / num2;
}


int main()
{
    int result = 0, choice = 0;
    int num1 = 0, num2 = 0;
    string again;

    while (true)
    {
        cout << "<--- Welcome to Calculator --->";

        cout << "\n\n=== MENU ===\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Divide\n";
        cout << "5. Exit\n";

        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 5)
        {
            cout << "\nThank you for using calculator.\n";
            break;
        }
        else if (choice < 1 || choice > 5)
        {
            cout << "Invalid choice. Please try again.\n";
            continue;
        }

        cout << "\nEnter number 1: ";
        cin >> num1;

        cout << "Enter number 2: ";
        cin >> num2;

        if (choice == 1)
        {
            result = add(num1, num2);
        }
        else if (choice == 2)
        {
            result = sub(num1, num2);
        }
        else if (choice == 3)
        {
            result = mul(num1, num2);
        }
        else if (choice == 4)
        {
            if (num2 != 0)
            {
                result = divide(num1, num2);
            }
            else
            {
                cout << "\nError: Cannot divide by zero.\n\n";
                continue;
            }
        }

        cout << "\nResult: " << result;

        cout << "\n\nDo you want to use calculator again? (y/n): ";
        cin >> again;

        if (again != "y")
        {
            cout << "Thank you for using calculator.\n";
            break;
        }

    }

    return 0;
}
