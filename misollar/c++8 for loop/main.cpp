#include <iostream>

using namespace std;

int main()
{
 //For takrorlash operatori
/*
 int sum = 0;
    for (int i = 1; i <= 10; i++) {
             cout << sum << " + " << i << endl;
            sum = sum + i; // sum = 0 + 1 + 2 +  4 shu tarzda davom etadi
            cout << "\nsum = " << sum << endl;
}
            cout << sum << endl;
*/


int sum  = 0;
for(int i = 1; i <= 50; i++){
    cout << sum << " + " << i << endl;
    sum = sum + i;
    cout << "\nsum = " << sum << endl;
}
  cout << sum << endl;


/*
int jami = 0;

for (int i = 1; i <= 50; i++) {
    cout << jami << " + " << i << endl;
    jami = jami + i;
    cout << "\njami = " << jami << endl;
}
    cout << jami << endl;
*/

/*
int num;
cout << "Raqam kiriting" << endl; cin >> num;
if (num%2==0){
    cout << "Juft son" << endl;
} else {
    cout << "Toq son" << endl;

}
*/
/*
int b;
cin >> b;
cout << "Juft sonlarni ekranga chiqarish 1 dan boshlab " << b << " gacha" << endl;

for (int i = 1; i <= b; i++) {
    if(i%2==0) {
        cout << i << endl;
    }
}
*/

/*
int son;
cin >> son;
cout << "Raqam kiriting faqat 3ga bolinadiganlari ekranga chiqadi kiritgan sonizgacha" << son << endl;

for(int i = 0; i <= son; i++) {
    if(i%3==0) {
        cout << i << endl;
    }
}
*/

/*
int num;
cin >> num;
cout << num << endl;
for (int i = 1; i <= num; i++){
    if(i%2==1) {
        cout << i << endl;
    }
}
*/
/*
//1-misol
int k = 5,n;
cin >> n;
  for (int i = 1; n > 1; i++) {
    cout << k << endl;
  }
  */

  /*
  //2-misol
  int a,b;
  cin >> a >> b;
  for (int i = 0; i < a; i++)
  for (int i = 0; i < b; i++){
    cout << a << b << endl;
  }
*/


//3-misol






    return 0;
}
