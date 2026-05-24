#include<iostream> 
using namespace std;

int power(int x, int n)
{
    if (n == 0)
    {
        return 1; 
    }

    else
    {
        return x * power(x, n - 1); 
    }
}

void Menu()
{
    int base, exp;
    cout << "Enter base: "; 
    cin >> base;

    cout << "Enter exponent: "; 
    cin >> exp;

    cout << "\n" << base << " raised to the power of " << exp << " = " << power(base, exp); 

}

int main()
{
    char again; 

    do {

        Menu();
        cout << "\nDo you want to try again?\nPress Y for Yes and N for No: "; 
        cin >> again;

    } while (again == 'y' || again == 'Y'); 

    system("pause");
    return 0; 
}
