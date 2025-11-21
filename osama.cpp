#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "enter the ribs : ";
    cin >> a >> b >> c;
    
    if (a > b) {
        if (a > c) {
            if (b + c > a) {
                cout << "valid triangle";
            } else {
                cout << " not a triangle";
            }
        } else {
            cout << "not a triangle";
        }
    } else {
        cout << "not a triangle";
    }
    
    return 0;
}
