#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//sonlarni random tarzida chiqarish
int main()
{
    srand(time(0));
    cout << time(0) << endl;
  for (int i = 1; i < 100; i++)

cout << 1 + (rand() % 100) << endl;
    return 0;
}
