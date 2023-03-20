//
// Created by pf on 28/02/23.
//
// Write a template function Largest(a,b)that allows comparing two variable instances
// of the same type and returns the largest.
#include <iostream>
#include <string>

using namespace std;

template<typename T>
T Largest(T,T);

int main()
{
    // double a=3, b=-2;
    string a("pr"), b="Segundo";

    cout << "O maior entre " << a << " e " << b << " é: " << Largest(a,b) << endl;
}

template<typename T>
T Largest(T a,T b)
{
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
