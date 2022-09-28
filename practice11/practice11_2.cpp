#include <iostream>
using namespace std;

int sum(int);

int main() {
    sum(100);
    return 0;
}

int sum(int max) {
    cout << (max + 1) * max / 2 << endl;
    return 0;
}
