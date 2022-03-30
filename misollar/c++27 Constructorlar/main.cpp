#include <iostream>
#include <string>
//Constructorlar
//Constructorlar - classni mahsus funksiyasi bolib bular biron bir classdan object olinayyatkanda
//Avtomatik ishga tushadi
//Constructorlar class nomi bilan bir xil boladi aks holda ishlamaydi
//Constructorlar juda classda kerak boladi qachonki malum bir o'zgaruvchilarga oldindan qiymat bermoqchi bolsak
using namespace std;

class myClass {
public:
    myClass(string str){
        // cout << " Constructor  Ishlayapti...." << endl;
        setName(str);
     }


   void setName(string s){
   }
   string getName() {
    return name;
   }

private:
string name;

};



int main()
{
    //myClass k;
    myClass ob("David");
    myClass _ob2("Mark");

    cout << _ob2.getName() << endl;
    cout << ob.getName() << endl;

    return 0;
}
