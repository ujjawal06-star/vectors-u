#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v{7, 10, 4, 3, 20, 15};
    int k = 3;

    sort(v.begin(), v.end());  
    cout << k << "-th smallest element = " << v[k - 1] << endl;
    return 0;
}
