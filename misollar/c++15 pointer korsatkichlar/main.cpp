#include <iostream>

using namespace std;
//pointers - korsatkichlar
//Korsatkichlar ikki hil boladi birinchisi address operator
//Pointer o'zgaruvchi hisoblanadi buning vazifasi boshqa bir
//o'zgaruvchini manzilini egarlash uchun ishlatiladi
//Pointerning belgisi * hisoblanadi

int main() {
/*
int ball = 5;

cout << &ball << endl; // & shu belgi orqali biz hotiraning qaysi joyidan egarlab turganini bilib olamiz
*/

int ball = 5,ball_2 = 6;

int *pointer = &ball;
cout << pointer << endl;

pointer = &ball_2;
cout << pointer << endl;
//bu codlar orqali biz bu variablelarni addressini bilib olishimiz mumkin




//Ko'rsatkichlar ustida ishlash
//Bu ikkinchi hil operator buning nomi dereference operatori
//buning vazifasi ozgaruvchining qiymatini aniqlab beradi

int var = 15;



cout << var << endl; // 15 qaytariladi

cout << pointer << endl; // var o'zgaruvchisining xotira manzili elon qilinadi

cout << *pointer << endl; // 15 qaytariladi




return 0;
}
