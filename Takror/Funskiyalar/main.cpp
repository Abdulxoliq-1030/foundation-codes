#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string.h>
using namespace std;

int main()
{
    /*
    //1-misol
    int a,b,c,d,e;
    cout << "Sonlarni kiriting " << endl;
    cin >> a >> b >> c >> d >> e;

    cout << " Kiritilgan sonlarning eng kattasi  = " << max(max(max(max(a,b),c),d),e) << endl;
    */



    /*
        //2-misol
        float a;
        cout << "Sonni kiriting " << endl;
        cin >> a;
        cout << fabs(a) << endl;
    */



    /*
    //3-misol
    int a = 0;
    int b = 0;
    string satr;
    getline(cin,satr);
    for(int i = 0; i < satr.length(); i++)
    {
        if(islower(satr[i]))
        {
            a++;
        }
        if(isupper(satr[i]))
        {
            b++;
        }
        }
     cout << "Katta harflar " << b << endl;
     cout << "Kichik harflar " << a << endl;
     */











    //Faqat satrlarni chiqarish
    //4-misol
    string s;

    cout << "Satrni kiriting " << endl;
    cin >> s;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] < 'A' || s[i] > 'Z' && s[i] < 'a' || s[i] > 'z')
        {
            s.erase(i,1);
            i--;
        }
    }
    cout << s << endl;

    return 0;
}






//satrlar mavzusi
/*
//1-misol
string s1,a = " ";
getline(cin,s1);
for(int i = 0; i < s1.length(); i++)
{
    a = a + s1[i] + s1[i];
}
cout << a << endl;
*/



/*
//3-misol

string s1,s2;

getline(cin,s1);
getline(cin,s2);

s1.replace(0,0,s2);
s2.replace(0,0,s1);
cout << s2 << endl;
*/


string s1,s2;

cout << "Satrlarni kiriting " << endl;
getline(cin,s1);
getline(cin,s2);

s1.replace()



    return 0;
}
