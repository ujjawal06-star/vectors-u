#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v{1, 2, 3, 4, 5};

    rotate(v.begin(), v.begin() + 2, v.end());

    cout << "Rotated vector: ";
    for (int n : v) {
        cout << n << " ";
    }
    return 0;
}
