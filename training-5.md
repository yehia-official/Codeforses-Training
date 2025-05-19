
![Image](https://github.com/user-attachments/assets/3a1e187f-bc6e-47c6-97fe-0b96e68e5932)
```cpp
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int total = 2 * c - a - b;
        if (total % 3 != 0) {
            cout << "NO\n";
            continue;
        }
        int k = total / 3;
        if (k < 1 || k > c) {
            cout << "NO\n";
            continue;
        }
        if ((b - a + k) % 2 != 0) {
            cout << "NO\n";
            continue;
        }
        int x = (b - a + k) / 2;
        int y = k - x;
        if (x < 0 || y < 0) {
            cout << "NO\n";
            continue;
        }
        if (a + x == c - k && b + y == c - k) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
