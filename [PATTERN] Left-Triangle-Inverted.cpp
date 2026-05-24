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

void printInvertedLeft(int current)
{
    if (current == 0)
    {
        return;
    }

    else
    {
        printStars(current);
        cout << "\n";
        printInvertedLeft(current - 1);
    }
}

int main()
{
    int rows;
    cout << "Enter rows: "; 
    cin >> rows;

    cout << "\n";
    printInvertedLeft(rows);

    return 0; 
}
