#include<iostream> 
using namespace std;

int sumSquares(int n)
{
    if (n == 0)
    {
        return 0; 
    }

    else
    {
        return (n * n) + sumSquares(n - 1);
    }
}

void Menu()
{
    int n; 
    cout << "Enter a number: "; 
    cin >> n; 
    cout << "\nSum of squares up to " << n << " = " << sumSquares(n);
}

int main()
{
    char again; 

    do { 
        
        Menu();
        cout << "\nDo you want to try again? Press Y for Yes and N for No: "; 
        cin >> again; 

    } while (again == 'y' || again == 'Y');

    system("pause");
    return 0; 
}
