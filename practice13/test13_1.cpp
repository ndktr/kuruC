#include <iostream>
using namespace std;

int main() {
    int array[10];
    
    cin >> array[0];
    cin >> array[1];
    cin >> array[2];
    cin >> array[3];
    cin >> array[4];
    cin >> array[5];
    cin >> array[6];
    cin >> array[7];
    cin >> array[8];
    cin >> array[9];

    for (int i = 9; i >= 0; i--) {
        cout << array[i] << endl;
    }

    return 0;
}
