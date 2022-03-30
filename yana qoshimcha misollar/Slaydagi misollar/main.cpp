/*
#include <cmath>
#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{


/*
 //sonning natural bo'luvchilarini topish
int a;
cin >> a;
for(int i = 1; i < a; i++){
 if(a % i == 0){
    cout << i << endl;
 }
}
*/


/*
//Mukammal sonligini topish

    int n,i=1,sum=0;
    cout << "Raqam kiriting : ";
    cin >> n;
       while(i<n){
       if(n%i==0)
       sum=sum+i;
       i++;
}
if(sum==n)
    cout << i << " Natural son\n";
else
    cout << i << " Natural son emas\n";

*/


/*
//Berilgan natural sonning yig'indilarini topish
int num,sum = 0;
cin >> num;
for(int i = 0; i <= num;){
    sum = sum + num;
    num--;
}
cout << sum;
*/



/*
//Foydalanuvchi tomonidan kiritilgan sonlar 0 kiritilmagunicha davom etadi va kiritilgandan song
//Sonlarni eng kattasini topish

	int max=0,num,min=0;
	for (int i=0; num!=0; i++)
	{
		cout<<"0 raqamini kiritsangiz amal to'xtaydi > ";
		cin>>num;
		if (num>max)
			max=num;
		if (num<min)
			min=num;
	}
		cout<<"Eng katta son : "<<max << endl;
*/


/*
for(int i = 0; i < 5; i++){
    for(int j = 1; j <= 10; j++){
        cout << "*";
    }
    cout << endl;
}
*/

/*
//Yulduzcha jadval chiqarish

for(int i = 1; i <= 10; i++){
    for(int j = 1; j <= i; j++){
        cout << "*";
    }
    cout << endl;
}
*/

/*
//Beshta sondan eng kattasini topish
int a,b,c,d,e;

cin >> a >> b >> c >> d >> e;
cout << max(max(max(max(a,b),c),d),e);
*/


/*
//Beshta sondan eng kichigini topish
int a,b,c,d,e;
cin >> a >> b >> c >> d >> e;
cout << min(min(min(min(a,b),c),d),e);
*/


/*
//ikkitali qilib chiqarish harflarni
string s1,a = "";
getline(cin,s1);
for(int i = 0; i < s1.length(); i++){
    a = a + s1[i] + s1[i];
}
cout << a << endl;
*/




/*
//Satrni katta va kichik harflarni nechtaligini topish
int s1 = 0;
int s2 = 0;

string a;
getline(cin,a);
for(int i = 0; i < a.length(); i++){
    if(islower(a[i])){
        s1++;
    }
    if(isupper(a[i])){
        s2++;
    }
}

cout << "KICHIK HARIFLAR " << s1 << endl;
cout << "KATTA HARFLAR " << s2 << endl;


    return 0;
}
*/

/*
//funksiyada qo'shish
#include <iostream>
using namespace std;

int add(int,int);


int main(){
int sum;

sum = add(20,30);

cout << sum << endl;


return 0;
}

int add(int a,int b){
return (a + b);
}
*/


/*
//Funksiyada sonning kvadrati va kubini chiqarish
#include <iostream>
using namespace std;
void chiqar(int x)
{
    for(int i = 1; i <= x; i++)
    {
        cout << i << " " << i * i << "  " << i * i * i << endl;
    }
cout << endl;
}

int main()
    int n;

    cout << "Sonni kiriting ";
    cin >> n;
    chiqar(n);
int a;
cout << " Ikkinchi sonni kiriting ";
cin >> a;
chiqar(a);
    return 0;
}
*/


/*
//parametrli funksiya yaratish
#include <iostream>
using namespace std;
int qosh(int a,int b){

return a + b;
}
int main(){

int x,y;
cin >> x >> y;
cout << qosh(x,y) << endl;

return 0;
}
*/



//Stringga oid misollar

#include <iostream>
#include <string.h>
using namespace std;

int main(){
/*
//Satr oxiriga belgi yoki yana satr qo'shish
size_t n;

string s("HelloMello");

n = s.size();
s.resize(n + 2,'*');
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
//satrni orasiga satr qo'shish
string a,b;
getline(cin,a);
getline(cin,b);

a.replace(0,0,b);
b.replace(0,0,a);
cout << b << endl;
*/


/*
//satrni biriga orasidan qo'shib chiqarib berish
int n1,n2;
string s1,s2;

cout << "Sozlarni kiriting " << endl;
getline(cin,s1);
getline(cin,s2);

cout << "Nechta belgidan keyin kiritilishini kiriting " << endl;
cin >> n1 >> n2;
s1.replace(n1,n2,s2,n2,n1);
cout << s1;
*/


/*
//insert funksiyasining vazifasi satrning istalgan qismidan boshqa satr qo'shish
string a,b;
getline(cin,a);
getline(cin,b);

b.insert(2,a);
cout << b << endl;
*/


/*
string a,b;
getline(cin,a);
getline(cin,b);
b.insert(2,a,3,2);
cout << b << endl;
*/

/*
//swap funksiyasining vazifasi sozlarni tolaligicha o'rnini almashtish

string a,b;
getline(cin,a);
getline(cin,b);
a.swap(b);
a.erase(3);
cout << a << endl;
*/

/*
string a,b;

getline(cin,a);
getline(cin,b);

a = b.substr(3,2) + b.substr(0,3);
cout << a << endl;
*/




return 0;
}



