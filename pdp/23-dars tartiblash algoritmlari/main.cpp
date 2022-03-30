/*
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    /*
    // Sonlarni eng kattasini topish
  int a,maxi,b;
    cout << "Sonlarni kiriting " << endl;
    cin >> a >> b;

    maxi = b;

    while(a > 1)
    {
        cin >> b;
        a--;

        if(maxi < b)
        {
            maxi = b;
        }
    }
    cout << "Eng katta son " << maxi << endl;
    */




/*
    //Eng kattasi va eng kichigini topish
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

   int  katta = a[0];
   int   kichik = a[0];

    for(int i = 0; i < n; i++)
    {
        if(katta < a[i])
        {
          katta = a[i];
        }
        if(kichik > a[i])
        {
            kichik = a[i];
        }
    }
    cout << "Eng kattasi = " << katta << endl;
    cout << "Eng kichigi = " << kichik << endl;
*/



/*
//Random funksiyasi bilan katta va kichik sonlarni topish

 int  n,maxi,mini,x;
    cout<<" n = ";
    cin>>n;
    float a[n];
    srand(time(0));
    for(int i=0;i<n;i++){
        a[i]=rand()%1000;
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }

    mini=a[0];
    maxi=a[0];

    for(int  i = 0; i< n ; i++ ){
        if(maxi<a[i]){
            maxi=a[i];
        }
        if(mini>a[i]){
            mini=a[i];
        }
    }

    cout<<" minimal "<<mini;
    cout<<" maximal "<<maxi;

*/





/*
//Sonlarni tartiblab chiqarib berish
    int n, temp;
    cin>>n;
     int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 1 + i; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "Array list after sorting:";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }


    return 0;
}
*/




#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{

 int n,maxi,mini,x;
 cout << " n = ";
 cin >> n;
 float a[n];
 srand(time(0));

 for(int i = 0; i < n; i++)
 {
     a[i] = rand() % 100;
 }

 cout << " " << endl;
 cout << " " << endl;
 for(int i = 0; i < n; i++)
 {
     cout << a[i] << endl;
 }

    int min_index;

for(int i = 0; i < n; i++)
{
    min_index = i;
    for(int j = i + 1; j < n; j++)
    {
        if(a[j] < a[min_index])
        {
            min_index = j;
        }
    }
    swap(a[min_index], a[i]);
}
cout << endl;
cout << endl;
for(int i = 0; i < n; i++)
{
    cout << a[i] << endl;
}
    return 0;
}
