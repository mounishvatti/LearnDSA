#include <iostream>

// function template arguments

template <class T>
T multiply (T x, T y){
    T result;
    result = x*y;
    return result;
}

// Non-type template arguments

template <class T, int N>
T fixed_multiply (T val)
{
  return val * N;
}

int main(){

    int a=2, b=4, k;
    double i=2.0, j=4.2, h;

    k = multiply<int>(a,b);
    h = multiply<double>(i,j);

    std::cout << k << "\n";
    std::cout << h << "\n";

    std::cout << fixed_multiply<int,2>(10) << '\n';
    std::cout << fixed_multiply<int,3>(10) << '\n';
}
