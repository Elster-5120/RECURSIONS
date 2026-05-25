#include<iostream> 
using namespace std;

void primeFactors(int n, int divisor)
{
    if (n == 1)
    {
        return;
    }

    else
    {
        if (n % divisor == 0)
        {
            cout << divisor << " "; 
            primeFactors(n / divisor, divisor);
        }

        else
        {
            primeFactors(n, divisor + 1); 
        }
    }
}

void Menu()
{
    int n;
    cout << "Enter a number: "; 
    cin >> n; 
    cout << "\nPrime factors of " << n << ": "; 
    primeFactors(n, 2);
    cout << "\n";
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
