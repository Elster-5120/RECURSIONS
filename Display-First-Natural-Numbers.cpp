#include<iostream>
using namespace std;

void displayNumbers(int current, int n)
{
    if(current > n)
    {
        return;
    }

    else
    {
        cout << current << " ";
        displayNumbers(current + 1, n);
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "The numbers are: ";
    displayNumbers(1, n);
    cout << "\n";
    
    return 0;
}
