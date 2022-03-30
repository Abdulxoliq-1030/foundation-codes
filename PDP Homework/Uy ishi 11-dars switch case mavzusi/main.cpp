#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    /*
    //1-misol
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
        cout << "Bunday hafta kuni mavjud emas " << endl;
    }
    */

    /*
    //2-misol
    int k;
    cout << "Bahoni kiriting " << endl;
    cin >> k;

    switch(k) {
    case 1:
        cout << "Yomon " << endl;
        break;
    case 2:
        cout << "Qoniqarsiz " << endl;
        break;
    case 3:
        cout << "Qoniqarli " << endl;
        break;
    case 4:
        cout << "Yaxshi " << endl;
        break;
    case 5:
        cout << "A'lo " << endl;
        break;
    default:
        cout << "Bunday baho kiritilmagan " << endl;
    }
    */

    /*
    //3-misol

    int oy;
    cout << "Oyni kiriting " << endl;
    cin >> oy;

    switch(oy)
    {
    case 1:
        cout << "1-oy qishning 2-oyi " << endl;
        break;
    case 2:
        cout << "2-oy qishning 3-oyi " << endl;
        break;
    case 3:
        cout << "3-oy Bahorning 1-oyi " << endl;
        break;
    case 4:
        cout << "4-oy Bahorning 2-oyi " << endl;
        break;
    case 5:
        cout << "5-oy Bahorning 3-oyi " << endl;
        break;
    case 6:
        cout << "6-oy Yozning 1-oyi " << endl;
        break;
    case 7:
        cout << "7-oy Yozning 2-oyi " << endl;
        break;
    case 8:
        cout << "8-oy Yozning 3-oyi " << endl;
        break;
    case 9:
        cout << "9-oy Kuzning 1-oyi " << endl;
        break;
    case 10:
        cout << "10-oy Kuzning 2-oyi " << endl;
        break;
    case 11:
        cout << "11-oy Kuzning 3-oyi " << endl;
        break;
    case 12:
        cout << "12-oy Qishning 1-oyi " << endl;
        break;
    default:
        cout << "Bunday oy mavjud emas !!! " << endl;
        break;
    }
    */

    /*
    //4-misol
    int sana;
    cout << "Oyni kiriting " << endl;
    cout << "2021-yil Kalendari " << endl;
    cin >> sana;

    switch(sana)
    {
    case 1:
        cout << "Yanvar oyi " << endl;
        cout << "Bu oyda 31 kun mavjud " << endl;
        break;
    case 2:
        cout << "Fevral oyi " << endl;
        cout << "Bu oyda 28 kun mavjud " << endl;
        break;
    case 3:
        cout << "Mart oyi " << endl;
        cout << "Bu oyda 31 kun mavjud " << endl;
        break;
    case 4:
        cout << "Aprel oyi " << endl;
        cout << "Bu oyda 30 kun mavjud " << endl;
        break;
    case 5:
        cout << "May oyi " << endl;
        cout << "Bu oyda 31 kun mavjud " << endl;
        break;
    case 6:
        cout << "Iyun oyi " << endl;
        cout << "Bu oyda 30 kun mavjud " << endl;
        break;
    case 7:
        cout << "Iyul oyi " << endl;
        cout << "Bu oyda 31 kun mavjud " << endl;
        break;
    case 8:
        cout << "Avgust oyi " << endl;
        cout << "Bu oyda 31 kun mavjud " << endl;
        break;
    case 9:
        cout << "Sentyabr oyi " << endl;
        cout << "Bu oyda 30 kun mavjud " << endl;
        break;
    case 10:
        cout << "Oktyabr oyi " << endl;
        cout << "Bu oyda 31 kun mavjud " << endl;
        break;
    case 11:
        cout << "Noyabr oyi " << endl;
        cout << "Bu oyda 30 kun mavjud " << endl;
        break;
    case 12:
        cout << "Dekabr oyi " << endl;
        cout << "Bu oyda 31 kun mavjud " << endl;
        break;
    default:
        cout << "Bunday oy mavjud emas " << endl;

    }
    */

    /*
    //5-misol
    int sum;
    cout << "Amalni tanlang " << endl;
    cout << endl;
    cout << "1-amal Qo'shuv" << endl;
    cout << "2-amal Ayiruv " << endl;
    cout << "3-amal Bo'luv " << endl;
    cout << "4-amal Ko'paytiruv" << endl;
    cin >> sum;

    int a,b;
    cout << "Raqamlarni kiriting " << endl;
    cin >> a >> b;

    switch(sum) {

    case 1:
        cout << a + b << endl;
        break;
    case 2:
        cout << a - b << endl;
        break;
    case 3:
        cout << a * b << endl;
        break;
    case 4:
        cout << a / b << endl;
        break;
    default:
        cout << "Bunday amal kiritilmagan " << endl;

    }
    */

    /*
    //6-misol
        int olchov;
        cout << "O'lchash turini tanlang " << endl;
        cout << "1-raqam detsimetr" << endl;
        cout << "2-raqam kilometr" << endl;
        cout << "3-raqam metr" << endl;
        cout << "4-raqam millimetr " << endl;
        cin >> olchov;
        float  metr;
        cout << "Metrga hisoblanadi " << endl;
        cin >> metr;

        switch(olchov)
        {
        case 1:
            cout << "d / metrga o'tkazildi " << endl;
            cout << metr / 10 << endl;
            break;
        case 2:
            cout << " km / Metrga o'tkazildi" << endl;
            cout << metr * 1000 << endl;
            break;
        case 3:
            cout << " sm / Metrga o'tkazildi " << endl;
            cout << metr / 100 << endl;
            break;
        case 4:
            cout << " ml / Metrga  o'tkazildi " << endl;
            cout << metr / 1000 << endl;
            break;
        default:
            cout << "Bunday o'lchov birligi kiritilmagan " << endl;
        }
    */

    /*
    //7-misol
    int olchov;
    cout << "Og'irlikni O'lchash turini tanlang" << endl;
    cout << "1-raqam kg" << endl;
    cout << "2-raqam ml" << endl;
    cout << "3-raqam g" << endl;
    cout << "4-raqam t" << endl;
    cout << "5-raqam s" << endl;
    cin >> olchov;

    int kg;
    cout << "Og'irlikni kiriting " << endl;
    cout << "Og'irlik kilogramda hisoblanadi " << endl;
    cin >> kg;

    switch(olchov) {
    case 1:
    cout << "Kilogram natijasi" << endl;
    cout << kg * 1 << endl;
    break;
    case 2:
    cout << "Milligram natijasi" << endl;
    cout << kg * 1000000 << endl;
    break;
    case 3:
    cout << "gram natijasi" << endl;
    cout << kg * 1000 << endl;
    break;
    case 4:
    cout << "tonna natijasi " << endl;
    cout << kg / 1000 << endl;
    break;
    case 5:
    cout << "Sentner natijasi " << endl;
    cout << kg * 100 << endl;
    break;
    default:
    cout << "bunday o'lchov birligi kiritilmagan" << endl;
    }
    */

    /*
    //8misol
    int a,b;
    cout << "Sanani kiriting " << endl;
    cin >> a;
    cout << "oyni kiriting " << endl;
    cin >> b;

    switch(b) {

    case 1: cout << a << "- Yanvar " << endl;
    break;
    case 2: cout << a << "- Fevral " << endl;
    break;
    case 3: cout << a << "- Mart " << endl;
    break;
    case 4: cout << a << "- Aprel " << endl;
    break;
    case 5: cout << a << "- May " << endl;
    break;
    case 6: cout << a << "- Iyun " << endl;
    break;
    case 7: cout << a << "- Iyul " << endl;
    break;
    case 8: cout << a << "- Avgust " << endl;
    break;
    case 9: cout << a << "- Sentyabr " << endl;
    break;
    case 10: cout << a << "- Oktyabr " << endl;
    break;
    case 11: cout << a << "- Noyabr " << endl;
    break;
    case 12: cout << a << "- Dekabr " << endl;
    break;
    }
    */

    /*
            //9misol
        int a,b;
        cout << "Sanani kiriting " << endl;
        cin >> a;
        cout << "oyni kiriting " << endl;
        cin >> b;

        switch(b) {

        case 1: cout << a + 1 << "- Yanvar " << endl;
        break;
        case 2: cout << a + 1 << "- Fevral " << endl;
        break;
        case 3: cout << a + 1 << "- Mart " << endl;
        break;
        case 4: cout << a + 1 << "- Aprel " << endl;
        break;
        case 5: cout << a + 1 << "- May " << endl;
        break;
        case 6: cout << a + 1 << "- Iyun " << endl;
        break;
        case 7: cout << a + 1 << "- Iyul " << endl;
        break;
        case 8: cout << a + 1 << "- Avgust " << endl;
        break;
        case 9: cout << a + 1 << "- Sentyabr " << endl;
        break;
        case 10: cout << a + 1 << "- Oktyabr " << endl;
        break;
        case 11: cout << a + 1 << "- Noyabr " << endl;
        break;
        case 12: cout << a + 1 << "- Dekabr " << endl;
        break;
        }
    */

    /*

    //10-misol
    int k;
    cout << "Komandani tanlang" << endl;
    cout << "0-raqam harakat" << endl;
    cout << "1-raqam chapga" << endl;
    cout << "2-raqam o'nga" << endl;
    cout << endl;
    char y;
    cout << "s - shimol" << endl;
    cout << "g - g'arb" << endl;
    cout << "q - sharq" << endl;
    cout << "j-janub" << endl;
    cin >> k;
    cin >> y;



    switch(k) {
    case 0:
        cout << "Harakat" << endl;
        break;
    case 1:
        cout << "Chapga" << endl;
        break;
    case 2:
        cout << "O'nga" << endl;
        break;
    default:
        cout << "Bunday holat mavjud emas " << endl;
        break;
    }

    switch(y) {

    case 's':
        cout << "Shimol tomon" << endl;
        break;
    case 'g':
        cout << "G'arb tomon" << endl;
        break;
    case 'q':
        cout << "Sharq tomon" << endl;
        break;
    case 'j':
        cout << "Ortga  tomon " << endl;
        break;
    default:
        cout << "Bunday holat mavjud emas " << endl;

    }
    */

    /*
    //11-misol

    char k1;
    cout << "Yo'nalishni tanlang" << endl;
    cout << "s - shimol" << endl;
    cout << "j - janub" << endl;
    cout << "q - sharq" << endl;
    cout << "g -g'arb" << endl;

    int k2;
    cout << "0 - harakat" << endl;
    cout << "1 - 180 gradusga buriladi" << endl;
    cout << "2 - o'nga buril" << endl;
    cout << endl;
    cout << "Yo'nalish" << endl;
    cin >> k1;
    cout << endl;
    cout << "Komanda" << endl;
    cin >> k2;

    switch(k1) {
    case 's':
        cout << "shimol tomon " << endl;
        break;
    case 'j':
        cout << "Janub tomon " << endl;
        break;
    case 'q':
        cout << "Sharq tomon" << endl;
        break;
    case 'g':
        cout << "G'arb tomon" << endl;
        break;
    default:
        cout << "Bunday holat mavjud emas " << endl;
        break;
    }

    switch(k2) {
    case 0:
        cout << "Harakat" << endl;
        break;
    case 1:
        cout << "chapga" << endl;
        break;
    case 2:
        cout << "O'nga" << endl;
        break;
    default:
        cout << "Bunday holat mavjud emas " << endl;
    break;
    }
    */


