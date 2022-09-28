#include <iostream>
using namespace std;

int main() {
    int numbers[10];

    for (int i = 0; i < 10; i++) {
        cout << "数字を入力してください:";
        cin >> numbers[i];
    }

    for (int i = 9; i >= 0; i--) {
        cout << numbers[i] << endl;
    }

    return 0;
}
