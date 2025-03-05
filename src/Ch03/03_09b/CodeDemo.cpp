// Learning C++ 
// Exercise 03_09
// Vectors, by Eduardo Corpeño 
#include <vector>
#include <iostream>
#include <string>

int main(){
    std::vector<int> primes;

    primes.push_back(2);
    primes.push_back(5);
    primes.push_back(21);
    primes.push_back(27);
    primes.push_back(30);

    std::cout << "The vecor has " << primes.size() << " elements" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
