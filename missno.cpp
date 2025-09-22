#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    vector<int> v{1, 2, 3, 5};
    int n = 5;

    int totalSum = n * (n + 1) / 2;
    int vectorSum = accumulate(v.begin(), v.end(), 0);

    cout << "Missing number = " << totalSum - vectorSum << endl;
    return 0;
}
