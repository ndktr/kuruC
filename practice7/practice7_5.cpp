#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    if (num == 10) {
        cout << "入力値は10です\n";
    }
    if (num > 10) {
        cout << "入力値は10より大きいです\n";
    }
    if (num < 10) {
        cout << "入力値は10より小さいです\n";
    }
    return 0;
}
