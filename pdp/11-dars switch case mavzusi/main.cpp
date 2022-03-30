#include <iostream>

using namespace std;

int main()
{
    /*
    int kun;
    cin >> kun;

    switch(kun)
    {
    case 1:
        cout << "Dushanba " << endl;
        break;
    case 2:
        cout << "Seshanba " << endl;
        break;
    case 3:
        cout << "Chorshanba " << endl;
        break;
    case 4:
        cout << "Payshanba " << endl;
        break;
    case 5:
        cout << "Juma " << endl;
        break;
    case 6:
        cout << "Shanba " << endl;
        break;
    case 7:
        cout << "Yakshanba " << endl;
        break;
    default:
        cout << "Bunday hafta kuni mavjud emas" << endl;

    }
    */

    /*

        int oy;

        cin >> oy;

        switch(oy)
        {
        case 1:
            cout << "Yanvar " << endl;
            break;
        case 2:
            cout << "Fevral " << endl;
            break;
        case 3:
            cout << "Mart " << endl;
            break;
        case 4:
            cout << "Aprel " << endl;
            break;
        case 5:
            cout << "May " << endl;
            break;
        case 6:
            cout << "Iyun " << endl;
            break;
        case 7:
            cout << "Iyul " << endl;
            break;
        case 8:
            cout << "Avgust " << endl;
            break;
        case 9:
            cout << "Sentabr " << endl;
            break;
        case 10:
            cout << "Oktabr " << endl;
            break;
        case 11:
            cout << "Noyabr " << endl;
            break;
        case 12:
            cout << "Dekabr " << endl;
            break;
        default:
            cout << "Bunday oy mavjud emas " << endl;
        }
        */

        /*
    int a;
    cin >> a;
    switch(a)
    {
    case 1:
        cout << 1;
    case 3:
        cout << 3;
    case 5:
        cout << 5;
    case 7:
        cout << 7;
    case 9:
        cout << 9;
        break;
    case 2:
        cout << 2;
    case 4:
        cout << 4;
    case 6:
        cout << 6;
    case 8:
        cout << 8;
        break;
    }
    */

    /*
    int amal;
    cout << "Amalni kiriting " << endl;
    cout << "1-raqam  qo'shish" << endl;
    cout << "2-raqam ayirish" << endl;
    cout << "3-raqam kopaytirish" << endl;
    cout << "4-raqam bo'lish" << endl;
    cin >> amal;
    float a,b;
    cin >> a >> b;
    switch (amal) {
    case 1: cout << a + b << endl;
    break;
    case 2: cout << a - b << endl;
    break;
    case 3: cout << a * b << endl;
    break;
    case 4: cout << a / b << endl;
    break;
    default:
        cout << "Bunday amal mavjud emas " << endl;
    }
    */

    /*
    float e = 12.431.61,d = 10.676.91,r = 70.67;
    int som;
    cout << "Summani kiriting " << endl;
    cin >> som;
    cout << "Qaysi valyutaga o'tkazmoqchisiz " << endl;
    cout << "1-raqam 1 euro 12,431.61  " << endl;
    cout << "2-raqam 1 dollar 10,676.91 " << endl;
    cout << "3-raqam  1 rubl 70,67" << endl;

    switch(som) {

    case 1: cout << "Euro " << endl;
        cout << sum * e << endl;
    break;
    case 2: cout << "Dollar " << endl;
         cout << sum * d << endl;

    break;

    case 3: cout << sum * r << endl;
             cout << "Rubl " << endl;

    }

*/


float p,a,s,b;
cout << "Perimetrni kiriting " << endl;
cout << "p = ";
cin >> p;
cout << "Yuzani kiriting" << endl;
cout << "a = ";
cin >> a;


b = (p - 2) / a / 2 > 0;
p = (2 - a) / 2;
p > 2 / a;

if ((a > 0) && (b > 0)) {
    ((p > 2 * a) && (a > 0));
cout << "b tomon " << endl;
}




    return 0;
}
