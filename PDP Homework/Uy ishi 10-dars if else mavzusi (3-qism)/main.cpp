#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    /*
        //1-misol
        int ong,chap,past;
        cout << "O'ng tomonni kiriting " << endl;
        cin >> ong;
        cout << "Chap tomonni kiriting " << endl;
        cin >> chap;
        cout << "Pastki tomonni kiriting " << endl;
        cin >> past;

        if(((ong + chap)< past) || ((chap + past) < ong) || ((chap + past) < ong)) {
            cout << 0 << endl;
        } else if ((chap == past) && (ong == past)) {
          cout << 3 << endl;
        } else if ((chap == ong) || (ong == past) || (chap == past)) {
          cout << 2 << endl;
        } else {
          cout << 1 << endl;
        }
    */

    /*
    //2-misol
    int x,y,z;
    cin >> x >> y >> z;
    if ((x < y) && (z > x)) {
        x = y + z;
        x /= 2;
        cout << "2 ta katta sonning yig'indisini yarmi " <<  x << endl;
    } else if ((y < x) && (z > y)) {
        y = x + z;
        y /= 2;
        cout << "2 ta katta sonning yig'indisini yarmi " << y << endl;
    } else if ((z < y) && (x > z)) {
        z = y + x;
        z /= 2;
        cout << "2 ta katta sonning yig'indisini yarmi " << z << endl;
    }
    */


    /*
    //3-misol
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;

    if ((a >= b) && (a >= c) && (a >= d) && (a >= e)) {
        cout << a << endl;
    } else if ((b >= a) && (b >= c) && (b >= d) && (b >= e)) {
        cout << b << endl;
    } else if ((c >= b) && (c >= a) && (b >= d) && (b >= e)) {
        cout << c << endl;
    } else if ((d >= b) && (d >= c) && (d >= a) && (d >= e)) {
        cout << d << endl;
    } else if ((e >= b) && (e >= c) && (e >= d) && (a >= a)) {
        cout << e << endl;
    }
    */



    /*
    //4-misol
    //(a)
    int x,y,z;
    cin >> x >> y >> z;

    if((x > y) && (x > z)) {
        cout << x << endl;
    } else if ((y > x) && (y > z)) {
      cout << y << endl;
    } else if ((z > x) && (z > y)) {
      cout << z << endl;
    }
    */


    /*
    //(b)
    int x,y,z;
    cin >> x >> y >> z;
    cout << max(x,y)+ min(y,z);
    */


    /*
    //(c)
    int x,y,z,a;
    cin >> x >> y >> z;
    if (a = x + y + z) {
           a =  x * y * z;
        cout << a << endl;
    }
    */


    /*
    //(d)
    int x,y,z;
    cin >> x >> y >> z;
    if(((x + y + z) / 2) < (x * z)) {
        cout << ((x + y + z) / 2 + 1) << endl;
    } else {
      cout << ((x * z) + 1);
    }
    */
    /*
    //5-misol
    int x,y,z;
    cin >> x >> y >> z;
    if((x < y) && (y < z)){
       cout << x * 2 << endl;
       cout << y * 2 << endl;
       cout << z * 2 << endl;
    } else {
       cout << -x << " " << -y << " " << -z << endl;
    }
    */

    /*
    //7-misol
    int x,y;
    cin >> x >> y;
    if((x > 0) && ( y > 0)) {
       cout << 1;
    } else if ((x < 0) && (y > 0)) {
      cout << 2;
    } else if ((x < 0) && (y < 0)) {
      cout << 3;
    } else {
      cout << 4;
    }
    */

    /*
    int a,b,d;

    cin >> a >> b;

    d = (((a > 0) * a && (b > 0)) * 1) + d;
    d = (((a < 0) * a && (b > 0)) * 2) + d;
    d = (((a < 0) * a && (b < 0)) * 3) + d;
    d = (((a > 0) * a && (b < 0)) * 4) + d;
    cout << d << endl;
    */




    /*
    //9-misol
    int x,y,z;
    cin >> x >> y >> z;
    if((x < y) && (y < z)) {
       cout << "To'g'ri" << endl;
    } else {
      cout << "Notog'ri" << endl;
    }
     */


    /*
    //10-misol
    int x,y,z;
    cin >> x >> y >> z;
    if((x < y) && (y < z)) {
      cout << x * 2 << endl;
      cout << y * 2 << endl;
      cout << z * 2 << endl;
    } else {
      cout << abs(x) endl;
      cout << abs(y) endl;
      cout << abs(z) endl;
    }

    */

    //11-misol



    /*
    //12-misol
    int b,c,A,B,C;
    cin >> A >> B >> C;

    c = abs(A - B);
    b = abs(A - C);

    if(c > b) {
       cout << c << endl;
    } else {
      cout << b << endl;
      }
    */

//13-misol
    int a,b,c,x,y,z;
    cin >> a >> b >> c;

     x = a + b;
     y = b + c;
     z = a + c;

    if((x > y) && (x > z)) {
        cout << a << b << endl;
    } else if(y > z) {
      cout << b << c << endl;
    } else {
      cout << a << c << endl;
    }





































    /*
    int a,b,c;
    cin >> a >> b;
    c = a + b;
    cout << c << endl;
    */


    /*
    float l,a;
    cin >> a;
    l = a / 10;
    cout <<  l << endl;
    */



    return 0;
}
