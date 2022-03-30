//Funksiyalar funksiyaning vazifasi biron bir holat bizga takror kerak bo'lib qolsa shunda
// kerak boladi funksiya main funksiyasidan tashqarida yoziladi va main ichida chaqiriladi
#include <iostream>
#include <string>
using namespace std;

int raqam() {

return 5;
}

string harf() {
return "Hello";

}

string satr() {
return "Good";

}

bool amal() {
    int a = 5;
if(a > 0) {
    cout << "Salom";
} else {
   cout << "Tugadi";
}

}



int main()
{

cout << raqam() << endl;
cout << harf() << endl;

string str;
str = satr();
cout << str << endl;

cout << amal() << endl;




    return 0;
}


