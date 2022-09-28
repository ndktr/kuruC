#include <iostream>
using namespace std;

int countfunc(void);

int main() {
    countfunc();
    countfunc();
    countfunc();
    return 0;
}

int countfunc(void) {
    int count = 0;
    count++;
    cout << count << endl;
    return 0;
}
