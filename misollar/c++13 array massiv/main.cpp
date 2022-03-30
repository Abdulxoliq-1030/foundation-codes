#include <iostream>

using namespace std;

int main()
{
    /*
    //array/massiv
    int a[5] = {12,3,31,22,12};

  for (int i = 0; i < 5; i++) {
    cout << "a[" << i << "] = " << a[i] << endl;
  }
  */

  /*
  string b[5] = {"Hello","Good morning","Good","Hi","Good afternon"};

  for(int i = 0; i < 5; i++) {
    cout << "b[" << i << "] = " << b[i] << endl;
  }
  */

  /*
  float c[5] = {23.4,32.1,32.2,121.3,32};

  for (int i = 0; i < 5; i++) {
    cout << "c[" << i << "] = " << c[i] << endl;
  }
*/

//arrayning ifodalanishidagi hatolar
//1-hatolik
//1-holatda bizda keraksiz raqamlar  chiqib qoladi ekrandan
/*
int c[5];
for (int i = 0; i < 5; i++){
    cout << "c[" << i << "] = " << c[i] << endl;
}
*/

//2-hatolik
//bu holatda bizda qiymat bermaganligimiz uchun hammasiga 0 qiymat berib qo'yadi
/*
int c[5] = {};
for (int i = 0; i < 5; i++){
    cout << "c[" << i << "] = " << c[i] << endl;
}
*/

/*
//3-hatolik
// bu holatda biz 5ta massivni elon qilib undan 3 tasini kiritsak
// bizda qolgan 2ta qiymat 0 bolib ko'rinadi

int c[5] = {12,12,44};
for (int i = 0; i < 5; i++){
    cout << "c[" << i << "] = " << c[i] << endl;
}
*/
/*
//4-hatolik
//bu holatda for operatoriga = belgisini qo'yib qo'ysak nima hodisa ro'y beradi
//bu holatda 5ta massivga 6- qiymat ham qo'shilib qoladi va 6-da keraksiz raqamlar ko'rinadi
//yoki 0 ko'rinadi.
int c[5] = {12,12,44};
for (int i = 0; i <= 5; i++){
    cout << "c[" << i << "] = " << c[i] << endl;
}
*/

/*
//berilgan massivni o'zgartirish
int g[5] = {12,32,43,54,64};
  g[3] = 100;
for (int i = 0; i <= 5; i++){
    cout << "g[" << i << "] = " << g[i] << endl;
}
*/
/*
//berilgan massivga foydalanuvchi tomonidan qiymat kiritish
int a[5] {32,22,12,43,54};
cin >> a[3];
for(int i = 0; i < 5; i++) {
    cout << "a[" << i << "] = " << a[i] << endl;
}
*/
/*
//Massivda ham increament va decreament amallarini ishlatish mumkin
int a[5] {32,22,12,43,54};
cin >> a[3];
a[2]++;
a[1]--;
for(int i = 0; i < 5; i++) {
    cout << "a[" << i << "] = " << a[i] << endl;
}
*/

/*
//1-misol
int num[10] = {1,2,3,4,5,6,7,8,9,10};
for(int i = 0; i < 10; i++){
    cout << num[i] << endl;
}
*/

//2-misol




    return 0;
}
