#include <iostream>
using namespace std;

int countfunc();

int main() {
    countfunc();
    countfunc();
    countfunc();
    return 0;
}

int countfunc() {
    static int count;

    count++;
    cout << count << endl;

    return 0;
}
