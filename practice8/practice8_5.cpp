#include <iostream>
using namespace std;

int main() {
    int no;
    cin >> no;

    switch (no) {
    case 1:
        cout << "野比のび太" << endl;
        break;
    case 2:
        cout << "源静香" << endl;
        break;
    case 3:
        cout << "剛田武" << endl;
        break;
    case 4:
        cout << "骨川ツネ夫" << endl;
        break;
    default:
        cout << "そんな番号の人はいません" << endl;
        break;
    }

    return 0;
}
