//
// Created by pf on 28/02/23.
//
// Write a template function Largest(a,b)that allows comparing two variable instances
// of the same type and returns the largest.
#include <iostream>

using namespace std;

template<typename T1,typename T2>
auto Largest(T1,T2);



int main()
{
    double x;
    int n;

    cout << "Introduzir um valor real e um inteiro: ";
    cin >> x;
    cin >> n;

    cout << "O maior entre " << n << " e " << x << " é: " << Largest(n,x) << endl;
}
template<typename T1, typename T2>
auto Largest(T1 a,T2 b)
{
#if 0
    return a > b ? a : b;
#else
    if(a>b){
        return a;
    }
    else{
        return b;
    }
#endif
}

