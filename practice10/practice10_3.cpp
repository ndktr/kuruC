#include <iostream>
using namespace std;

int main() {
    int r;
    double s;

    cout << "半径？：";
    cin >> r;

    while (r < 0) {
        cout << "半径？：";
        cin >> r;
    }

    s = r * r * 3.14;
    cout << "面積は" << s << "です" << endl;

    return 0;
}
