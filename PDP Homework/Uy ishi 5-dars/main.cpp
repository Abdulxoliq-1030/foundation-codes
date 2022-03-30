#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    //12-misol
   int c,P,a,b;
   cin >> a >> b;
   c = sqrt(a*a+b*b);
   cout << c << endl;
   P = a + b + c;
   cout << P << endl;
   
/*
   //14-misol
   int L,R,S,p = 3.14;
   cin >> R;
   L = 2 * p * R;
   cout << "Aylananing uzunligi " << L << endl;
   S = p * R * R;
   cout << "Aylananing yuzasi " << S << endl;
*/

/*
   //16-misol
 int a,b,c;
 cin >> a >> b;
 c = a + b;
 cout << "Orasidagi masofa : " c / 10 << endl;
*/

/*
   //17-misol
   int a,b,C,D;
   cin >> a >> b;
   C = a + a;
   cout << C / 10 << endl;
   D = a + b;
   cout << C + D  << endl;

*/

/*
//18-misol
   int a,b,C,D;
   cin >> a >> b;
   C = a + a;
   cout << C / 10 << endl;
   D = a + b;
   cout << C * D  << endl;
*/

/*
//19-misol
int a,p,k;
cin >> a;
p = 4 * a;
cout << "Perimetri " << p << endl;
k = a * a;
cout << "Yuzasi " << k << endl;
*/

/*
//23-misol
int a = 20,b = 15,c = 18,d;

a = b;
b = c;
d = a;
cout << "A ning qiymati " << a << endl;
cout << "B ning qiymati " << b << endl;
cout << "C ning qiymati " << d << endl;
*/


//24-misol
int a,b,c,d;
cin >> a >> b >> c;

a = c;
c = b;
b = d;
d = a;
cout << "A ning qiymati " << a << endl;
cout << "B ning qiymati " << b << endl;
cout << "C ning qiymati " << c << endl;


/*
//25-misol
int y,x;
cin >> x;
y =  pow(x,6) - pow(x,2) - 7;
cout << "Qiymati " << y << endl;
*/


/*
//27-misol

int a,b,c,d;

cin >> a;
b = pow(a,2);
cout << "Birinchi natija " << b << endl;


c = pow(a,4);
cout << "Ikkinchi natija " << c << endl;

d = pow(a,8);
cout << "Uchinchi natija " << d << endl;
*/


    return 0;
}
