#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    stack<string> words;
    stringstream ss(sentence);
    string word;

    while (ss >> word)
        words.push(word);

    cout << "Reversed: ";
    while (!words.empty()) {
        cout << words.top() << " ";
        words.pop();
    }
    return 0;
}
