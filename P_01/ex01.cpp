#include <iostream>
#include "Time.h"

using namespace std; 

int main(){

    cout << "PpO 22-23 - Guião 1 - Ex. 1 " << endl;  

    // Create two objects and one that is not initialized
    Time t1(2,30,0), t2(1,30,0), t3; 

    // The program should add the two
    // initialized objects together, leaving the result in the third time object.
    t3.add(t1);
    t3.add(t2); 
    t3.showTime();

    Time t4(0,0,59), t5(0,0,1), t6;

    t6.add(t4);
    t6.add(t5);
    t4.showTime();
    t5.showTime();
    t6.showTime();

    
    Time t7(0,59,59), t8(0,0,1), t9;

    t9.add(t7);
    t9.add(t8);
    t7.showTime();
    t8.showTime();
    t9.showTime();
}