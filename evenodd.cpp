#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v{1, 2, 3, 4, 5, 6, 7};
    vector<int> even, odd;

    for (int n : v) {
        if (n % 2 == 0)
            even.push_back(n);
        else
            odd.push_back(n);
    }

    cout << "Even numbers: ";
    for (int n : even) cout << n << " ";
    cout << endl;

    cout << "Odd numbers: ";
    for (int n : odd) cout << n << " ";
    return 0;
}
