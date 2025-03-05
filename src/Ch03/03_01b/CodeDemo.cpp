// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class animal_purpose {meat, dairy, hide, pet};

struct cow {
    std::string name;
    int age;
    animal_purpose purpose;
};

int main(){
    cow my_cow;
    my_cow.name = "betsy";
    my_cow.age = 100;
    my_cow.purpose = animal_purpose::hide;
    std::string purpose_string = "";

    switch (my_cow.purpose) {
        case animal_purpose::meat:
            purpose_string = "meat";
            break;
        case animal_purpose::dairy:
            purpose_string = "dairy";
            break;
        case animal_purpose::hide:
            purpose_string = "hide";
            break;
        case animal_purpose::pet:
            purpose_string = "pet";
            break;
    }

    std::cout << "The cow's name is " << my_cow.name << ". It's age is " << my_cow.age << " and it's purpose is " << purpose_string;


    std::cout << std::endl << std::endl;
    return (0);
}
