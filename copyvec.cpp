#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1{10, 20, 30};

    vector<int> v2 = v1;

    cout << "Copied vector: ";
    for (int n : v2) {
        cout << n << " ";
    }
    return 0;
}
