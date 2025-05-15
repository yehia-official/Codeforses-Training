# Problem Solution

![Image](https://github.com/user-attachments/assets/b43d68c7-2d89-4f7a-ae2a-f9b49e56035f)

## Code

```cpp
#include <iostream>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        long long total = a + b + c;
        if (total % 3 != 0) {
            cout << "NO\n";
            continue;
        }
        long long target = total / 3;
        if (c < target) {
            cout << "NO\n";
            continue;
        }
        long long k = c - target;
        if ((target - a) + (target - b) == k && (target >= a) && (target >= b)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
