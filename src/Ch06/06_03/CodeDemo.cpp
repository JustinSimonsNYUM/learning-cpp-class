// Learning C++ 
// Challenge 06_03
// Upgrade to work with files, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"
#include <fstream>

void initialize(StudentRecords&);
void addNewStudent();

int main(){
    std::ofstream outFile;
    int id;
    StudentRecords SR;
    
    initialize(SR);
    SR.report_file(outFile);
    // std::cout << "Welcome to the GPA program!" << std::endl;
    // // bool stop = false;
    // while (true){
    //     std::cout << "Enter a student ID: " << std::flush;
    //     std::cin >> id;
    //     if (id == -1){
    //         std::cout << std::endl << std::endl;
    //         break;
    //     }
    //     SR.report_card(id);
        
    //     std::cout << std::endl << std::endl << "Type -1 to close application" << std::endl;
    // }
    return (0);
}

void initialize(StudentRecords& srec){
    // addNewStudent();
    std::ifstream inFile;
    std::string fileStr;

    inFile.open("students.txt");
    if (inFile.fail()){
        std::cout << std::endl << "failed to open file students" << std::endl;
    }
    else{
        while(!inFile.eof()){
            getline(inFile, fileStr);
            int id = stoi(fileStr);
            getline(inFile, fileStr);
            std::string name = fileStr;
            srec.add_student(id, name);
        }
        inFile.close();
    }

    inFile.open("courses.txt", std::ios::app);
    if (inFile.fail()){
        std::cout << std::endl << "failed to open file courses" << std::endl;
    }
    else{
        while(!inFile.eof()){
            getline(inFile, fileStr);
            int id = stoi(fileStr);
            getline(inFile, fileStr);
            std::string course_name = fileStr;
            getline(inFile, fileStr);
            int credits = stoi(fileStr);
            srec.add_course(id, course_name, credits);
        }
        inFile.close();
    }


    inFile.open("grades.txt", std::ios::app);
    if (inFile.fail()){
        std::cout << std::endl << "failed to open file courses" << std::endl;
    }
    else{
        while(!inFile.eof()){
            getline(inFile, fileStr);
            int sid = stoi(fileStr);
            getline(inFile, fileStr);
            int cid = stoi(fileStr);
            getline(inFile, fileStr);
            char grade = fileStr[0];
            srec.add_grade(sid, cid, grade);
        }
        inFile.close();
    }
}

void addNewStudent(){
    std::ofstream outFile;

    outFile.open("students.txt", std::ios::app);
    if (outFile.fail()){
        std::cout << std::endl << "failed to open file students" << std::endl;
    }
    else{
        outFile << std::endl;
        outFile << "3" << std::endl;
        outFile << "John Appleseed";
        outFile.close();
        std::cout << "John added" << std::endl;
    }

    outFile.open("courses.txt", std::ios::app);
    if (outFile.fail()){
        std::cout << std::endl << "failed to open file courses" << std::endl;
    }
    else{
        outFile << std::endl;
        outFile << "5" << std::endl;
        outFile << "Science" << std::endl;
        outFile << "5";
        outFile.close();
        std::cout << "Science added" << std::endl;
    }

    outFile.open("grades.txt", std::ios::app);
    if (outFile.fail()){
        std::cout << std::endl << "failed to open file courses" << std::endl;
    }
    else{
        outFile << std::endl;
        outFile << "3" << std::endl;
        outFile << "1" << std::endl;
        outFile << "A" << std::endl;
        outFile << "3" << std::endl;
        outFile << "3" << std::endl;
        outFile << "B" << std::endl;
        outFile << "3" << std::endl;
        outFile << "4" << std::endl;
        outFile << "C" << std::endl;
        outFile << "3" << std::endl;
        outFile << "5" << std::endl;
        outFile << "B";
        outFile.close();
        std::cout << "Grades added" << std::endl;
    }
}
