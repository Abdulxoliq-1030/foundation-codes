#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    /*
    string a,b,c;
    cin >> a >> b >> c;
    cout <<  a + b + c << endl;
    */
    /*
    string s;
    cin >> s;
    cout << s[i] + s[i+1] + s[i+2] << endl;
    */


/*
     char c[100];

     string s = "Salom Dunyo ";
     s.clear();  //s ning qiymatini o'chiradi

     cout << "Satrni kiriting " << endl;
     cin.getline(c,sizeof(c));

     //s satriga char toifasidagi c satrini nusxasini olish
     s.assign(c,strlen(c));

     cout << s << endl;
*/

/*
string s1,a = "";
getline(cin,s1);
for(int i = 0; i < s1.length(); i++){
    a = a + s1[i] + s1[i];
}
cout << a << endl;
*/

/*
string s1,a = "";
getline(cin,s1);
for(int i = 0; i < s1.length(); i++){
    a = a + s1[i] + s1[i];
    cout << a << endl;
}
cout << a << endl;
*/


/*
string s,c;
s = "Guloy";
c = s.substr(3,2) + s.substr(0,3);
cout << c << endl;
*/

/*
string s = "Assalomu aleykum do'stlar";
string c = "Mehribon va muhtarama ayol";
cout << s << endl;

//17-Belgidan boshlab 5ta belgi o'rniga c satrini qo'shish
s.replace(17,5,c);
cout << s << endl;

s.swap(c); // 2ta satrni to'la almashtirish
cout << s << endl;

s.replace(0,0,c,0,17);
s.erase(25);
cout << s << endl;
*/
    return 0;
}
