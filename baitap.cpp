#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

int main() {
    int a[] = { 17, 23, 201, 98, 67, 83, 13, 23, 10, 191, 84, 58 };
    for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
        for (int j = i; j >= 0; j--) {
            if (a[i] < a[j]) {
                swap(a[i], a[j]);
                break;
            }
        }
        for (int x : a) cout << x << ' ';
        cout << endl;
    }

}