#include <iostream>

using namespace std;
//OOPda - Abstract classlar
//Abstract classning vazifasi classning ichida amal bajariladi qandaydur shartlar vahokazo
//va keyin mainni ichida Foydalanuvchi ishlatadigan qismi kirgaziladi. Masalan quyidagidek
// Pul miqdori kiritiladi va pastda foydalanuvchiga summani kiritgandan so'ng balans korinadi
//Keyin foydalanuvchi pulni kiritganida orqasida qanday amallar bajarilishini bilishi ham shart emas
//shu oddiy code blocksni ham oddiy cout amali qanday qilib ekranga malumotni chiqaryapti
//uni ichida qanday amallar ketyapti buni bizga ahamiyati yoq bu ikkinchi darajada

class BankAccount {
 int balance = 1000;
public:
    int myBalance() {
     return balance * 9500;
    }
};

int main()
{
BankAccount k;
cout << k.myBalance() << endl;
    return 0;
}
