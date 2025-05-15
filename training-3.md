# Power Calculation Problem 

![Problem Image](https://github.com/user-attachments/assets/018eabad-fa32-49e8-8f4c-0208d570d06c)

## Code

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << (long long)(pow(2, n + 1) - 2) << endl;
    return 0;
}
