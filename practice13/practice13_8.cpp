#include <iostream>
#include <memory.h>
using namespace std;

int main() {
    int array[] = {42, 79, 13, 19, 41};
    int array2[] = {1, 2, 3, 4, 5};

    memcpy(array2, array1, sizeof(array1));

    for (int i = O; i < sizeof(array2) / sizeof(array2[0]); i++) {
        cout << array2[i] << endl;
    }
    return 0;
}
