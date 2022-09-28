#include <iostream>
using namespace std;

int add(int, int);

int main() {
    int value = add(50, 100);
    cout << value << endl;
    return 0;
}

int add(int min, int max) {
    int num;
    num = (max + min) * (max - min + 1) / 2;
    return num;
}
