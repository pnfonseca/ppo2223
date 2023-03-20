//
// Created by pf on 14/02/23.
//
#include <iomanip>
#include <iostream>
#include "Time.h"

using namespace std;

Time::Time() : hour(0), min(0), sec(0) {

}

Time::Time(unsigned int nhour, unsigned int nmin, unsigned int nsec) : hour(nhour), min(nmin), sec(nsec) {

}

Time::~Time() {

}

unsigned int Time::getHour() {
    return hour;
}

unsigned int Time::getMin() {
    return 0;
}

unsigned int Time::getSec() {
    return 0;
}


int Time::setHour(int) {
    return 0;
}

int Time::setMin(int) {
    return 0;
}

int Time::setSec(int) {
    return 0;
}

void Time::show() {

    cout << setw(2) << setfill('0') << hour << ":"
         << setw(2) << setfill('0') << min << ":"
         << setw(2) << setfill('0') << sec << endl;
}

Time Time::operator+(const Time &t) {

    hour += t.hour;
    min += t.min;
    sec += t.sec;
    if (sec >= 60) {
        sec -= 60;
        min++;
    }
    if (min >= 60) {
        min -= 60;
        hour++;
    }
    return Time(hour, min, sec);
}

Time Time::operator-(const Time &t) {

    // Temporary storage of type (signed) int to
    // allow for negative values!
    int xhour,      // Temp storage for hours
    xmin,       // minutes and
    xsec;       // seconds

    // Compute the time diference
    xhour = hour - t.hour;
    xmin = min - t.min;
    xsec = sec - t.sec;

    // Check if values are negative
    if (xsec < 0) {
        xsec += 60;
        xmin--;
    }
    if (xmin < 0) {
        xmin += 60;
        xhour--;
    }

    return Time(xhour, xmin, xsec);
}

bool Time::operator==(const Time &t) {
    if (hour == t.hour && min == t.min && sec == t.sec) {
        return true;
    } else {
        return false;
    }
}

Time Time::operator++() {
    sec++;
    if (sec >= 60) {
        sec -= 60;
        min++;
    }
    if (min >= 60) {
        min -= 60;
        hour++;
    }
    return Time(hour, min, sec);
}


ostream &operator<<(ostream &out, const Time &t) {
    out << setw(2) << setfill('0') << t.hour << ":"
        << setw(2) << setfill('0') << t.min << ":"
        << setw(2) << setfill('0') << t.sec;
    return out;
}



