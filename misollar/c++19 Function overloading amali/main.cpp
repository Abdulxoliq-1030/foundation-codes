#include <iostream>
//function overloadingning vazifasi qanday boladi desak bunda bitta funksiya nomini qayta qayta ishlatsak bo'ladi  
using namespace std;

void printNumber(int n) {
cout << "int " n << endl;
}

void printNumber(float n) {

cout << "float " n << endl;
}
void printNumber(string n) {
cout << "string " n << endl;
}




int main()
{
//Function overloading
//buning vazifasi bir nechta funksiyalarni bir xil nom bilan yaratish uchun ishlatiladi

int k = 12;
float b = 13.5;

printNumber(k);
printNumber(b);
printNumber("Hello");


    return 0;
}
