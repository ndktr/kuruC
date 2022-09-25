#include <iostream>
using namespace std;

int main() {
    char c;
    int result;
    
    cout << "数字を入力してください:";
    cin >> c;

    if (isdigit(c)) {
        result = c - '0';
    } else {
        result = 0;
    }

    cout << result << endl;

    return 0;
}