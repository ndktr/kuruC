#include <iostream>
using namespace std;

int main() {
    int i;
    char str[256];

    cin >> str; 

    for (i = 0; str[i] != '\0'; i++);

    cout << i << endl;

    return 0;
}