/*
    //12-misol
    int amal;
    cout << "1-raqam Radiusni olchash" << endl;
    cout << "2-raqam Diametrni o'lchash D = 2 * r " << endl;
    cout << "3-raqam Uzunlikni hisoblash L = 2 * p * r " << endl;
    cout << "4-raqam Doiraning yuzasi  S = p * r" << endl;
    cin >> amal;


    float s,d,r,l, p = 3.14;
    float metr;
    cin >> metr;

    switch(amal)
    {

    case 1:
        cout << metr << "metr" << endl;
        cout << "Diametr = " << metr * 2 << endl;
        cout << "Uzunlik = " << 2 * p * metr << endl;
        cout <<  "S = " << p * metr * metr;
        break;
    case 2:
        cout << "r = " << metr / 2 << endl;
        cout << "d = " << metr << endl;
        cout << "l = " << metr * p << endl;
        cout << "s = " << p * metr * metr / 4 << endl;
        break;
    case 3:
        cout << "r = " << metr / (2 * p) << endl;
        cout << "d = " << metr / p << endl;
        cout << "l = " << metr << endl;
        cout << "s = " << (metr / 2 * (metr) / (2 * p)) << endl;
        break;
    case 4:
        cout << "r = " << sqrt(metr / p) << endl;
        cout << "d = " << 2 * sqrt(metr / p) << endl;
        cout << "l = " << p * 2 * sqrt(metr / p) << endl;
        cout << "s = " << metr << endl;
        break;
    default:
        cout << "Bunday holat mavjud emas" << endl;


    }

*/

    /*

    //15-misol
    int raqam,nom;
    cout << "Karta raqamini tanlang" << endl;
    cout << "1 dan 14 gacha istalgan bitta raqam kiriting raqam kiriting " << endl;
    cin >> raqam;


    cout << "Karta nomini kiriting " << endl;
    cout << "1 - g'isht" << endl;
    cout << "2 - olma" << endl;
    cout << "3 - chillak" << endl;
    cout << "4 - qarg'a" << endl;
    cout << "11 - valet" << endl;
    cout << "12 - dama" << endl;
    cout << "13 - qirol" << endl;
    cout << "14 - tuz" << endl;
    cin >> nom;

    switch(raqam)
    {
    case 1:
        cout << "bir" << " ";
        break;
    case 2:
        cout << "ikki" << " ";
        break;
    case 3:
        cout << "uch" << " ";
        break;
    case 4:
        cout << "tort" << " ";
        break;
    case 5:
        cout << "besh" << " ";
        break;
    case 6:
        cout << "olti" << " ";
        break;
    case 7:
        cout << "yetti" << " ";
        break;
    case 8:
        cout << "sakkiz" << " ";
        break;
    case 9:
        cout << "to'qqiz" << " ";
        break;
    case 10:
        cout << "o'n" << " ";
        break;
    case 11:
        cout << "o'n bir" << " ";
        break;
    case 12:
        cout << "o'n ikki" << " ";
        break;
    case 13:
        cout << "o'n uch" << " ";
        break;
    case 14:
        cout << "o'n tort" << " ";
        break;
    default:
        cout << "Bunday raqam kiritilmagan " << endl;

    }

    switch(nom)
    {
    case 1:
        cout << "g'isht" << endl;
        break;
    case 2:
        cout << "olma" << endl;
        break;
    case 3:
        cout << "chillak" << endl;
        break;
    case 4:
        cout << "qarg'a" << endl;
        break;
    case 5:
        cout << "qarg'a" << endl;
        break;
    case 6:
        cout << "qarg'a" << endl;
        break;
    case 7:
        cout << "qarg'a" << endl;
        break;
    case 8:
        cout << "qarg'a" << endl;
        break;
    case 9:
        cout << "qarg'a" << endl;
        break;
    case 10:
        cout << "qarg'a" << endl;
        break;
    case 11:
        cout << "valet" << endl;
        break;
    case 12:
        cout << "dama" << endl;
        break;
    case 13:
        cout << "karol" << endl;
        break;
    case 14:
        cout << "tuz" << endl;
        break;
    default:
        cout << "Bunday karta turi mavjud emas" << endl;
    }

    cout << raqam << nom << endl;

    */



