#include "studentinfo.h"
#include<iostream>

studentinfo::studentinfo()
{
    //ctor
}

studentinfo::studentinfo(std::string i, std::string n, double c) {
    studentID = i;
    name = n;
    cgpa = c;
}

void studentinfo::print() {
    std::cout << "Name: " << name << "\nID: " << studentID << "\nCGPA: " << cgpa << std::endl << std::endl;
}

bool studentinfo::operator!=(studentinfo a) {
    return studentID != a.studentID;
}

bool studentinfo::operator==(studentinfo a) {
    return studentID == a.studentID;
}

studentinfo::~studentinfo()
{
    //dtor
}
