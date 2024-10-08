#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

int main() {
    int a[5] = { 2, 1, 3, 99, 87 };
    for (int i = 0; i < 5; i++) {
        for (int j = i; j >= 0; j--) {
            if (a[i] < a[j]) {
                swap(a[i], a[j]);
                break;
            }

        }
    }

    for (int i = 0; i < 5; i++) cout << a[i] << ' ';
}