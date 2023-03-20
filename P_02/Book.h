//
// Created by pf on 23/02/23.
//

#ifndef P_02_BOOK_H
#define P_02_BOOK_H

#include <string>
#include <vector>

using namespace std;

typedef enum {
    Normal,
    Conditional
} loanType_t;


class Book {
private:
    static int bookcount;
    int id;
    string title;
    loanType_t loanType;

public:
    Book();
    Book(const string &newTitle, loanType_t Type);

    void setTitle(string);
    void setLoanType (loanType_t);
    void print();
};

#endif //P_02_BOOK_H
