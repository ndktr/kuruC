#include <iostream>
using namespace std;

int main() {
    int value1 = 10;
    int value2 = 20;

    cout << "value1:" << value1 << endl;
    cout << "value2:" << value2 << endl;

    {
        int value1 = 30;
        value2 = 40;

        cout << "value1:" << value1 << endl;
        cout << "value2:" << value2 << endl;
    }

    cout << "value1:" << value1 << endl;
    cout << "value1:" << value2 << endl;

    return 0;
}
