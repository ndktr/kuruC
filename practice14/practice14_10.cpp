#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str1[] = "MARIO", str2[10];
    strncpy(str2, str1, 3);
    str2[3] = '\0';
    cout << str2 << endl;
    return 0;
}