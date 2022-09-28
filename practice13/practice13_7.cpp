#include <iostream>
using namespace std;

int main() {
    int array[] = {42, 79, 13, 19, 41};
    int array2[] = {1, 2, 3, 4, 5};
    
    int array2_count = sizeof(array2) / sizeof(array2[0]);
    for (int i = 0; i < array2_count; i++) {
        array2[i] = array[i];
    }

    for (int i = 0; i < array2_count; i++) {
        cout << array2[i] << endl;
    }
    return 0;
}
