#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v{1, 2, 3, 2, 4, 2, 5};

    v.erase(remove(v.begin(), v.end(), 2), v.end());

    cout << "After removing 2: ";
    for (int n : v) cout << n << " ";
    return 0;
}
