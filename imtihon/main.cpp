/*
#include <iostream>
using namespace std;

int main()
{


//Sonlarni necha honali ekanini topish
int n;
int sum = 0;

cout << "Son kiriting " << endl;
cin >> n;

while(n != 0){
    n /= 10;
    ++sum;
}
cout << " Kiritilgan sonimiz " << sum  << " xonali son" << endl;


return 0;
}
*/




/*

//birxil harflarni o'chirib tashlash bittasini
#include <iostream>
using namespace std;


void  birxil(char* S)
{
    if (S[0] == '\0')
        return;

    if (S[0] == S[1]) {


        int i = 0;
        while (S[i] != '\0') {
            S[i] = S[i + 1];
            i++;
        }

        birxil(S);
    }


    birxil(S + 1);
}

int main()
{

    char S1[] = "avval";
    birxil(S1);
    cout << S1 << endl;

    char S2[] = "obbo";
    birxil(S2);
    cout << S2 << endl;

    return 0;
}
*/




/*
//Satr ichidagi sonlarni bir biriga qo'shish

#include <iostream>
#include <string.h>
using namespace std;

int main(){

   int s=0;
    string a;
    getline(cin , a);
     for(int i = 0 ; i< a.length();i++){
        if(isdigit(a[i])){
            switch (a[i]){
            case '1': s=s+1;break;
            case '2': s=s+2;break;
            case '3': s=s+3;break;
            case '4': s=s+4;break;
            case '5': s=s+5;break;
            case '6': s=s+6;break;
            case '7': s=s+7;break;
            case '8': s=s+8;break;
            case '9': s=s+9;break;
            }
        }
     }
     cout<<s;

return 0;
}
*/


/*
//O'rta arifmetik va o'rta geometrigini topish
#include <iostream>
#include <cmath>
using namespace std;

float sum (float a,float b){
    cout << "Raqamlarni kiriting " << endl;
cin >> a >> b;
cout << "a va b ning o'rta arifmetigi " << (a + b) / 2 << endl;
cout << "a va b ning o'rta geometrigi " << sqrt(a * b) << endl;

}

int main(){
int amal,k,n;

amal = sum(k,n);
return 0;
}
*/



/*
// uchga va beshga bo'linadigan sonlarni chiqarish
#include <iostream>
using namespace std;
int main(){

   int n,m;
        cin>>n>>m;
        int x[n][m];
        for ( int i=0; i<n; i++)
        {
            for ( int j=0; j<m; j++)
            {
                cout<<"x["<<i<<"]["<<j<<"]="<<endl;
                cin>>x[i][j];
                cout<<endl;
            }
        }
        for ( int i=0; i<n; i++)
        {
            for ( int j=0; j<m; j++)
            {
                if (((x[i][j]%5)==0)||((x[i][j]%3)==0))
                {
                    cout<<x[i][j]<<endl;

                }

            }

        }
return 0;
}
*/




/*
#include <iostream>
using namespace std;

int calculate(int a,int b)
{
  return a + b;
}

int calculate(int a,int b,int c)
{
    return a * b * c;
}

int main()
{
    int a,b,c;
    cout << "Sonlarni kiriting " << endl;
    cin >> a >> b >> c;

cout << " Ikkita sonning yig'indisi = " <<  calculate(a,b) << endl;
cout << "Uchta sonning ko'paytmasi = " <<  calculate(a,b,c) << endl;



    return 0;
}
*/



/*
//Kiritilgan satrlarni ikkitali qilib chiqarish
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s,c = " ";
    getline(cin,s);
    for(int i = 0; i < s.length(); i++)
    {
        c = c + s[i] + s[i] + "";
    }

    cout << c << endl;


    return 0;

}
*/




/*
//Kiritilgan harfimizni ozini ikkita qilib chiqarib berish
#include <iostream>
#include <string.h>
using namespace std;


int main()
{
 string s,a="";
    getline(cin,s);
    char c;
    cin>>c;
    for(int i=0;i<s.length();i++){
        if(s[i]==c){
            a=a+s[i]+s[i];
        }else{
        a=a+s[i];
        }
    }
    cout<<a;



    return 0;
}
*/





/*
//sozlaarni qanchadur qismidan kesib tashlash
#include <iostream>
#include <string.h>
using namespace std;


int main()
{
    string s1,a = " ";
    getline(cin,s1);
    string s2;
    getline(cin,s2);
    int n1,n2;
    cin >> n1;
    cin >> n2;

    s1.resize(n1);
    s2.resize(0,n2);
    a = s1 + s2;
    cout << a << endl;


    return 0;
}
*/



/*
#include <iostream>
using namespace std;


int main ()
{
       string s1,a="";
    getline(cin,s1);
    string s2;
    getline(cin,s2);
    int n1,n2;
    cin>>n1;
    cin>>n2;

    //n1 ta belgidan u yo'gini uchrayabdi
    s1.resize(n1);


    //0 dan n2 belgigacha uchrayabdi
    s2.erase(0,n2);


    a=s1+s2;
    cout<<a;


    return 0;
}
*/





/*
//Bir biriga oxshash sozlarni topish
#include <iostream>
#include <string.h>
using namespace std;


int main()
{
     string s1,a="";
    getline(cin,s1);
    string s2;
    getline(cin,s2);
    int a1=s1.length(),a2=s2.length();
    for(int i=0; i<a1; i++)
    {
        for(int j=i; j<a2; j++)
        {
            a=a+s1[j];
        }
        if(a==s2)
        {
            cout<<true;
            return 0;
        }
    cout<<a<<endl;
        a="";
        a2++;
    }
    cout<<false;





    return 0;
}
*/




/*
//Harflar orasidan bir xilini topish
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s1,a="";
    getline(cin,s1);
    string s2;
    getline(cin,s2);
    int a1=s1.length(),a2=s2.length(),n=0;
    for(int i=0; i<a1; i++)
    {
        for(int j=i; j<a2; j++)
        {
            a=a+s1[j];
        }
        if(a==s2)
        {
         n++;
        }
       cout<<a<<endl;
        a="";
        a2++;
    }
    cout<<n;
    return 0;
}
*/



/*
//Olib tashlanishi kerak bolgan sozni yozsak osha joyini qirqib yuboradi
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s1,a="";
    getline(cin,s1);
    string s2;
    getline(cin,s2);
    int a1=s1.length(),a2=s2.length(),n=0;
    for(int i=0; i<s1.length(); i++)
    {
        for(int j=i; j<a2; j++)
        {
            a=a+s1[j];
        }
        if(a==s2)
        {
        s1.erase(i,s2.length());
        break;
        }
        a="";
        a2++;
    }
    cout<<s1;
    return 0;
}
*/




/*
//Raqamlarni ichidan eng kattasini topish
#include <iostream>
using namespace std;

int largest(int arr[], int n)
{
    int i;


    int max = arr[0];


    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}

int main()
{
    int arr[] = {10, 324, 45, 90, 9808};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Eng katta element "
         << largest(arr, n);



    return 0;
}
*/




/*
//Sonlarni ikkilik sanoq sistemasiga o'tkazish
#include <iostream>
using namespace std;
int main()
{
int a[10], n, i;
cout<<"Enter the number to convert: ";
cin>>n;
for(i=0; n>0; i++)
{
a[i]=n%2;
n= n/2;
}
cout<<"Binary of the given number= ";
for(i=i-1 ;i>=0 ;i--)
{
cout<<a[i];
}
}
*/
