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

void printPyramid(int rows, int current)
{
    if (current > rows)
    {
        return; 
    }

    else
    {
        printSpaces(rows - current); 
        printStars(2 * current - 1); 
        cout << "\n";
        printPyramid(rows, current + 1); 
    }
}

int main()
{
    int rows; 
    cout << "Enter rows: "; 
    cin >> rows; 

    cout << "\n"; 
    printPyramid(rows, 1);

    return 0; 
}