/*
    //16-misol
    int son,birlik,onlik;
    cout << "20 dan 69gacha raqam kiriting " << endl;
    cin >> son;

    switch(onlik = son /  10 % 10)
    {
    case 2:
        cout << "Yigirma" << " " ;
        break;
    case 3:
        cout << "ottiz" <<  " " ;
        break;
    case 4:
        cout << "qirq" << " " ;
        break;
    case 5:
        cout << "ellik" << " ";
        break;
    case 6:
        cout << "oltmish" << " ";
        break;
    }
    switch( birlik =  son % 10)
    {

    case 1:
        cout << "bir" << endl;
        break;
    case 2:
        cout << "ikki" << endl;
        break;
    case 3:
        cout << "uch" << endl;
        break;
    case 4:
        cout << "tort" << endl;
        break;
    case 5:
        cout << "besh" << endl;
        break;
    case 6:
        cout << "olti" << endl;
        break;
    case 7:
        cout << "yetti" << endl;
        break;
    case 8:
        cout << "sakkiz" << endl;
        break;
    case 9:
        cout << "toqqiz" << endl;
        break;

    }

    cout << onlik << birlik << endl;

*/

/*
    //17-misol

    int son,birlik,onlik;
    cout << "20 dan 69gacha masala berilgan tanlang " << endl;
    cin >> son;

    switch(onlik = son / 10 % 10) {
    case 2:
        cout << "Yigirma";
        break;
    case 3:
        cout << "O'ttiz";
        break;
    case 4:
        cout << "Qirq";
        break;
    case 5:
        cout << "Ellik";
        break;
    case 6:
        cout << "Oltmish";
        break;
    }
    switch(birlik = son % 10) {
    case 0:
        cout << "ta masala" << endl;
        break;
    case 1:
        cout << " bitta  masala" << endl;
        break;
    case 2:
        cout << " ikkita masala" << endl;
        break;
    case 3:
        cout << " uchta masala" << endl;
        break;
    case 4:
        cout << " to'rtta masala" << endl;
        break;
    case 5:
        cout << " beshta masala" << endl;
        break;
    case 6:
        cout << " oltita masala" << endl;
        break;
    case 7:
        cout << " yettita masala" << endl;
        break;
    case 8:
        cout << " sakkizta masala" << endl;
        break;
    case 9:
        cout << " to'qqizta masala" << endl;
        break;
    default:
        cout << " Bundan ortiq masala yo'q" << endl;

    }
    cout << onlik << birlik << endl;

*/

