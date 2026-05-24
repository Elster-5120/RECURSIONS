#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

void toLowercase(char str[], int index)
{
    if(str[index] == '\0')
    {
        return;
    }

    else
    {
        str[index] = tolower(str[index]);
        toLowercase(str, index + 1);
    }
}

int main()
{
    char word[50];
    cout << "Enter a word: ";
    cin >> word;
    
    toLowercase(word, 0);
    cout << "Lowercase: " << word << endl;
    return 0;
}
