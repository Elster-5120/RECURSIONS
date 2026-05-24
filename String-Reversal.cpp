#include<iostream>
#include<cstring>
using namespace std;

void reverseString(char str[], int start, int end)
{
    if(start >= end)
    {
        return;
    }

    else
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        reverseString(str, start + 1, end - 1);
    }
}

int main()
{
    char word[50];
    cout << "Enter a word: ";
    cin.get(word, 50);

    reverseString(word, 0, strlen(word) - 1);

    cout << "\nReversed: " << word;
    
    return 0;
}
