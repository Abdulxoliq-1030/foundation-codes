#include <iostream>
//Ko'rsatkichlar & Funksiya
using namespace std;
void function(int *var) {
 *var = 70;
}


int main()
{
  int x = 10;
  function(&x);
  cout << x << endl;
    return 0;
}
