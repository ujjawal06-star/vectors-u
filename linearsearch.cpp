#include<iostream>
#include<vector>
using namespace std;

void singleNum(vector<int>& nums, int val){
    for(int n : nums){
        if(n == val){
            cout << "number found" << endl;
            return;
        }
    }
    cout << "number does not found" << endl;
}

int main(){
    vector<int> vec{1,3,2,5,4};
    singleNum(vec, 5);
    return 0;
}
