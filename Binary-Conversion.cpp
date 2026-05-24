#include<iostream>
using namespace std;

void toBinary(int n)
{
    if(n == 0)
    {
        return;
    }

    else
    {
        toBinary(n / 2);
        cout << n % 2;
    }
}

void Menu()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;
    cout << "Binary of " << num << " = ";

    if(num == 0)
    {
        cout << 0;
    }

    else
    {
        toBinary(num);
    }

    cout << endl;
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
