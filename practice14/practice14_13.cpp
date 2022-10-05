#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    char str[16];
    char str1[12] = "DRAGON";
    char str2[] = "QUEST";
    int i = 3;
    sprintf(str, "%s%s%d", str1, str2, i);
    cout << str << endl;
    return 0;
}