#include <iostream>
#include <vector>
using namespace std;
void subarrprint(vector<int>& vec){
    for(int i=0; i<vec.size(); i++){
        for(int j=0; j<vec.size()-i; j++){
            for(int k=j; k<=j;k++){
                cout<<vec[k];
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
int main() {
    vector<int> v{1, 2, 3, 4};
    subarrprint(v);
    return 0;
}
