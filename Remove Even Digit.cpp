#include <iostream>
using namespace std;

void removeEvenDigits(int n) {
    int result = 0;
    int place = 1;

    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            result += digit * place;
            place *= 10;
        }
        n /= 10;
    }

    if (result == 0) {
        cout << 0 << endl;
    } else {
        cout << result << endl;
    }
}

int main() {
    int n;
    cout << "";
    cin >> n;

    removeEvenDigits(n);

    return 0;
}
