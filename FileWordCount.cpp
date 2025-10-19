#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    ifstream file("sample.txt");
    if (!file.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string word;
    int count = 0;
    while (file >> word)
        count++;

    cout << "Total words: " << count << endl;
    file.close();
    return 0;
}
