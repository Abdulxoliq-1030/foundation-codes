/*
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
/*
string str = "Bu yozuv string hisoblanadi.";
cout << str << endl;
*/


 /*
  string s;
  cout << "Satr kiriting " << endl;
  getline(cin,s);
  cout << "Siz kiritgan satr " << s.length() << " ta belgidan iborat" << endl;
  cout << "Siz kiritgan satr " << s.size() << " ta belgidan iborat " << endl;
*/

/*
    size_t n;
    string str ("Men kelajakda frontend dasturchi bo'lishni xohlayman");
    cout << str << endl;


    n = str.size(); //Satr uzunligini aniqlash

    str.resize(n * 2,'+'); //Satr uzunligini 2ta belgiga uzaytirish
    cout << str << endl;


    str.resize(10); //Satr uzunligini o'zgartirish
    cout << str << endl;
*/



/*
    string a = "Hello World";
    string b(string a);
    cout << b << endl;
*/



/*
string a;
cin >> a;
cout << a;
//Bu tartibda yozilsa agar bitta entergacha yoki bitta probelgacha malumotlarni
// saqlay oladi
*/



/*
string a;
getline(cin,a); //getline funksiyasi bitta butun boshli obzasni hisobga oladi bitta entergacha
cout << a << endl;
cout << a.size(); // sizening vazifasi nechta so'z kiritilganini topish abdu bo'lsa 3ni chiqarib beradi
cout << a.length(); // length ham huddi sizening vazifasini qiladi
*/



/*
//Bu holatda biz satrlarni bir biriga qo'shsak bo'ladi faqat qo'shsa boladi holos
string a,b;
getline(cin,a);
getline(cin,b);
string s = a + b;
//string s = a +" "+ b; //Bu holatda yozsak orasiga joy tashlab qoyadi
cout << s << endl;
*/


/*
//Bu holatda bizga har bitta belgini ozini belgisini chiqarib beradi char tipidia
//bunda 256 ta belgi bor index 0 dan boshlangani uchun 255ta yoziladi

char a;
for(int i = 0; i < 255; i++){
    a = i;
    cout << i << " " << a << endl;
}
*/


/*
//satrlarni bir birini taqqoslash bunda if ni ham ishlatsak bolaveradi
//Bunda har bitta belgini solishtirib ko'radi A bilan a bolib qolsa ham ishlamaydi.
string a,b;
getline(cin,a);
getline(cin,b);
if(a == b){
  cout << "Ikkalasi ham teng " << endl;
} else {
 cout << "Error" << endl;
}
*/


/*
//Belgilar sonini bilish ucun quyidagi belgidan foydalanamiz
//Buni tepadagidan farqi bunda katta kichik a bilan A bolsa ham teng deb belgilaydi

//
string a,b;
getline(cin,a);
getline(cin,b);
int x,y;
x = a.size(); y = b.size();
if(x == y){
    cout << "Ikkala sozning belgilar soni teng " << endl;
} else {
  cout << "Error ular teng emas " << endl;
}
*/



/*
//So'zlarni bir biriga qo'shish funksiyasi buning uchun insert();funksiyasidan foydalanamiz
//Bunda so'zni qogan joyidan qo'shib ketmaydi belgilagan belgimizdan qo'shib ketadi

string a,b;
a = "Salom"; b = "talaba";
//a.insert(2,"salom"); // bunda sa salomlom degan natija chiqadi
a.insert(2,b); //bunda satalabalom bo'lib chiqadi
//ikkalasini birmartadan ishlatib ko'rib tushunib olish oson
cout << a;
*/


//Bu funksiyamiz replace() deb nomlanadi buning vazifasi Masalan: "salom" degan sozimiz bolsa shundan 2 belgisidan
//keyin keladigan 2ta belgini o'rniga  b belgini qoyib beradi
//Buni to'liq pastdagi misolda korib tushunib olish mumkin

/*
string a,b;
a = "salom"; b = "talaba";
//1-ishlatilishi :
 //a.replace(2,2,b); //2-chi belgidan keyin  2ta belgini o'rniga b ni qoyib beryapti
//cout << a; //natija "satalabam" bo'lib chiqadi

/*
//2-ishlatilishi :
 a.replace(2,2,b,0,3); //bu ko'rinishda b ni 0chi belgisidan boshlab 3chi belgisigacha a ni 2chi belgisidan keyin qo'yib beradi
cout << a; //natija "satal" bo'lib chiqadi
*/



/*
//1-misol
string s1,a = "";
getline(cin,s1);
for(int i = 0; i < s1.length(); i++){
    a = a + s1[i] + s1[i];
}
cout << a << endl;
*/

/*
//3-misol
string s1,s2;
s1 = "salom";
s2 = "olam";
s1.replace(0,0,s2);
s2.replace(0,0,s1);
cout << s2 << endl;
*/


/*
//5-misol
string s1,s2;
getline(cin,s1);
getline(cin,s2);
s1.size();
s2.size();
if(s2 == s1){
    cout << true << endl;
} else {
  cout << false << endl;
}

return 0;
*/



#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    /*
 string s;
 cout << "Satr kiriting " << endl;
 getline(cin,s);

 cout << "Siz kiritgan satr " << s.length() << " ta belgidan iborat " << endl;
   */




 //Satrda uchragan har n belgisini 2marta oshirish




    return 0;
}


































































































    /*
    int number,factorial = 1;
    cout << "Raqam kiriting " << endl;
    cin >> number;

    if(number < 0){
        cout << "Noldan katta son kiriting " << endl;
    } else if (number <= 1){
     cout << number << "! = " << factorial << endl;
    } else {
     for(int i = number; i >= 2; i--){
        factorial = factorial * i;
     }
     cout << number << "! = " << factorial << endl;
    }
     */




