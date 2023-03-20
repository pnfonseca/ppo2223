//
// Created by PedroFonseca on 03/03/2023.
//
template<typename T1, typename T2>
auto Largest(T1 a,T2 b)
{
#if 1
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