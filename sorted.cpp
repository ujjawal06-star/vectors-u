#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v{1, 2, 3, 5, 4};

    if (is_sorted(v.begin(), v.end()))
        cout << "Vector is sorted" << endl;
    else
        cout << "Vector is not sorted" << endl;

    return 0;
}
