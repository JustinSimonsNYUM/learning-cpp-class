// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

int main(){
    std::vector<cow> cattle;

    cattle.push_back(cow("betty", 7, cow_purpose::meat));
    cattle.push_back(cow("libby", 1, cow_purpose::pet));
    cattle.push_back(cow("etsy", 1, cow_purpose::pet));
    cattle.push_back(cow("amazon", 1, cow_purpose::pet));
    cattle.push_back(cow("betsy", 3, cow_purpose::hide));

    std::cout << "the first cow is " << cattle.begin()->get_name() << std::endl;
    std::cout << "the last cow is " << prev(cattle.end(), 2)->get_name() << std::endl;
    std::cout << "the next to last cow is " << (cattle.end()-1)->get_name() << std::endl;
    std::cout << "the cow at index 1 is " << cattle[1].get_name() << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
