#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v{10, 50, 30, 20, 40};
    int k = 3;

    sort(v.begin(), v.end(), greater<int>());

    if (k <= v.size())
        cout << k << "th maximum element = " << v[k - 1] << endl;
    else
        cout << "k is larger than vector size" << endl;

    return 0;
}
