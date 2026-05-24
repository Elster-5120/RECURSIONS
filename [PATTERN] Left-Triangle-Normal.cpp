#include<iostream> 
using namespace std;

void printStars(int count)
{
    if (count == 0)
    {
        return; 
    }

    else
    {
        cout << "*";
        printStars(count - 1); 
    }
}

void printLeftTriangle(int rows, int current)
{
    if (current > rows)
    {
        return;
    }

    else
    {
        printStars(current);
        cout << "\n";
        printLeftTriangle(rows, current + 1);
    }
}

int main()
{
    int rows; 
    cout << "Enter number of rows: "; 
    cin >> rows; 

    printLeftTriangle(rows, 1);

    return 0; 
}
