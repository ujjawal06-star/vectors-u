#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> v{10, 15, 3, 7};
    int target = 17;

    unordered_set<int> s;
    bool found = false;

    for (int n : v) {
        if (s.count(target - n)) {
            cout << "Pair found: " << n << " + " << target - n << " = " << target << endl;
            found = true;
            break;
        }
        s.insert(n);
    }

    if (!found) cout << "No pair found!" << endl;
    return 0;
}
