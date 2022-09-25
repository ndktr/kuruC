#include <iostream>
using namespace std;

int main() {
    char c = 'A';
    int result;

    if (isdigit(c)) {
        result = c - '0';
    } else {
        result = 0;
    }

    cout << result << endl;

    return 0;
}