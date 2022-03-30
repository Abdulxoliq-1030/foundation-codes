#include <iostream>
//OOP = Obyektga yo'naltirilgan dasturlash tili
//Class - OOP ning asosiy focus nuqtasi bo'lib obyektlarni yaratishda ishlatiladi.
//Class - Obyektning qanday bo'lishini tasvirlab beradi.
//Public - (Ommaviy)-degani.  buning vazifasi qanday desak shu public: dan keyin yozilgan barcha funksiya atributlar hammasini
//Classdan tashqarida ishlatsa boladi degani.
//Classning vazifasi masalan biron bir kishi bizning yaratgan classimizni o'zi uchun
//Kutubxona qilib ishlatsa bo'ladi masalan quyidagi misol singari
using namespace std;
//public,private,protected;
class First{
public:
    void sayHi() {
     cout << "Hello my friend " << endl;

    }
};


class Second{
public:
    void Good() {
    cout <<" Dasturchilarning eng zo'ri  Abdulxoliq " << endl;
    }

};

int main()
{
First John,Mark;
John.sayHi();
Mark.sayHi();

Second IlonMask;
IlonMask.Good();


    return 0;
}
