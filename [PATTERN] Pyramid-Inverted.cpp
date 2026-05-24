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

void printInvertedPyramid(int rows, int current)
{
    if (current == 0)
    {
        return; 
    }

    else
    {
        printSpaces(rows - current);
        printStars(2 * current - 1);
        cout << "\n";
        printInvertedPyramid(rows, current - 1); 
    }
}

int main()
{
    int rows; 
    cout << "Enter rows: "; 
    cin >> rows;

    cout << "\n";
    printInvertedPyramid(rows, rows);

    return 0; 
}
