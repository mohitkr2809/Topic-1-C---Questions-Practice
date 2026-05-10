#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    ch = tolower(ch);   // Convert to lowercase

    if (isalpha(ch)) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            cout << "It is a Vowel.";
        else
            cout << "It is a Consonant.";
    } else {
        cout << "It is not an alphabet character.";
    }

    return 0;
}
