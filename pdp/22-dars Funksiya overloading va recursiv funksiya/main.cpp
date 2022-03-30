
/*
//x dan y gacha sonlarni ko'paytmasini chiqarish
#include <iostream>
using namespace std;

void funksiya();
int x,y,z;

int main()
{

    cin >> x;
    cin >> y;
    z = x;
  funksiya();
  cout << x << endl;
}
void funksiya()
{
 if((y!=z)
 {
     z++;
     x = x * z;

     funksiya();

 }
}
*/



/*
//Kiritilgan sonning factorialini chiqarish
#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n > 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{

    int n,result;

    cout << "Musbat son kiriting " ;
    cin >> n;

    result = factorial(n);
    cout << "Kiritilgan sonning factoriali = " << result;

    return 0;
}
*/


/*
//Funksiya overloading ishlatilishi
#include <iostream>
using namespace std;

float add(float,float,float);
float add(float,float);
string add(string,string);

int main(){

float a,b,c;
cout << "a = ";
cin >> a;
cout << "b = ";
cin >> b;
cout << "c = ";
cin >> c;

cout << add(a,b) << endl;
cout << add(a,b,c) << endl;

string x,y;
cout << " x = ";
cin >> x;
cout << " y = ";
cin >> y;

cout << add(x,y) << endl;

return 0;
}

float add(float a, float b){
return a + b;
}
float add(float a, float b, float c){
 return a + b + c;
}

string add(string a, string b){
 return a + b;
}
*/



//Recursive funksiya ishlatilishi sonlarni yig'indisini chiqarish
//Masalan 123 kiritilsa 6 chiqaradi

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <cmath>
using namespace std;
int raqamlar_Yigindisi(int );
int a=0;
int main()
{
    float n,m;
    cout<<" n = ";
    cin>>n;
    m=raqamlar_Yigindisi(n);
    cout<<m;
}

int raqamlar_Yigindisi(int n)
{
    a=a+n%10;
    if(n==0)
    {
        return a;
    }
    else
    {
        n=n/10;
        raqamlar_Yigindisi(n);
    }
}


