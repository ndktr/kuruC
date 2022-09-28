#include <iostream>
using namespace std;

int main() {
    int r;
    double s;

    cout << "半径？：";
    cin >> r;

    if (r < 0) {
        cout << "半径は負の値になりません" << endl;
    } else {
        s = r * r * 3.14;
        cout << "面積は" << s << "です" << endl;
    }

    return 0;
}
