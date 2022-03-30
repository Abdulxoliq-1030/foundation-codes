#include <iostream>

using namespace std;

int min (int a, int b) {

if(a < b) {
    return a;
} else {
   return b;
}
}

int max (int a, int b) {

if(a > b)
    return a;
else
    return b;

}

int main()
{
int n,m;
cout << "n = ";cin >> n;
cout << "m = ";cin >> m;


cout << "Min: " << min(n,m) << endl;
cout << "Max: " << max(n,m) << endl;
    return 0;
}
