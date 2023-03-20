//
// Created by pf on 21/02/23.
//
#include <iostream>
#include "User.h"
#include "Book.h"

using namespace std;


int main(){

  cout << "List of users: " << endl;
  ListOfUsers.list();

  User novo;

  novo.setName("António Faria");
  novo.setNMec(423);
  novo.setCourse(LEEC);

  ListOfUsers.enroll(novo);

  novo.setName("Joaquim Arnaldo");
  novo.setNMec(424);
  novo.setCourse(LEAI);

  ListOfUsers.enroll(novo);


  cout << "Após insert " << endl;
  ListOfUsers.list();

  // Remove an existing user
  User velho = novo;

  cout << ListOfUsers.remove(velho);

  cout << "Após remove" << endl;
  ListOfUsers.list();

  // Try to remove an inexisting user
  velho.setNMec(300);
  cout << ListOfUsers.remove(velho);
  cout << "Após remove" << endl;
  ListOfUsers.list();


  return 0;
}