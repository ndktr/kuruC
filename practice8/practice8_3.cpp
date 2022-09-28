 #include <iostream>
 using namespace std;

 int main() {
    int age;
    cout << "年齢: ";
    cin >> age;

    if (age <= 3) {
        cout << "幼児: 無料" << endl;
    } else if (age <= 12) {
        cout << "子供: 250円" << endl;
    } else {
        cout << "大人: 400円" << endl;
    }

    return 0;
 }
