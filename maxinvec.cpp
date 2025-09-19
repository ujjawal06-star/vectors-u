#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v{12, 45, 23, 89, 34};

    int mx = *max_element(v.begin(), v.end());

    cout << "Maximum element = " << mx << endl;
    return 0;
}
