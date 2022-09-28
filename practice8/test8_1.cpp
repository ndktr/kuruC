#include <iostream>
using namespace std;

int main() {
    int month;
    cin >> month;

    switch(month) {
        case 1:
            cout << "睦月" << endl;
            break;
        case 2:
            cout << "如月" << endl;
            break;
        case 3:
            cout << "弥生" << endl;
            break;
        case 4:
            cout << "卯月" << endl;
            break;
        case 5:
            cout << "皐月" << endl;
            break;
        case 6:
            cout << "水無月" << endl;
            break;
        case 7:
            cout << "文月" << endl;
            break;
        case 8:
            cout << "葉月" << endl;
            break;
        case 9:
            cout << "長月" << endl;
            break;
        case 10:
            cout << "神無月" << endl;
            break;
        case 11:
            cout << "霜月" << endl;
            break;
        case 12:
            cout << "師走" << endl;
            break;
        default:
            cout << "存在しない月です" << endl;
            break;
    }
}
