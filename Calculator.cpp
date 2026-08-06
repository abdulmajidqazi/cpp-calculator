#include <iostream>
using namespace std;

double add(double num1, double num2)
{
    return num1 + num2;
}

double sub(double num1, double num2)
{
    return num1 - num2;
}

double mul(double num1, double num2)
{
    return num1 * num2;
}

double divide(double num1, double num2)
{
    return num1 / num2;
}


int main()
{
    int choice = 0;
    double num1 = 0, num2 = 0, result = 0;
    char again;

    while (true)
    {
        cout << "<--- Welcome to Calculator --->";

        cout << "\n\n=== MENU ===\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
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

        if (again != 'y' && again != 'Y')
        {
            cout << "\nThank you for using calculator.\n";
            break;
        }

    }

    return 0;
}