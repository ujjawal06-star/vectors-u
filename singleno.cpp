#include<iostream>
#include<vector>
using namespace std;
void singleNum(vector<int>& nums){
    int ans=0;
    for(int val:nums){
        ans^=val;
    }
    cout<<"The single number is :- "<<ans<<endl;
}
int main(){
    vector<int> vec{1,2,1,2,4};
    singleNum(vec);
    return 0;
}