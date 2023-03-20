//
// Created by pf on 20/02/23.
//

#ifndef OPERATOROVERLOAD_TIME_H
#define OPERATOROVERLOAD_TIME_H

#include <iostream>
#include <iomanip>

using namespace std;

class Time {
private:
    unsigned int hour;
    unsigned int min;
    unsigned int sec;
public:
    Time();

    Time(unsigned int nhour, unsigned int nmin, unsigned int nsec);

    ~Time();

    unsigned int getHour();

    unsigned int getMin();

    unsigned int getSec();

    int setHour(int);

    int setMin(int);

    int setSec(int);

    void show();

    Time operator+(const Time &t);

    Time operator-(const Time &t);

    bool operator==(const Time &t);

    Time operator++();
    friend ostream& operator <<(ostream &out, const Time &t);


};



#endif //OPERATOROVERLOAD_TIME_H
