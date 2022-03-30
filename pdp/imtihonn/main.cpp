

#include <iostream>
#include <string.h>
using namespace std;

int main()
{


//1-misol
string a,b,c;
getline(cin,a);
getline(cin,b);
getline(cin,c);

if(a.size() > b.size() && a.size() > c.size())
{
    cout << "Eng uzun satr a : " << a << endl;
} else
if(b.size() > a.size() && b.size() > c.size())
{
    cout << "Eng uzun satr b : " << b << endl;
} else
if(c.size() > a.size() && c.size() > b.size())
{
    cout << "Eng uzun satr c : " << c << endl;
}







/*
//2-misol
int a,b,c,d,e;
cout << "Sonlarni kiriting " << endl;
cin >> a >> b >> c >> d >> e;
cout << "Kiriitilgan sonlarning eng kattaasi " << max(max(max(max(a,b),c),d),e) << endl;
*/




/*
//3-misol
#include <iostream>
using namespace std;

int findMax(int a,int b)
{
    if(a > b)
    {
        return a;
    } else {
      return b;
    }

}

int findMax(int a,int b,int c)
{
float k = a;
    if(k < b)
    {
        k = b;
    }
    if(k < c)
    {
        k = c;
    }
    return k;


}
int main()
{

    int a,b,c;
    cout << "Sonlarni kiriting : " << endl;
    cin >> a >> b >> c;
    cout << " Ikkita sonning eng kattasi : " << findMax(a,b) << endl;
    cout << "Uchta sonning eng kattasi : " << findMax(a,b,c) << endl;


    return 0;
}
*/

/*
//4-misol
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
cout << "Katta va kichik sonlar nisbati " << maxi / mini << endl;
*/



/*
//5-misol
int n,m;
cin >> n >> m;
int a[n][m];
int sum=0;
for(int i=0;i<n;i++)
for(int j=0;j<m;j++)
cin>>a[i][j];

for(int i=0;i<n;i++)
for(int j=0;j<m;j++)
if(a[i][j]%2!=0)
sum=sum+a[i][j];
cout<< "Toq sonlar yig'indisi " << sum << endl;
*/




 return 0;
}





