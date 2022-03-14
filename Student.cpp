/* Student.cpp - Function definitions for Student class, child of PersonAtMCC
 * Author:     <your name>
 * Module:     7
 * Project:    Lab, Part 1
 */

#include "Student.h"
#include <iostream>
using namespace std ;

/**** WRITE THE MISSING CONSTRUCTORS, USE SETTERS FOR PARENT,
      ASSIGNMENT FOR CHILD CLASS MEMBERS ****/
Student::Student(long id, string name, string address, string phone, string major, int creditsReceived, bool appliedToFourYear, bool isVeteran) {
    setId(id);
    setName(name);
    setAddress(address);
    setPhone(phone);
    this->major = major;
    this->credits_received = creditsReceived;
    this->applied_to_4_year = appliedToFourYear;
    this->is_veteran = isVeteran;
}


// Getters for this class only
string Student::getMajor() {
    return major ;
}

int Student::getCreditsReceived() {
    return credits_received ;
}

bool Student::getAppliedTo4Year() {
    return applied_to_4_year ;
}

bool Student::getIsVeteran() {
    return is_veteran ;
}

// Setters
void Student::setMajor(string new_major) {
    major = new_major ;
}

void Student::setCreditsReceived(int new_credits_received) {
    credits_received = new_credits_received ;
}

void Student::setAppliedTo4Year(bool new_has_applied) {
    applied_to_4_year = new_has_applied ;
}

void Student::setIsVeteran(bool new_is_veteran) {
    is_veteran = new_is_veteran ;
}

void Student::showInfo() {

    cout << "ID: " << getId() << endl ;

    /**** COMPLETE THE OUTPUT ****/
}


