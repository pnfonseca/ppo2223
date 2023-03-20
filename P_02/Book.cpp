//
// Created by pf on 23/02/23.
//
#include <iostream>
#include "Book.h"


using namespace std;

int Book::bookcount=0;

Book::Book() {
    bookcount++;
    id = 100 + bookcount;
}

Book::Book(const string & newTitle, loanType_t Type) : title(newTitle), loanType(Type)
{
    bookcount++;
    id = 100 + bookcount;
}

void Book::print() {
    cout << id << ": " << title << " - " << loanType << endl;
}

void Book::setTitle(string newTitle) {
    title = newTitle;
}

void Book::setLoanType(loanType_t loan)
{
    loanType = loan;
}

