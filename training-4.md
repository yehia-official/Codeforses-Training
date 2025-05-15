# Sequence Matching Problem 

![Problem Image](https://github.com/user-attachments/assets/124c3032-33ce-4564-83ca-0b46f9302548)

## Code

```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    string target = "01032025";
    while (t--) {
        int n;
        cin >> n;
        vector<int> digits(n);
        for (int i = 0; i < n; ++i) {
            cin >> digits[i];
        }
        int pos = 0;
        int result = 0;
        for (int i = 0; i < n; ++i) {
            if (digits[i] == target[pos] - '0') {
                pos++;
                if (pos == target.size()) {
                    result = i + 1;
                    break;
                }
            }
        }
        cout << (pos == target.size() ? result : 0) << endl;
    }
    return 0;
}
