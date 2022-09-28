#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "西暦年を入力してください" << endl;
    cin >> year;

    if (year % 4 == 0) {
        cout << "夏季オリンピックが開かれます" << endl;
    }
    if (year % 4 == 2) {
        cout << "冬季オリンピックが開かれます" << endl;
    }

    return 0;
}
