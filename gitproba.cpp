#include <iostream>
using namespace std;

int fib(int n){ 
    int a, b, sum, count; 
    a = count = sum = 0; 
    b = 1; 
    while (count < n) { 
        sum = a + b; 
        a = b; 
        b = sum; 
        count++; 
    } 
    return a; 
}

int main(){
	cout << "Hello, World!" << endl;
	int n;
	cout << "n="; cin >> n;
	cout << fib(n);
}
