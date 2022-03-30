#include <iostream>
#include <ctype.h>
#include <cmath>
using namespace std;

int main()
{
/*
    int a[] = {3,18,7,5};
    cout << a[3] << endl;
*/

/*
    int arr[] = {2,4,3,3,6,4,1};

    cout << "Avvalgi qiymatlar: ";
    for(int i = 0; i< 6; i++){
        cout << arr[i] << " ";
    }

    arr[1] = 45;
    arr[3] = 77;

    cout << "\nKeyingi qiymatlar: ";
    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }

    */




    /*
int n, s = 0;
cout << " n = ";
cin >> n;
int a[n];

for(int i = 0; i < n; i++){
    cout << "a[" << i << "] = ";
    cin >> a[i];
}
for(int i = 0; i < n; i++){
    if(a [i] < 0){
        s++;
    }
}
cout << " Manfiy sonlar " << s << " ta";
*/





/*
//Barcha elementlarni qiymatini topish
int n, s = 0;
cout << " n = ";
cin >> n;
int a[n];

for(int i = 0; i < n; i++){
    cout << "a[" << i << "] = ";
    cin >> a[i];
}
for(int i = 0; i < n; i++){
    if(a [i] > 0){
        s = s + a[i];
    }
}
cout << s << endl;
*/



/*
//toq indexdagi elementlarni chiqarish
int n, s = 0;
cout << " n = ";
cin >> n;
int a[n];

for(int i = 0; i < n; i++){
    cout << "a[" << i << "] = ";
    cin >> a[i];
}
for(int i = 1; i < n; i+= 2){
 cout << " " << a[i] << endl;
}
*/


/*
//Juft indexdagi toq elementlarni yigindisini chiqarish
int n, s = 0;
cout << " n = ";
cin >> n;
int a[n];

for(int i = 0; i < n; i++){
    cout << "a[" << i << "] = ";
    cin >> a[i];
}
for(int i = 0; i < n; i+= 2){
if(a[i]%2==1){
s = s + a[i];
}
}
cout << s << endl;
*/






/*
int n, s = 0;
cout << " n = ";
cin >> n;
int a[n];

for(int i = 0; i < n; i++){
    cout << "a[" << i << "] = ";
    cin >> a[i];
}

for(int i = 1; i < n; i++){
    if(a[0] < a[i]){
        a[0] = a[i];
    }
    cout << a[0] << endl;
}
*/





/*
//Eng kattasini topish
int i, n;
    int  arr[100];
    cin >> n;
    cout << endl;

    for(i = 0; i < n; ++i)
    {
       cout << "Enter Number " << i + 1 << " : ";
       cin >> arr[i];
    }
    for(i = 1;i < n; ++i)
    {
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    cout << "Largest element = " << arr[0];
*/


/*
//eng kattasini topish

int n,maxi,s = 0;
cout << " n = ";
cin >> n;
int a[n];

for(int i = 0; i < n; i++){
    cout << "a[" << i << "] = ";
    cin >> a[i];
}

maxi = a[0];
for(int i = 0; i < n; i++){
    if(maxi < a[i]){
        maxi = a[i];
    }
}
cout << maxi << endl;
*/




/*
//Kattasi va kichigini topish
int n,maxi,mini,s = 0;
cout << " n = ";
cin >> n;
int a[n];

for(int i = 0; i < n; i++){
    cout << "a[" << i << "] = ";
    cin >> a[i];
}

maxi = a[0];
mini = a[0];
for(int i = 0; i < n; i++){
    if(maxi < a[i]){
        maxi = a[i];
    }
    if(mini > a[i]){
        mini = a[i];
    }
}
cout << mini << endl;
cout << maxi << endl;
  */





/*
  int n,maxi,mini,s = 0;
cout << " n = ";
cin >> n;
int a[n];

for(int i = 0; i < n; i++){
    cout << "a[" << i << "] = ";
    cin >> a[i];
}

for(int i = 0; i < n; i++){
    if(maxi < a[i]){
        maxi = a[i];
    }
    if(mini > a[i]){
        mini = a[i];
    }
}
*/

/*
  //Katta kichik sonlarni o'rnini almashtirish

 int n ,mini,index1=0,index2=0, maxi;
    cout<<" n = ";
    cin>>n;
    int a[n];

    for(int i = 0; i < n ; i++ ){
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
    mini=a[0];
    maxi=a[0];
    for(int i = 0 ; i < n ; i++){
        if(maxi<a[i]){
            maxi=a[i];
            index1=i;
        }
        if(mini>a[i]){
            mini=a[i];
            index2=i;
        }
    }
    for(int i=0;i<n;i++){
        if(index1==i||index2==i){
            if(index1==i){
                cout<<" "<<a[index2];
            }else{
                cout<<" "<<a[index1];
            }
        }else{
        cout<<" "<<a[i];
        }

    }

*/









/*
//Satrlar orasidan birxilini topish
//string
int n = 0,a;
string s1,s2,str1 = "";
getline(cin,s1);
getline(cin,s2);
a = s2.length();
for(int i = 0; i < s1.length(); i++){
    for(int j = i; j < a; j++){
        str1 = str1 + s1[j];
    }
    if(str1 == s2){
        n++;
        cout << "n++" << endl;
    }
    a++;
    cout << str1 << endl;
    str1 = "";
}
cout << "Natija :" <<  n;
*/



/*
//while 1-misol
int n = 0,a,b;
cout << "A  = ";
cin >> a;
cout << "B = ";
cin >> b;
while(a > b){
    a = a - b;
}
cout << a;
*/

/*
//while 4-misol
int n,c,b;
cout << "n = ";
cin >> n;
b = 3;
c = 3;
while(n > b){
    b = b * c;
}if(n == b){
cout << "3 ni darajasi ekan";

} else {

cout << "3 ni darajasi emas";
}
*/










/*
//nta belgidan u yog'ini o'chiradi va o'rniga qo'yadi
string s1,a = "";
getline(cin,s1);
string s2;
getline(cin,s2);
int n1,n2;
cin >> n1;
cin >> n2;

//nta belgidan u yog'ini o'chiradi
s1.resize(n1);

cout << "s1 = " << s1 << endl;
//0dan n2 belgigacha o'chiradi
s2.erase(0,n2);
cout << "s2 = " << s2 << endl;

a = s1 + s2;
cout << a << endl;
*/



    return 0;
}
