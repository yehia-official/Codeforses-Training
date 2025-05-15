# Watermelon Problem 

![Watermelon](https://github.com/user-attachments/assets/8169316e-a3b9-47aa-8aa1-1e12c1fc47fc)

## Code

```cpp
#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;
    if (w % 2 == 0 && w > 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
