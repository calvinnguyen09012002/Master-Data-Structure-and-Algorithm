#include <iostream>
#include <vector>
#include <limits>

int findSecondLargest(const std::vector<int>& nums){
    int largest = std::numeric_limits<int>::min();
    int secondlargest = std::numeric_limits<int>::min();

    if (nums.size() < 2) {
        return -1;
    }

    for(int num : nums){
        if(num > largest){
            secondlargest = largest;
            largest = num;
        }else if(num > secondlargest && num < largest){
            secondlargest = num;
        }
    }
    return (secondlargest == std::numeric_limits<int>::min()) ? -1 : secondlargest;
}

int main(){
    std::vector<int> nums = {4,3,4};

    int result = findSecondLargest(nums);

    if(result != -1){
        std::cout<<"The second largest value is "<<result<<std::endl;
    }
    else{
        std::cout<<"Array does not contain second largest value"<<std::endl;
    }

    return 0;
}