#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "点数を入力してください" << endl;
    cin >> score;

    if (score > 100) {
        cout << "入力が100より大きいので修正します" << endl;
        score = 100;
    }
    cout << "点数は" << score << "点です" << endl;
    return 0;
}
