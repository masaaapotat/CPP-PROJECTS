#include <iostream>
using namespace std;
int main()
{
    char word[100];
    //    prompt user to enter a word
    cout << "please enter a single word" << endl;
    cin >> word;
    // loop through the word entered and replace every vowel with an *
    for (int i = 0; word[i] != '\0'; i++)
    {
        // check for the vowels, both in caps and lowercase
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
        {
            word[i] = '*';
        }
    }
    cout << word << endl;

    return 0;
}