#include <iostream>
#include <cmath>
using namespace std;

int main(){


    /*
    //for-20
int s = 0,n,m;
cin >> n;
m = 1;

for(int i = 1; i < n; i++){

    m  = i * m;
    s = s + m;

}
cout << s << endl;
 */

 /*
 //for-18
 int n,m,m1,s = 0;

 float a;
 m = (-1);
 m1 = -1;
 cin >> n >> a;
 for(int i = 0; i < n; i++){

     m = m1 * m;

     s = s + m * pow(a,i);
 }
 cout << s << endl;
 */

 /*
 //8-misol
 int a,s = 1,b;
 cin >> a >> b;

 for(int i = a; i <=b; i++){
     s = s * i;

 }
 cout << s << endl;

 */

/*
int n,max = 0,c;

cin >> n;

while (n > 0) {
    cin >> c;

    if(c > max) {
        max = c;
    } else {
        n--;
    }
}

 cout << max;
 */

 /*
 int a,b,c,d,e,f,g,h,i;
 cin >> a >> b >> c >> d >> e;
f = min(a,b);
g = min(f,c);
h = min(g,d);
i = min(h,e);
cout << i << endl;
*/


/*
int a,b,c,d,e;
cin >> a >> b >> c >> d >> e;
cout << max(max(max(max(a,b),c),d),e);
*/


/*
//Kesmaga eng yaqin sonni topish
int a,b,c,d,e;
cout << "A sonni kiriting " << endl;
cin >> a;
cin >> b >> c;
d = abs(a-b);
e = abs(a-c);
if(d < e ){
    cout << "b" << " " << d << endl;

} else {
    cout << "c" << " " << e << endl;
}
*/

/*
float a;
cin >> a;

if(a > 0){
    cout << "Natural son" << endl;
} else if(){
    cout << "Haqiyqiy son" << endl;
} else {
    cout << "Natural son emas" << endl;
}
 */


    return 0;
}

