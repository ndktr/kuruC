#include <iostream>
using namespace std;

int checkOpen(int);

int main() {
    int year;
    cout << "西暦年を入力してください" << endl;
    cin >> year;
    
    if (checkOpen(year) == 1) {
        cout << "夏季オリンピックが開かれます" << endl;
    } else if (checkOpen(year) == 2) {
        cout << "冬季オリンピックが開かれます" << endl;
    } else {
        cout << "オリンピックが開かれません" << endl;
    }
}

int checkOpen(int year) {
    if (year % 4 == 0) {
        return 1;
    } else if (year % 4 == 2) {
        return 2;
    } else {
        return 0;
    }
}
