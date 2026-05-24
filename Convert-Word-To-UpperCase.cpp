#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

void toUppercase(char str[], int index)
{
    if(str[index] == '\0')
    {
        return;
    }
    
    else
    {
        str[index] = toupper(str[index]);
        toUppercase(str, index + 1);
    }
}

int main()
{
    char word[50];
    cout << "Enter a word: ";
    cin >> word;

    toUppercase(word, 0);
    cout << "\nUppercase: " << word;
    return 0;
}
