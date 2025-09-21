#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v{1, 2, 2, 3, 4, 4, 5, 5};

    sort(v.begin(), v.end());                 
    auto it = unique(v.begin(), v.end());     
    v.erase(it, v.end());                     

    cout << "Unique vector: ";
    for (int n : v) {
        cout << n << " ";
    }
    return 0;
}
