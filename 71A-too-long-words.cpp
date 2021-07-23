#include <iostream>
#include <string>

using namespace std;

int main() {
    int num;
    string word;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        cin >> word;
        if (word.size() <= 10)
            cout << word << '\n';
        else
            cout << word[0] << word.size() - 2 << word[word.size()-1] << '\n';
    }
    return 0;
}