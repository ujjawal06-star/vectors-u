#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec{1, 2, 3, 4, 5};

    int i = 0, j = vec.size() - 1;
    while (i < j) {
        swap(vec[i], vec[j]);
        i++;
        j--;
    }

    for (int n : vec) {
        cout << n << " ";
    }
    return 0;
}
