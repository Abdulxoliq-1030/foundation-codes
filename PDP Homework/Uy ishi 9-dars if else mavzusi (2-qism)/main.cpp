#include <iostream>

using namespace std;

int main()
{
    /*
   //9-misol
   int a,b;
   cin >> a >> b;
   if(a < b){
    cout << b << " " << a << endl;
   } else {
    cout << "A soni B dan katta bo'lishi mumkin emas" << endl;
   }

   */

   /*
   //10-misol
   int a,b;
   cin >> a >> b;
   if(a != b) {
    cout << "Yig'indsi " << a + b << endl;
   } else if(a == b) {
    cout << "Nolga tenglashtirildi " << 0 << endl;
   }
   */

   /*
   //11-misol
   int a,b;
   cin >> a >> b;
   if((a != b) && (a > b)){
    cout << "Kattasi " << a << endl;
   } else if ((a != b) && (b > a)) {
    cout << "Kattasi " << b << endl;
   } else if (a == b) {
    cout << "No'lga o'zlashtirildi " << 0 << endl;
   }
   */

   /*
   //12-misol
   int a,b,c;
   cin >> a >> b >> c;
   if ((a == b) && (a == c) && (b == c)){
    cout << "Hammasi teng " << a << " " << b << " " << c << endl;
   } else if((a < b) && (a < c)) {
    cout << "Kichik son " << a << endl;
   } else if((b < a) && (b < c)) {
    cout << "Kichik son " << b << endl;
   } else if ((c < a) && (c < b)) {
    cout << "Kichik son " << c << endl;
   }
   */


   /*
   //13-misol
   int a,b,c;
   cin >> a >> b >> c;
   if((a == b) && (a == c) && (c == b)) {
    cout << "Hammasi teng " << a << " " << b << " " << c << endl;
   } else if((a <= b) && (a >= c)) {
    cout << a << endl;
   } else if ((b <= a) && (b >= c)) {
    cout << b << endl;
   }else if ((c >= a) && (c <= b)) {
    cout << c << endl;
   } else if ((c >= a) && (b <= a)) {
    cout << a << endl;
   } else if ((a >= b) && (b <= c)) {
    cout << c << endl;
   } else if ((a <= b) && (b <= c)) {
    cout << b << endl;
   }
*/


  /*
  //14-misol
  int a,b,c;
  cin >> a >> b >> c;

  if ((a > b) && ((b > c))){
    cout << a << " " << c << endl;
  } else if ((b > a) && (a > c)) {
   cout << b << " " << c << endl;
  } else if ((c > b) && (b > a)) {
   cout << c << " " << a << endl;
  } else if ((a > b) && (b < c)) {
   cout << c << " " << b << endl;
  }
  */


  /*
  //15-misol
  int a,b,c;
  cin >> a >> b >> c;
  if ((a > b) && (b > c)) {
    cout << a + b << endl;
  } else if ((b > a) && (a > c)) {
   cout << b + a << endl;
  } else if ((c > a) && (a > b)) {
   cout << c + a << endl;
  } else if ((c > b) && (b > a)) {
   cout << c + b << endl;
  }else if ((a > c) && (c > b)) {
   cout << a + c << endl;
  }
  */


  /*
  //16-misol
  int a,b,c;
  cin >> a >> b >> c;
  if ((a < b) && (b < c)) {
    cout << "a = " << a * 2<< endl;
    cout << "b = " << b * 2<< endl;
    cout << "c = " << c * 2<< endl;
  } else {
   cout << -a << -b << -c << endl;
  }
*/

  /*
  //17-misol
  int a,b,c;
  cin >> a >> b >> c;
  if ((a < b) && (b < c)) {
   cout << a * 2 << endl;
   cout << b * 2 << endl;
   cout << c * 2 << endl;
  } else if ((a > b) && (b > c)) {
   cout << c * 2 << endl;
   cout << b * 2 << endl;
   cout << a * 2 << endl;
  } else {
    cout << "Sonlar ikkilantirishga mos kelmadi " << endl;
    cout << -a << " " << -b << " " << -c << endl;
  }
  */


   return 0;
}
