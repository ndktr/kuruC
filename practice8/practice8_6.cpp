#include <iostream>
using namespace std;

int main() {
    int no;
    cin >> no;
    switch(no) {
        case 1:
        case 3:
        case 4:
            cout << "男性" << endl;
            break;
        case 2:
            cout << "女性" << endl;
            break;
        default:
            cout << "そんな番号の人はいません" << endl;
            break;
    }
    return 0;
}
