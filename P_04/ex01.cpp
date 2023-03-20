#include <iostream>
#include "Time.h"

using namespace std;

int main() {
    std::cout << "Ensaio de \"Operator Overload\"" << std::endl;

    Time t1, t3(0, 1, 0);
    Time t2(0, 0, 59);

    std::cout << "Add" << std::endl;

    t1.show();
    t2.show();
    t3.show();
    t1 = t2 + t3;
    t1.show();

    std::cout << "Subtract" << std::endl;

    t1 = Time();
    t2 = Time(2, 0, 59);

    t1.show();
    t2.show();
    t3.show();
    t1 = t2 - t3;
    t1.show();

    if (t1 == t2) {
        cout << "Equal" << endl;
    } else {
        cout << "Different" << endl;
    }

    cout << "Increment" << endl << "Before:";
    t1.show();
    ++t1;
    cout << "After:";
    t1.show();

    cout << "Hora em t1:" << t1;

    return 0;
}
