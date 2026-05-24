#include<iostream>
using namespace std;

int sumNumbers(int n)
{
    if(n == 0)
    {
        return 0;
    }

    else
    {
        return n + sumNumbers(n - 1);
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "\nThe sum is " << sumNumbers(n);
    return 0;
}
