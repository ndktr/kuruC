#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num >= 8 && num <= 12) {
        cout << "8〜12の間です" << endl;
    }
    if (!(num >= 8 && num <= 12)) {
        cout << "８〜12の間ではありません" << endl;
    }
    return 0;
}
