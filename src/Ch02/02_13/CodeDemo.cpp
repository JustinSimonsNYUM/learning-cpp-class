// Learning C++ 
// Challenge 02_13
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>

int main(){
    int nums[5] = {5, 10, 2, 6, 50};
    float total = 0.0;
    float result;
    for (int num : nums)
    {
        std::cout << num << std::endl;
        total += num;
    }
    result = total/5;

    // Write your code here
    std::cout << "size is " << sizeof(nums) << std::endl;
    std::cout << "The average is " << result  << " and The total is " << total << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
