#include <iostream>
#include <string>

//O'zgaruvchini foydalanuvchidan yashirish encapsulation data hiding deyiladi
// Encapsulationni ishlatyakkanimzida bizga asosiy orinni public private protected shular egarlaydi
//Bu yerda biz balansni foydalanuvchi pasportisiz ichidagi balansni o'zgartira olmaydi
//Aynan shu holatga encapsulation data hiding deyiladi.
using namespace std;

class BankAccount {

 private:
int balance = 1000;
string passport = "AA0000";
void deposit(string s, int b) {

public:
if(s == passport) {
    balance += b;
}
}

void withdraw(string s, int b) {

if(s == passport) {
    balance -= b;
}
}

protected:




};

int main() {
BankAccount k;

k.deposit("AA0000",500);



return 0;
}




/*
int main() {
BankAccount k;

k.deposit("AA0000",500);

cout << k.balance << endl;

k.balance = 50000;
cout << k.balance << endl;


return 0;
}
*/
