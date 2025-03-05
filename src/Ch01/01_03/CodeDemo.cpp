// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "hello! what's your name?" << std::endl;
    std::cin >> str;
    std::cout << "Hello " << str << ", it's nice to meet you.";

    std::cout << std::endl << std::endl;
    return (0);
}