/*
//18-misol

    int son,birlik,onlik,yuzlik;
cout << "100 dan 999gacha son kiriting " << endl;
    cin >> son;
    \
    switch(yuzlik = son / 100 % 10)
    {
    case 1:
        cout << "biryuz ";
        break;
    case 2:
        cout << "ikkiyuz ";
        break;
    case 3:
        cout << "uchyuz ";
        break;
    case 4:
        cout << "to'rtyuz ";
        break;
    case 5:
        cout << "beshyuz ";
        break;
    case 6:
        cout << "oltiyuz ";
        break;
    case 7:
        cout << "yettiyuz ";
        break;
    case 8:
        cout << "sakkizyuz ";
        break;
    case 9:
        cout << "to'qqizyuz ";
        break;
    }

    switch(onlik = son / 10 % 10)
    {
    case 0:
        cout << " ";
        break;
    case 1:
        cout << " o'n ";
        break;
    case 2:
        cout << " yigirma ";
        break;
    case 3:
        cout << " o'ttiz ";
        break;
    case 4:
        cout << " qirq ";
        break;
    case 5:
        cout << " ellik ";
        break;
    case 6:
        cout << " oltmish ";
        break;
    case 7:
        cout << " yetmish ";
        break;
    case 8:
        cout << " sakson ";
        break;
    case 9:
        cout << " to'qson ";
        break;

    }

    switch(birlik = son % 10)
    {
    case 0:
        cout << " " << endl;
        break;
    case 1:
        cout << "bir" << endl;
        break;
    case 2:
        cout << "ikki" << endl;
        break;
    case 3:
        cout << "uch" << endl;
        break;
    case 4:
        cout << "to'rt" << endl;
        break;
    case 5:
        cout << "besh" << endl;
        break;
    case 6:
        cout << "olti" << endl;
        break;
    case 7:
        cout << "yetti" << endl;
        break;
    case 8:
        cout << "sakkiz" << endl;
        break;
    case 9:
        cout << "to'qqiz" << endl;
        break;
    default:
        cout << "Bunday son kiritilmagan" << endl;
    }

    cout << yuzlik << onlik << birlik << endl;

*/






    return 0;

}
