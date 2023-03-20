//
// Created by pf on 21/02/23.
//

#include "User.h"
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

User::User() {
    name = "";
    nMec = 0;
}

void User::setName(string newName) {
    name = newName;
}

void User::setCourse(course_t newCourse) {
    course = newCourse;
}

void User::setNMec(int newNMec) {
    nMec = newNMec;
}

string User::getName() {
    return name;
}

course_t User::getCourse() {
    return course;
}

int User::getNMec() {
    return nMec;
}

User::User(string newName, course_t newCourse, int newNMec) {
    name = newName;
    course = newCourse;
    nMec = newNMec;
}

void User::print() {
    cout << setw(4) << nMec << " - " << name << "(" << course << ")" << endl;
}

