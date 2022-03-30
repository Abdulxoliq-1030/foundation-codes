#include <iostream>
#include <cmath>

using namespace std;

int main(){

    /*
    //1-misol
 int a,b;

 cin >> a >> b;

 for(int i = 1; i <= a; i++){

     cout << b << endl;
 }
 */


/*
 //2-misol

 int a,b;
 cout << "Sonlarni kiriting " << endl;
 cin >> a;
 cin >> b;
 cout << endl;
 for(int i = a; i <= b; i++){
     cout << i << endl;
 }
 cout << a << " " << b << endl;
 */

 /*
 //3-misol
 int a,b;
 cout << "Sonlarni kiriting" << endl;
 cin >> a >> b;
 cout << endl;

 for(int i = a; i < b; i++){
     cout << i << "-raqam" << endl;
 }
  cout << "Sonlar nechtaligi : " << (b - a) + 1 << endl;
 */


 /*
 //4-misol
int a;
cin >> a;

for(int i = 1; i <= 10; i++){
    cout << " 1 kg konfet narxi " << a << " = " << i << " Kilosi qancha bo'lishi = " << a * i << "So'm" << endl;
}
*/


/*
//5-misol
int a;
cin >> a;

for(float i = 0.1; i < 1.0; i += 0.1){
    cout << "Konfet narxi " << a << " " << i << " g = " << a * i << " so'm" << endl;
}
*/


/*
//6-misol

int a;
cin >> a;
for(float i = 1.2; i < 2.0; i += 0.2){
    cout << "Konfet narxi " << a << " = " << i << " kg " << a * i << " so'm" << endl;
}

*/

/*
//7-misol
int a,b;

cin >> a >> b;
cout << endl;
for(int i = a; i <= b; i++){
    i + 1;
    cout << i ;
    cout << i + b << endl;

}
*/

/*
//8-misol
int a;
cin >> a;
for(int b= 1; b <= a; b++){
         cout << a << " * " << b << " = ";
    a = a * b;
   cout << a << endl;
}
*/


/*
//9-misol
int a;
cin >> a;
cout << endl;
for(int i = 1; i <= a; i *= 2) {
    cout << i << endl;

}
*/



/*
//10-misol
 int n;
 cout << "Son kiriting " << endl;
 cin >> n;
 cout << endl;
for(int i = 0; i <= n; i++) {
    cout << i << " + " << 1 << " = " << i + 1 << endl;
    cout << endl;
    cout << i << " / " << i << " = " << i / i << endl;
    cout << endl;
    cout << i << endl;

}
*/


/*
//12-misol
int n;
cout << "Son kiriting \n";
cin >> n;
cout << endl;
for(float i = 1.1; i <= n; i += 0.1) {
    cout << n << " * " << i << " = " << n * i << endl;
    cout << n << endl;
}
*/



 /*
 //13-misol
 float s = 2.0;

 for(float i = 1.1; i <= s; i += 0.1){
  i -= 0.1;
  i += 0.1;
  i += i;
    cout << i << endl;
 }
 */

 /*
//15-misol

float a;
cout << "Son kiriting" << endl;
cin >> a;
int n;

cout << "Darajani kiriting " << endl;
cin >> n;

for(int i = 1; i <= n; i++){
    for(int j = i; j <= n; j++){
        cout << pow(a,i) << endl;
    }
}
*/

/*
//16-misol
float a;
cout << "Son kiriting " << endl;
cin >> a;
int n;
cout << "Darajani kiriting" << endl;
cin >> n;

for(int i = 1; i <= n; i++) {
    cout << pow(a,i) << endl;
}
*/

/*
//17-misol

float a;
cout << "Sonni kiriting" << endl;
cin >> a;
int n;
cout << "Darajani kiriting" << endl;
cin >> n;

for(int i = 1; i <= n; i++){
    cout << pow(a,i) + i << endl;
    cout << endl;
}
  */



    return 0;
}
