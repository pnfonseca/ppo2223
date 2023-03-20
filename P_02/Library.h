//
// Created by pf on 27/02/23.
//

#ifndef EX01_LIBRARY_H
#define EX01_LIBRARY_H

#include <vector>
#include "User.h"
#include "Book.h"

class Library {
private:
    vector<Book> listOfBooks;
    vector<User> listOfUsers;

public:
    int addUser(User newUser);
    int removeUser(User oldUser);
    void listUsers();

    void addBook(Book newBook);
    void listBooks();
};


#endif //EX01_LIBRARY_H
