#include <iostream>
using namespace std;

int fib(int n){ 
     if ( n == 1 || n == 2) return (n -1);  
    return fib(n-1) + fib(n-2);  
}

int main(){
	cout << "Hello, World!" << endl;
	int n;
	cout << "n="; cin >> n;
	for (int i = 1; i <= n; i++){
        cout << fib(i) << endl;
}
}