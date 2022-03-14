/* PersonAtMCC.cpp - Function definitions for parent class
 * Author:     Chris Merrill
 * Module:     7
 * Project:    Lab, Part 1
 * Description:  Function definitions for parent class - constructor,
 *     getters, setters, and showInfo
 */

#include "PersonAtMCC.h"
#include <iostream>
using namespace std ;

// constructors
PersonAtMCC::PersonAtMCC() {
    PersonAtMCC(0, "no name yet", "no address yet", "no phone yet") ;
}

PersonAtMCC::PersonAtMCC(long long id, string name) {
    PersonAtMCC(id, name, "no address yet", "no phone yet") ;
}

/*** WRITE THE MISSING CONSTRUCTOR USING SETTERS ***/
PersonAtMCC::PersonAtMCC(long long id, string name, string address, string phone) {
    setId(id);
    setName(name);
    setAddress(address);
    setPhone(phone);
}


// getters and setters
long long PersonAtMCC::getId() {
    return id ;
}

string PersonAtMCC::getName() {
    return name ;
}

string PersonAtMCC::getAddress() {
    return address ;
}

string PersonAtMCC::getPhone() {
    return phone ;
}

// Setters
void PersonAtMCC::setId(long long new_id) {
    id = new_id ;
}

void PersonAtMCC::setName(string new_name) {
    name = new_name ;
}

void PersonAtMCC::setAddress(string new_address) {
    address = new_address ;
}

void PersonAtMCC::setPhone(string new_phone) {
    phone = new_phone ;
}

// show person's info on screen
void PersonAtMCC::showInfo() {
    cout << "ID: " << id
         << "  Name: " << name
         << "  Address: " << address << endl
         << "    Phone: " << phone << endl << endl ;
}

