#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v{10, 20, 30, 40, 50};
    int x = 30;

    auto it = find(v.begin(), v.end(), x);
    if (it != v.end())
        cout << "Element " << x << " found at index " << it - v.begin() << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}
