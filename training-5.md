
![Image](https://github.com/user-attachments/assets/751efbad-e5be-4e26-ad9e-fa07852f4685)

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
