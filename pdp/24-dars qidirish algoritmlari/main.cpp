
/*
//Linear search
#include <iostream>

using namespace std;

 int search(int arr[],int n,int x)
 {
  for(int i = 0; i < n; i++)
  {
      if(arr[i] == x)
      {
          return i;
      return -1;
      }

  }
 }


int main()
{
int arr[] = {2,3,4,5};
int x = 5;
int n = sizeof(arr) / sizeof(arr[0]);

int result = search(arr,n,x);
(result == -1)
? cout << "Element is not present in array"
: cout << "Element is present at index " << result;
    return 0;
}
*/



/*
//Binary search
#include <iostream>
using namespace std;


int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;


        if (arr[mid] == x)
            return mid;


        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);


        return binarySearch(arr, mid + 1, r, x);
    }


    return -1;
}

int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Bunday element mavjud emas "
        : cout << "Qidirilayotgan element " << result << " indexda mavjud ";
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int massiv(int arr[], int l, int r, int x){
    while(l <= r){
        int m = l + (r - l) / 2;

        if(arr[m] == x){
            return m;
        }

        if(arr[m] < x){
                l=m+1;
        }

        else{
            r=m-1;
        }
    }
    return -1;
}

int main(void)
{
    int a;
    cout<<" a = ";
    cin>>a;
    int arr[a];
    for(int i = 0; i < a ; i++ )
    {
        cout<<"a["<<i<<"] = ";
        cin>>arr[i];
    }
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = massiv(arr, 0, n - 1, x);
    (result == -1) ?cout<<"bunday son yo'q"
                   :cout<<"son indeksi "<<result;
     return 0;

}
*/

/*
//Son kiritib oxtarish
#include <iostream>
#include <string.h>
#include <ctype.h>
#include <cmath>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main ()
{
int n,m;
cout << "Massiv uzunligi n = ";
cin >> n;
cout << "Massivdan qidirilayotgan son m = ";
cin >> m;
int massiv[n];
//massiv elementlarini kiritish
for(int i = 0; i < n; i++)
{
    cout << "a[" << i << "]=";
    cin >> massiv[i];
}

for(int i = 0; i < n; i++)
{
    if(massiv[i] == m)
    {
        cout << "Qidirilayotgan son " << i << "- indexda";
          return 0;
    }
}



cout << "Bunday son yo'q " << endl;
}
*/



/*
//Harflarni teskari tartibda chiqarish
 #include <iostream>
 #include <string.h>
 #include <ctype.h>
 #include <cmath>
 #include <time.h>
 #include <cstdlib>
 using namespace std;


 int main ()
 {

     string s1,s2;
     getline(cin ,s1);
     int a;
     a = s1.length()-1;
     s2 = s1;
     for(int i = a; i >= 0; i--)
     {
         s2[i] = s1[a-i];
     }
     cout << s2 << endl;


     return 0;
 }
*/




/*
//Bir hilligini tekshirish
#include <iostream>
#include <string.h>
using namespace std;


int main()
{

string s1;
string s2;
getline(cin,s1);
int a;
a=s1.length()-1;
s2=s1;
for(int i=a;i>=0;i--)
{
    s2[i]=s1[a-i];
}
if(s1==s2)
{
    cout<<"HA"<<endl;
}
else{
    cout<<"YOQ"<<endl;
}
    return 0;
}
*/



/*
//Sonlarni teskari tartibda chiqarish
#include <iostream>
using namespace std;


int main()
{
    int n,a = 0;
    cin >> n;
    while(n > 0)
    {
        a = a * 10;
        a = a + n % 10;
        n = n / 10;
    }
    cout << a << endl;

    return 0;
}
*/




/*
//So'zlarni bir biriga qo'shish
#include <iostream>
#include <string.h>
#include <ctype.h>
#include <cmath>
using namespace std;



int main()
{
    int n1,n2;
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);

    n1 = s1.length()-1;
    if(s1[n1] == s2[0])
    {
        s1.resize(n1);
        cout << s1 + s2;
    }
    else
    {
        cout << s1 + s2 << endl;
    }


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
cout<<"Sonni kiriting : ";
cin>>n;
for(i=0; n>0; i++)
{
a[i]=n%2;
n= n/2;
}
cout<<"Ikkilik sanoq sistemasida = ";
for(i=i-1 ;i>=0 ;i--)
{
cout<<a[i];
}
}
*/

/*
 #include <iostream>
 using namespace std;

 int main()
 {

   int b = 0;
    for(int i = 1000; i <= 10000; i++){
        if(i%15==0){
            b++;
        }
    }
    cout <<b;

     return 0;
 }
*/




/*
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	long bn1,bn2;
	int i=0, r=0;
	int sum[20];
	cout << "Ikkilik sanoq sistemasidagi sonlarni kiriting" << endl;
	cout << endl;
	cout << " Birinchi raqamni kiriting: ";
	cin>> bn1;
	cout << " Ikkinchi raqamni kiriting:";
	cin>> bn2;
  while (bn1 != 0 || bn2 != 0)
  {
   sum[i++] = (int)((bn1 % 10 + bn2 % 10 + r) % 2);
   r = (int)((bn1 % 10 + bn2 % 10 + r) / 2);
   bn1 = bn1 / 10;
   bn2 = bn2 / 10;
  }
  if (r != 0) {
   sum[i++] = r;
  }
  --i;
  cout<<" Kiriitilgan sonlarning javobi ";
  while (i >= 0) {
   cout<<(sum[i--]);
  }
   return 0;

 }
 */

#include <iostream>
using namespace std;
int main()
{

    float ton = 0.001;
     int kg;
    cin >> kg;
    ton * kg;
    cout << kg<< endl;

    return 0;
}




