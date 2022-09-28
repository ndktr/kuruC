#include <iostream>
using namespace std;

int main() {
    int array[] = {100, 79, 13, 75, 19};
    int i;

    cout << sizeof(array) << endl;
    cout << sizeof(array[0]) << endl;
    cout << sizeof(array[1]) << endl;
    cout << sizeof(array[2]) << endl;
    cout << sizeof(array[3]) << endl;
    cout << sizeof(array[4]) << endl;

    //intは4バイト、intが5個=配列全体で20バイト
    for (i = 0; i < (sizeof(array) / sizeof(array[0])); i++) {
        cout << "array[" << i << "]:" << array[i] << endl;
    }

    return 0;
}
