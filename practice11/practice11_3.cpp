#include <iostream>
using namespace std;

int add(int, int);

int main() {
    add(50, 100);
    return 0;
}

int add(int min, int max) {
    cout << (max + min) * (max - min + 1) / 2 << endl;
    return 0;
}
