#include <iostream>
using namespace std;

long fibonacci(long);

long fibonacci(long number){
    if((number == 0) || (number == 1))
        return number;
    else   
        return fibonacci(number - 1) + fibonacci(number - 2);
} // function prototype

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n-1);
    return 0;

    }
// recursive function fibonacci
