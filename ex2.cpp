#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateArray(vector<int> &nums, int k){
    if (nums.size() == 0) return;
    if (k == 0) return;

    k = k % nums.size();
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin()+k);
    reverse(nums.begin()+k, nums.end());
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    int k = 2;
    cout<<"Before:"<<endl;
    for(int num : nums){
        cout<< num << ",";
    }
    cout<<endl;
    rotateArray(nums, k);
    cout<<"After:"<<endl;
    for(int num : nums){
        cout<< num << ",";
    }
    cout<<endl;
    return 0;
}