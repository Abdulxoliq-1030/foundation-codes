/*
//1-misol
#include <cmath>
#include <iostream>

using namespace std;
void PowerA3 (int a,int b,int c,float d,float e){
cout << " Butun sonlarni kiriting " << endl;
cin >> a >> b >> c;
cout << "Haqiyqiy sonlarni kiriting " << endl;
cin >> d >> e;
cout << endl;
cout << a << " sonining " << 3 << " darajasi" << " = " <<  pow(a,3) << endl;
cout << b << " sonining " << 3 << " darajasi" << " = " <<  pow(b,3) << endl;
cout << c << " sonining " << 3 << " darajasi" << " = " <<  pow(c,3) << endl;
cout << d << " sonining " << 3 << " darajasi" << " = " <<  pow(d,3) << endl;
cout << e << " sonining " << 3 << " darajasi" << " = " <<  pow(e,3) << endl;
}



int main()
{

 float a,b,c,d,e;

 PowerA3(a,b,c,d,e);

    return 0;
}
*/


/*
//2-misol
#include <cmath>
#include <iostream>

using namespace std;

void PowerA234 (float a,float b,float c,float d){
    cout << "Sonni kiriting" << endl;
    cin >> a;
    cout << endl;
    b = 2;
    c = 3;
    d = 4;
    cout << a << " Sonining " << b << " darajasi" << " = " << pow(a,b) << endl;
    cout << a << " Sonining " << c << " darajasi" << " = " << pow(a,c) << endl;
    cout << a << " Sonining " << d << " darajasi" << " = " << pow(a,d) << endl;
}
int main(){


float a,b,c,d;

PowerA234(a,b,c,d);



return 0;
}
*/



/*
//3-misol
#include <cmath>
#include <iostream>
using namespace std;

void MEAN (float a,float b,float c,float d){
cout << "Sonlarni kiriting" << endl;
cin >> a >> b >> c >> d;
cout << endl;

cout << a << " bilan " << b << " ning" << " o'rta arifmetigi" << " = " << (a + b) / 2 << endl;
cout << a << " bilan " << c << " ning" << " o'rta arifmetigi" << " = " << (a + c) / 2 << endl;
cout << a << " bilan " << d << " ning" << " o'rta arifmetigi" << " = " << (a + d) / 2 << endl;
cout << endl;
cout << endl;
cout << a << " bilan " << b << " ning " << " o'rta geometrigi" << " = " << (a * b) / 2 << endl;
cout << a << " bilan " << c << " ning " << " o'rta geometrigi" << " = " << (a * c) / 2 << endl;
cout << a << " bilan " << d << " ning " << " o'rta geometrigi" << " = " << (a * d) / 2 << endl;

}
int main(){

float a,b,c,d;

MEAN(a,b,c,d);


return 0;
}
*/


/*
//4-misol
#include <iostream>
#include <cmath>
using namespace std;

void Triangle (float a, float b, float c){
cout << " Asoslarni kiriting" << endl;
cin >> a >> b >> c;
float d;
cout << " Tomonni kiriting" << endl;
cin >> d;
cout << " 1- Uchburchak perimetri " << endl;
cout << pow(a,4) << endl;
cout << " 1- Uchburchak yuzasi " << endl;
cout << pow(a,d) << endl;
cout << endl;
cout << " 2- Uchburchak perimetri " << endl;
cout << pow(b,4) << endl;
cout << " 2- Uchburchak yuzasi " << endl;
cout << pow(b,d) << endl;
cout << endl;
cout << " 3- Uchburchak perimetri " << endl;
cout << pow(c,4) << endl;
cout << " 3- Uchburchak yuzasi " << endl;
cout << pow(c,d) << endl;
}

int main() {

float a,b,c;
Triangle(a,b,c);


return 0;
}
*/

/*
//6-misol
#include <iostream>
using namespace std;

void DigitCountSum(int a,int b,int c){
cout << "Raqamlarni kiriting " << endl;
int d;
cin >> a >> b >> c;
d = a + b + c;
cout << " Raqamlar yig'indisi " <<  d << endl;
}


int main(){
int a,b,c;
DigitCountSum(a,b,c);

return 0;
}
*/

/*
//7-misol

#include <iostream>
using namespace std;

int InvertDigit(int num){
int revNum = 0;
while(num > 0){
    revNum = revNum * 10 + num % 10;
    num = num / 10;
}
return revNum;
}

int main(){
    int num;
    cout << "Sonni kiriting" << endl;
    cin >> num;
    cout << InvertDigit(num) << endl;
return 0;
}
*/

/*
//10-misol
#include <iostream>
using namespace std;
void Swap(int &a, int &b) {
   int t = a;
   a = b;
   b = t;
}
int main() {
   int a, b;
  cout << "A ni kiriting" << endl;
   cin >> a;
   cout << "B ni kiriting " << endl;
   cin >> b;
   Swap(a, b);
   cout << "Raqamlarni o'rni almashdi " << a << " " << b << endl;
   return 0;
}
*/


/*
//11-misol
#include <iostream>
#include <cmath>
using namespace std;
int MinMax(int x,int y){
int a,b,c,d;
cout << "Sonlarni kiriting" << endl;
cin >> a >> b >> c >> d;
cout << " Sonlarning eng kattasi "  << max(max(a,b),(c,d)) << endl;


}
int main(){
int sum,x,y;
sum = MinMax(x,y);

return 0;
}
*/

/*
//12-misol
#include <iostream>
using namespace std;


int main(){


return 0;
}
*/
