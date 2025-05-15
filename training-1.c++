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
        // Check if the third deck can contribute enough cards
        // The cards taken from third deck is (c - target)
        // These cards must be >=1 and <=c (since 1 <= k <=c)
        // Also, the first and second decks need (target -a) + (target -b) = 2*target -a -b = (c - target)
        // Because (a + b + c) = 3*target => 2*target -a -b = c - target.
        // So the key is whether (c - target) >=0, and (target -a) + (target -b) = (c - target)
        // Additionally, the individual (target -a) and (target -b) must be >=0 because you can't take cards from first or second decks.
        // But wait: the problem states that a < b < c. So target must be >=b, otherwise (target -b) would be negative, which is impossible because we can't take cards from the second deck.
        if (c < target) {
            cout << "NO\n";
            continue;
        }
        long long k = c - target;
        // The required is (target -a) + (target -b) = k
        // Also, target -a >=0 and target -b >=0 because we can't reduce a or b.
        if ((target - a) + (target - b) == k && (target >= a) && (target >= b)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    solve();
    return 0;
}
