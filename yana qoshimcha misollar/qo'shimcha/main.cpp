/*
#include <iostream>

using namespace std;


string maximum(){

return "Hello";
}

int main()
{

  string str;

  str = maximum();
  cout << str << endl;

    return 0;
}
*/


/*
#include <iostream>
#include <string>
using namespace std;

int main(){
/*
string a;
getline(cin,a);
cout << a.length();
*/

/*
string a,b;
getline(cin,a);
getline(cin,b);
string s = a + b + a;
cout << s << endl;
*/

/*
//So'zlarni solishtirish
string a,b;
getline(cin,a);
getline(cin,b);

if(a.length() == b.length()){
    cout << "Ikkalasi teng " << endl;
} else {
 cout << "Teng emas " << endl;
}
*/

/*
//sozlarni birbiriga qo'shish
string a,b;
getline(cin,a);
getline(cin,b);
a.insert(2,b);
cout << a << endl;
*/

/*
//replace funksiyasi bunda nechta belgidan keyin nechta belgi qoyish kerakligini yozamiz
string a,b;
getline(cin,a);
getline(cin,b);
a.replace(2,2,b);
cout << a << endl;
*/

/*
int n, s = 0;
cout << " n = ";
cin >> n;
int a[n];

for(int i = 0; i < n; i++){
    cout << "a[" << i << "] = ";
    cin >> a[i];
}

for(int i = 1; i < n; i++){
    if(a[0] < a[i]){
        a[0] = a[i];
    }
    cout << a[0] << endl;
}
*/


/*
//Satrlar orasidan birxilini topish
//string
int n = 0,a;
string s1,s2,str1 = "";
getline(cin,s1);
getline(cin,s2);
a = s2.length();
for(int i = 0; i < s1.length(); i++){
    for(int j = i; j < a; j++){
        str1 = str1 + s1[j];
    }
    if(str1 == s2){
        n++;
        cout << "n++" << endl;
    }
    a++;
    cout << str1 << endl;
    str1 = "";
}
cout << "Natija :" <<  n;
 return 0;
*/



/*
//Funksiyada factorial sonlarni chiqarish
#include <iostream>
#include <math.h>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *=i;
    }
    return fact;
}

int main()
{
    int n;
    cout <<"n="; cin >>n;
    cout <<"Kiritilgan sonning faktoriali:"<<factorial(n);
    return 0;
}
*/





#include <iostream>
using namespace std;


void decToBinary(int n)
{

    int binaryNum[32];


    int i = 0;
    while (n > 0) {


        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }


    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}


int main()
{
    int n = 17;
    decToBinary(n);
    return 0;
}

