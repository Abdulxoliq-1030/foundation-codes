#include <iostream>

using namespace std;

int main()
{
    /*
 //1-misol
 int a;
 cin >> a;
 if(a > 0) {
   a++;
   cout << a << endl;
 } else {
  cout << a << endl;
 }
*/

/*
//2-misol
int a;
cin >> a;
if(a > 0) {
    a++;
    cout << a << endl;
} else {
   a -= 2;
   cout << a << endl;
}
*/
/*
//3-misol
int a;
cin >> a;
if(a > 0){
    a++;
} else if(a < 0){
   a -= 2;
} else if(a == 0){
  a = 10;
}
cout << a << endl;
*/

/*
//4-misol
int a,b,c;
cin >> a >> b >> c;
if((a > 0) && (b > 0) && (c > 0)) {
    cout << " Hammasi musbat son " << a << " " << b << " " << c << endl;
} else if((a > 0) && (b < 0) && (c < 0)) {
   cout << "Musbat sonlar " << a << endl;
} else if((b > 0) && (a < 0) && (c < 0)) {
  cout << "Musbat sonlar " << b << endl;
} else if((c > 0) && (a < 0) && (b < 0)) {
  cout << "Musbat sonlar " << c << endl;
} else if((a > 0) && (b > 0) && (c < 0)) {
  cout << "Musbat sonlar " << a << " " << b << endl;
} else if((a > 0) && (b < 0) && (c > 0)) {
  cout << "Musbat sonlar " << a << " " << c << endl;
} else if((a < 0) && (b > 0) && (c > 0)) {
  cout << "Musbat sonlar " << b << " " << c << endl;
} else {
  cout << "Hammasi manfiy sonlar " << a << " " << b << " " << c << endl;
}
*/

/*


//5-misol
int a,b,c;
cin >> a >> b >> c;
if((a > 0) && (b > 0) && (c > 0)) {
    cout << " Hammasi musbat son " << a << " " << b << " " << c << endl;
} else if((a > 0) && (b < 0) && (c < 0)) {
   cout << "Musbat sonlar " << a << endl;
   cout << "Manfiy sonlar " << b << " " << c << endl;
} else if((b > 0) && (a < 0) && (c < 0)) {
  cout << "Musbat sonlar " << b << endl;
  cout << "Manfiy sonlar " << a << " " << c << endl;
} else if((c > 0) && (a < 0) && (b < 0)) {
  cout << "Musbat sonlar " << c << endl;
  cout << "Manfiy sonlar " << a << " " << b << endl;
} else if((a > 0) && (b > 0) && (c < 0)) {
  cout << "Musbat sonlar " << a << " " << b << endl;
  cout << "Manfiy son " << c << endl;
} else if((a > 0) && (b < 0) && (c > 0)) {
  cout << "Musbat sonlar " << a << " " << c << endl;
  cout << "Manfiy son " << b << endl;
} else if((a < 0) && (b > 0) && (c > 0)) {
  cout << "Musbat sonlar " << b << " " << c << endl;
  cout << "Manfiy son " << a << endl;
} else {
  cout << "Hammasi manfiy sonlar " << a << " " << b << " " << c << endl;
}

*/


/*
//6-misol
int a,b;
cout << "Son kiriting " << endl;
cin >> a >> b;
if(a > b) {
    cout << "Kattasi " << a << endl;
} else if(b > a) {
   cout << "Kattasi " <<  b << endl;
}
*/


/*
//7-misol
int a,b;
cin >> a >> b;
if(a < b) {
    cout << "B raqam ikkinchi o'rinda " << endl;
} else {
   cout << "A raqam ikkinchi o'rinda " << endl;
}
*/

/*
//8-misol
int a,b;
cin >> a >> b;
if(a > b) {
    cout << "Kattasi " << a << " Kichigi " << b << endl;
} else {
   cout << "Kattasi " << b << " Kichigi " << a << endl;
}
*/


    return 0;
}
