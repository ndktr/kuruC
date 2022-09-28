#include <iostream>
using namespace std;

int main() {
    double money = 1;
    int month = 1;

    while (money < 1000000) {
        printf("%2d月目：%7.0f円\n", month, money);
        money *= 2;
        month++;
    }

    printf("%2d月目に%7.0f円となり、100万円を超える\n", month, money);
    return 0;
}
