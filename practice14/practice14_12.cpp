#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str1[12] = "DRAGON";
    char str2[] = "QUEST";
    strcat(str1, str2);
    cout << str1 << endl;
    return 0;
}