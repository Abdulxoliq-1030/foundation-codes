#include <iostream>

using namespace std;

int main()
{
/*
for(int i = 1; i <= 10; i++){
    cout << i << endl;
}
*/


/*
int i;
while(i < 10){
        i++;
    cout << i << endl;
}

*/

/*
int a;
cin >> a;
for(int i = 1; i <= 10; i++){
    cout << a * i << endl;
}
*/

/*
int a,b,s = 0;
cin >> a >> b;
for(int i = a; i <= b; i++){
s = s + i;
}
cout << s;
*/


/*
for(int i = 0; i < 500; i += 3){
cout << i << endl;
}
    */

    /*
    for(int i = 0; i < 500; i++){
            if((i%3==0) && (!(i % 2))){
                 cout << i << endl;
            }
    }
    */
/*
    int a;
    cin >> a;
    for(int i = 0; i < a; i++){
        if((i %3==0) && (!(i % 2))){
     cout << i << endl;
        }
    }
  cout << a/6 << endl;
*/
/*
int a;
cin >> a;
cout << a / 6;
*/

/*
int a,b = 0,c = 0,d = 0;
cin >> a;

for (int i = 1; i < a; i++){
    if(i %2==0){
        b++;
    }else if(i %3==0){
       c++;
    } else if(i %5==0){
     d++;
    }
}
cout << b << " " << c  << " " <<  d << endl;
*/

int n;
cin >> n;
for(int i = 1; i <= n; i++){
 if(n%i==0){
    cout << i << endl;
 }

}

return 0;
}
