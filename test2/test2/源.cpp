#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;

    cout << n << "=";

    int flag = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            int cnt = 0;
            while (n % i == 0) {
                n /= i;
                cnt++;
            }
            if (flag) cout << "*";
            cout << i;
            if (cnt > 1) cout << "^" << cnt;
            flag = 1;
        }
    }

    if (n > 1) {
        if (flag) cout << "*";
        cout << n;
    }

    return 0;
}
