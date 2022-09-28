#include <iostream>
using namespace std;

int count;

int countfunc(void);

int main() {
    countfunc();
    countfunc();
    countfunc();
    return 0;
}

int countfunc(void) {
    count++;
    cout << count << endl;
    return 0;
}
