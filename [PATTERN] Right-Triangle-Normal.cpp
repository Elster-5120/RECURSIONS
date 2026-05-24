#include<iostream> 
using namespace std;

void printSpaces(int count)
{
    if (count == 0)
    {
        return; 
    }

    else
    {
        cout << " "; 
        printSpaces(count - 1); 
    }
}

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

void printRightTriangle(int rows, int current)
{
    if (current > rows)
    {
        return;
    }

    else
    {
        printSpaces(rows - current);
        printStars(current);
        cout << "\n";
        printRightTriangle(rows, current + 1);
    }
}

int main()
{
    int rows; 
    cout << "Enter rows: "; 
    cin >> rows; 

    cout << "\n";
    printRightTriangle(rows, 1);

    return 0; 
}
