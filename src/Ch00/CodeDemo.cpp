// Learning C++ 
// Exercise 00_03
// Using the exercise files on GitHub, by Eduardo Corpeño 
// added comment

#include <iostream>
#include <thread>
#include <chrono>

void task1(int id) {
    std::cout << "Thread " << id << " started" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "Thread " << id << " finished" << std::endl;
}

int main() {
    int i = 1;
    std::thread thread1(task1, 1);
    std::thread hi(task1, 5);
    // std::thread thread2(task, 2);

    // thread1.join();
    // // thread2.join();

    // task1(1);
    // task1(2);

    std::cout << "Both threads finished" << std::endl;
    return 0;
}
