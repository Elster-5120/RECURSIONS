#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char str[], int start, int end)
{
    if(start >= end)
    {
        return true;
    }

    else
    {
        if(str[start] != str[end])
        {
            return false;
        }

        else
        {
            return isPalindrome(str, start + 1, end - 1);
        }
    }
}

void Menu()
{
    char word[50];
    cout << "Enter a word (lowercase): ";
    cin >> word;

    if(isPalindrome(word, 0, strlen(word) - 1))
    {
        cout << "\nPalindrome!";
    }

    else
    {
        cout << "\nNot a palindrome.";
    }
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
