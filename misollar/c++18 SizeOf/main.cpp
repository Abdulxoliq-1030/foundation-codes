#include <iostream>

using namespace std;

int main()
{
    /*
   //sizeofning vazifasi malumot turlarini hotiradan qancha bayt joy egarlashini aniqlab beradi
    cout << "Char : "  << sizeof(char) << endl;
    cout << "int  : "  << sizeof(int) << endl;
    cout << " short int  : "  << sizeof( short int) << endl;
    cout << " long int  : "  << sizeof( long int) << endl;
    cout << "long double  : "  << sizeof(long double) << endl;
    cout << " long long int  : "  << sizeof(long long int) << endl;
    cout << "double : "  << sizeof(double) << endl;
    cout << "float : "  << sizeof(float) << endl;
*/

/*
int var = 5;
cout << "int: " << sizeof(var) << endl;

*/

/*
double arr[100];

cout << sizeof(arr) << endl; //Hozirgi holatda bizda doubleyimiz hotiradan 800 bayt joy
//egarlayapti
*/

//berilgan o'zgaruvchilarni bir biriga bo'lish orqali nechta massiv borligini bilib olishimiz mumkin
int arr[100];
cout << sizeof(arr) / sizeof(arr[0]) << endl;





    return 0;
}
