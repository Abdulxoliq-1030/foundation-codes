#include <iostream>

using namespace std;

int min(int a,int b){
 if(a < b)
    return a;
   else
   return b;
}

int max(int a,int ) {
 if(a > b)
    return a;
   else
   return b;

}

int main()
{
    int a,b;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    cout << "Min: " << min(a,b) << endl;
    cout << "Max: " << max(a,b) << endl;


































    /*
int min,max,n,number;

cout << "Son kiriting = "; cin >> n; //sonlar miqdori kerak
cout << "1-son: "; cin >> number;
min = number; max = number;


for(int i = 0; i < n-1; i++) {
cout << i + 2 << "-son: ";cin >> number;
if(number < min)
        min = number;
if(number > max)
    max = number;
}

cout << "Min: " << min << endl;
cout << "Max: " << max << endl;
*/

/*
int min,max,n,raqam;
cout << "Raqam kiriting = "<< endl;
cin >> n;
cout << "1-son: "; cin >> raqam;
min = raqam; max = raqam;

for(int i = 0; i < n-1; i++) {
    cout << i + 2 << "-son ";cin >> raqam;

    if(raqam < min)
        min = raqam;
    if(raqam > max)
        max = raqam;
}
cout << "Eng katta raqam " << max << endl;
cout << "Eng kichik raqam " << min << endl;
*/


    return 0;
}
