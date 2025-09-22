#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v{12, 45, 23, 89, 34};

    sort(v.begin(), v.end());  // ascending sort
    int secondLargest = v[v.size() - 2];  

    cout << "Second largest element = " << secondLargest << endl;
    return 0;
}
