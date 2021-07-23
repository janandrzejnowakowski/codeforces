#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    if (num&1 || num < 4)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}