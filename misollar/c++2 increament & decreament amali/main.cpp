#include <iostream>

using namespace std;

int main()
{
   //pre & post inc/dec

   /*
   int a = 5;
   a++; //increament
   a = a + 2;
   a--;//decreament
   cout << a << endl;
   */

   /*
   //post bunda avval qiymat elon  qilinadi va amal bajariladi
   int a = 5;
   cout << a++ << endl;
   cout << a << endl;
*/

/*
   //pre bunda avval amal bajariladi keyin qiymat elon qilinadi
  int a = 5;
  cout << ++a << endl;
  cout << a << endl;
*/

/*
int x = 6, y = 12;

x = x * (1 + y);//bu murakkab misollarda yoziladi
cout << x << endl;
x *= (1 + y); // bu ham huddi tepadagidek
//x = x * y;
//x *= y;
//ikkalasi bir xil qiymat qaytaradi bittasi osonroq usul
cout << x << endl;
*/

/*
int a,b;
cin >> a >> b;
 a++;
 a *= (3 + b);
cout << a << endl;
*/

int a,b;
cin >> a >> b;
--a;
a += (2 + b);
cout << a << endl;

    return 0;
}
