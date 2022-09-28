#include <iostream>
using namespace std;

int count;
int countfunc(void);

int main() {
    int count;

    countfunc();
    count = 10;
    countfunc();
    countfunc();
    cout << count << endl;
    
    return 0;
}

int countfunc() {
    count++;
    cout << count << endl;
    return 0;
}
