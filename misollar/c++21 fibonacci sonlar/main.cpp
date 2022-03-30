//Fibonacci sonlar
// qanday sonlar fibonacci sonlar deyiladi desak ozidan oldingi ikkita son yig'indisi
//fibonacci sonlar deyiladi.
//bunday ketma ketlikda yoziladi 0,1,1,2,3,5,8,13,21,34,56,90
#include <iostream>
using namespace std;

int fib (int n) {
if (n <= 0)
    return 0;
if(n <= 2)
    return 1;
else
    return fib(n - 1) + fib(n - 2);

}

int main()
{
    int n;
    cout << "n = "; cin >> n;
    for(int i = 0; i <= n; i++){
        cout << fib(i) << " ";
    }

  //cout << fib(6) << endl;

    return 0;
}
