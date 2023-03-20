//
// Created by pf on 28/02/23.
//

// Write a program that allows the user to input integer values and stores them into an int
// array. The program asks the user for the number of array elements. Use dynamic memory
// allocation for the array.
// Write a function called MaxIndex() that goes through the array, element by element,
// looking for the largest one. The function takes as arguments the memory address of the
// array and its number of elements, and returns the index of the first occurrence of the largest
// element.
//The program should call this function and display the largest element and its array index.


#include <iostream>

using namespace std;

unsigned int MaxIndex(const int *array, int size);

int main() {
    int nValues;

    // Ask the user for the number of elements
    cout << "How many values?";
    cin >> nValues;

    int *storage = new int[nValues];

    // Enter values
    for (int i = 0; i < nValues; i++) {
        cout << "Value[" << i << "]=";
        cin >> storage[i];
    }

    // Print entered values
    cout << "You have entered: ";
    for (int i = 0; i < nValues; i++) {
        cout << storage[i];
        if (i < nValues - 1) {
            cout << ", ";
        } else {
            cout << endl;
        }
    }

    int maxpos = MaxIndex(storage,nValues);

    cout << "The largest value is " << storage[maxpos] << " and it is stored in position " << maxpos << endl;

}

unsigned int MaxIndex(const int *array, int size){

    unsigned int max_index=0;

    for(int i=0; i<size; i++){
        if(array[i] > array[max_index]){
            max_index = i;
        }
    }

    return max_index;
}