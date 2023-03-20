//
// Created by pf on 27/02/23.
//

#include <iostream>
#include "Library.h"

int main(){
    cout << "Library" << endl;

    Library myLibrary;

    myLibrary.listUsers();
    myLibrary.addUser(User("António", LEAI, 101));
    myLibrary.listUsers();
    myLibrary.addUser(User("Bernardo", LEEC, 102));
    // Next addition should fail...
    myLibrary.addUser(User("Carolina", LEAI, 104));
    myLibrary.listUsers();

    if(myLibrary.removeUser(User("Carolina", LEAI, 104)) ==-1){
        cout << "Erro a remover utilizador" << endl;
    }

    myLibrary.listUsers();


    myLibrary.addBook(Book("How to kill a mocking bird",Normal));
    


}