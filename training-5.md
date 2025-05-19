
![Image](https://github.com/user-attachments/assets/3a1e187f-bc6e-47c6-97fe-0b96e68e5932)
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b, c;
        cin >> a >> b >> c;
        cout << a[0] << b[0] << c[0] << endl;
    }
    return 0;
}
