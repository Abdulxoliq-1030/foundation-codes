
/*
//Oddiy funksiyada qo'shish
#include <iostream>
using namespace std;

int qoshish(int x,int y)
{
    return x + y;

}
int main(){

int a,b;
cin >> a >> b;
int c = qoshish(a,b);
cout << c << endl;
return 0;
}
*/



/*
//Funksiya overloading ishlatilishi
#include <iostream>
using namespace std;

int qoshish(int x,int y)
{
    return x + y;
}

float qoshish(float x,float y)
{
    return x + y;
}
int main(){
float a,b;
cin >> a >> b;
cout << qoshish(a,b) << endl;
cout << endl;

int x,y;
cin >> x >> y;
cout << qoshish(x,y);

return 0;
}
*/


/*
//Funksiya overloading
#include <iostream>
using namespace std;

void chiqar (int x)
{
for (int i = 1; i <= x; i++)
{
    cout << i << " " << i * i << endl;
}

}


int main(){

int n;
cin >> n;
 chiqar(n);
 chiqar(n-1);

return 0;
}
*/



/*
//Funksiyada katta sonlarni topish
#include <iostream>
using namespace std;

float katta_son(float x, float y,float z)
{
    float k = x;
    if(k < y)
    {
        k = y;
    }
    if(k < z)
    {
        k = z;
    }
    return k;
}

int main()
{

float a,b,c;
cout << "Sonlarni kiriting " << endl;
cin >> a >> b >> c;

cout << "Eng katta son = " <<  katta_son(a,b,c);


return 0;
}
*/

/*
//1-misol
#include <iostream>
#include <cmath>
using namespace std;

float add(float a,float b)
{

  if(a > b){
    return a;
  } else {
   return b;
  }
}

float add(float a,float b, float c)
{
    float k;

    k = (a + b + c)/ 2;
    return k;
}

string add(string a,string b)
{
    string k = a +" "+ b;

    return k;
}


int main()
{

float a,b,c;
cout << "Sonlarni kiriting " << endl;
cin >> a >> b;
cout << " Ikkita sonning eng kattasi = " << add(a,b) << endl;
cin >> c;
cout << endl;
cout << " Uchta sonning o'rta arifmetigi = " <<  add(a,b,c) << endl;

cout << endl;
string x,y;
cout << "Satrlarni kiriting " << endl;
cin >> x >> y;
cout << add(x,y);

return 0;
}
*/



/*
//2-misol

//Uchta va ikkita sonning eng kattasini topish

#include <iostream>
using namespace std;

int findMax(int a,int b)
{
    if(a > b)
    {
        return a;
    } else {
      return b;
    }

}

int findMax(int a,int b,int c)
{
float k = a;
    if(k < b)
    {
        k = b;
    }
    if(k < c)
    {
        k = c;
    }
    return k;


}
int main()
{

    int a,b,c;
    cout << "Sonlarni kiriting : " << endl;
    cin >> a >> b >> c;
    cout << " Ikkita sonning eng kattasi : " << findMax(a,b) << endl;
    cout << "Uchta sonning eng kattasi : " << findMax(a,b,c) << endl;


    return 0;
}
*/



/*
//3-misol
#include <iostream>
using namespace std;

int calculate(int a,int b)
{
    int k;
    k = a + b;
    return k;

}

int calculate(int a,int b,int c)
{
    int k;
    k = a * b * c;
    return k;

}

int main()
{

    int a,b,c;
    cout << "Sonlarni kiriting : " << endl;
    cin >> a >> b >> c;
    cout << "Ikkita sonning yig'indisi : " << calculate(a,b) << endl;
    cout << endl;
    cout << "Uchta sonning ko'paytmasi : " << calculate(a,b,c) << endl;

    return 0;
}
*/



/*
//4-misol
//kiritilgan songacha raqamlar yig'indisini hisoblash
#include <iostream>
using namespace std;

int natural_son(int n)
{

    if(n != 0)
    {
        return n + natural_son(n - 1);
    } else
    {
     return n;
    }


}
int main()
{
  int sum;
  cout << "Musbat son kiriting " << endl;
  cin >> sum;

  cout << natural_son(sum);
    return 0;
}
*/


/*
//5-misol
//kiritilgan sonning raqamar yig'inisini chiqarish
#include <iostream>
using namespace std;

int sum(int n)
{

    if(n == 0)
    {
        return 0;
    } else
    {
        return (n % 10 + sum(n / 10));
    }
}

int main()
{
   int k;
   cout << "Raqam kiriting " << endl;
   cin >> k;

   cout << "Kiritilgan raqamlarning yig'indisi = " << sum(k) << endl;


    return 0;
}
*/



/*
//6-misol

//recursiv funksiya bilan fibonacci sonlarni chiqarish

#include <iostream>
using namespace std;

int fib(int n)
{
    if(n <= 1)
    {
        return n;
    } else
    {
       return fib(n - 1) + fib(n - 2);
    }
}


int main()
{
    int k;
    cout << "Sonni kiriting = ";
    cin >> k;
    cout << endl;
    cout << "Kiritilgan sonning fibonaccisi = " <<  fib(k) << endl;



    return 0;
}
*/




/*
//Rekursiv funksiya n songacha factorialni topish
#include <iostream>

using namespace std;

int fact(int n)
{
    if(n == 1)
    {
        return 1;
    } else
    {
        return n * fact(n -1);
    }

}


int main()
{
    int k;
    cout << "N sonini kiriting " << endl;
    cin >> k;

    cout << fact(k) << endl;



    return 0;
}
*/
