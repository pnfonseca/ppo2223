//
// Created by pf on 27/02/23.
//

#include "Library.h"
#include <iostream>

using namespace std;

int Library::addUser(User newUser) {
    int result = 0;

    for (auto it = listOfUsers.begin(); it != listOfUsers.end(); it++) {
        if (it->getNMec() == newUser.getNMec()) {
            // Found a user with the same NMec
            result = -1;
        }
    }

    if(result == 0) {
        listOfUsers.push_back(newUser);
    }

    return result;
}

int Library::removeUser(User oldUser) {
    int result = -1;

    vector<User>::iterator it;
    for (it = listOfUsers.begin(); it != listOfUsers.end(); it++) {
        if (it->getNMec() == oldUser.getNMec()) {
            // Found the user
            result = 0;
            break;
        }
    }

    if(result == 0){
        listOfUsers.erase(it);
    }
    return result;
}

void Library::listUsers() {

    cout << "List of users:" << endl;
    for(auto user : listOfUsers){
        user.print();
    }

}

void Library::addBook(Book newBook) {

    listOfBooks.push_back(newBook);

}

void Library::listBooks() {
    for(auto b : listOfBooks){
        b.print();
    }
}


