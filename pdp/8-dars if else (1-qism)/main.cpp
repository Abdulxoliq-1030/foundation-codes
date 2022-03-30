#include <iostream>

using namespace std;

int main()

{
    /*
int a,b;
cin >> a >> b;
if(a > b) {
    cout << a << endl;
} else {
   cout << b << endl;
}
*/
/*
int a,b,c;
cin >> a >> b >> c;
if(a > b){
    cout << a << endl;
} else if(a < c) {
    cout << c << endl;
} else if(b > c) {
   cout << b << endl;
}
*/
/*
int a,b,c;
 cin>>a;
 cin>>b;
 cin>>c;



 if( a<b && a<c && b>c ){
cout<< a <<endl;
 cout << c <<endl;
 cout<< b <<endl;}



 else if( a<b && a<c && b<c ) {



 cout<<  a <<endl;
 cout<< b <<endl;
 cout<< c <<endl;
 }



 else if ( b<a && b<c && c>a ){


 cout<< b <<endl;
 cout<< a <<endl;
 cout<< c <<endl;
 }

 else if ( b<a && b<c && c<a ){


 cout<< b <<endl;
 cout<< c <<endl;
 cout<< a <<endl;
 }


 else if ( c<a && c<b && a>b){



 cout<< c <<endl;
 cout<< b <<endl;
 cout<< a <<endl;

 }

 else if ( c<a && c<b && a<b){



 cout<< c <<endl;
 cout<< a <<endl;
 cout<< b <<endl;

 }
*/

int ball;
cout << "Ballni kiriting" << endl;
cin >> ball;

if(ball >= 86 && ball <= 100) {
    cout << "A'lo" << endl;
} else if(ball >= 71 && ball <= 85) {
   cout << "Yaxshi" << endl;
} else if(ball >= 56 && ball <= 70) {
   cout << "Qoniqarli " << endl;
} else if(ball >= 0 && ball <= 55) {
   cout << "Qoniqarsiz " << endl;
}
    return 0;
}
