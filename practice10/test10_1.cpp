#include <iostream>
using namespace std;

int main() {
    int score;

    do {
        cout << "点数を入力してください：";
        cin >> score;
    } while (score < 0 || score > 100);
    cout << score << endl;

    return 0;
}
