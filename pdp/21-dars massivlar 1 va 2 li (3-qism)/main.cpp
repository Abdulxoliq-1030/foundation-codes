


//1-o'lchovli massiv
#include <iostream>
using namespace std;

int main()
{

/*
//Kod yordamida to'g'ridan to'g'ri kiritish
int a[5];
a[0] = 5;
a[1] = 10;
cout << a[0] << "  " << a[1] << endl;
*/


/*
//consoldan kiritish
int a[5];
cin >> a[0];
cin >> a[1];
cout << a[0] << "  " << a[1] << endl;
*/



/*
//For operatori bilan nta sonlarni kirtitish kiritish
int n,s = 0;
cin >> n;
int a[n];
for(int i = 0; i < n; i++){
    cin >> a[i];
    cout << endl;

}
for(int i = 0; i < n; i++){
    cout <<  a[i] << endl;
   cout << endl;
   cout << endl;

}
*/



/*
//Juft elementlarni chiqarish
int n,s = 2;
cin >> n;

int a[n];

for(int i = 0; i < n; i++){
        a[i] = s;
        s = s + 2;
    cout << endl;
}
for (int i = 0; i < n; i++){

    cout << a[i] << endl;
}
*/


/*
//Elementlarni eng kattasini topish topish
int n;
cin >> n;
int a[n];
for(int i = 0; i < n; i++){
    cin >> a[i];
}
int Max = a[0];

for(int i = 0; i < n; i++){

    if(a[i] > Max){
        Max = a[i];

    }
}
cout << Max << endl;
*/



/*
// Kiritilgan barcha elementlarni yi'gindisi topish
int n;
cout << "Massiv elementi soni ";
cin >> n;

int a[n];
for(int i = 0; i < n; i++){

    cin >> a[i];
}
int s = 0;
for(int i = 0; i < n; i++){
    s += a[i];
}
cout << "Natija " << s << endl;
*/



/*
//Elementlarni teskari tartibda chiqarish
int n;
cin >> n;
int a[n];
for(int i = 0; i < n; i++){
    cin >> a[i];
}
int Max = a[0];

for(int i = n-1; i >= 0; i--){

    cout << a[i] << endl;
}
*/





/*
// Elementlarni teskari tartibda chiqarish
int n;
cin >> n;
int a[n] , b[n];
for(int i = 0; i < n; i++){
    cin >> a[i];
}
int Max = a[0];

for(int i = 0; i < n; i++){

    b[i] = a[n-1-i];
}

for(int i = 0; i < n; i++){
    cout << b[i] << "  ";
}
*/


/*
//Elementlarini ornini almashtirish

int n,k,l;
cin >> n >> k >> l;
int a[n],b[n];

for(int i = 0; i < n; i++){
    cin >> a[i];
}
for(int i = 0; i < n; i++){
    b[i] = a[i];

if(l == k){
    b[k] = a[l];
    continue;
}
if(i == l){
    b[l] = a[k];
    continue;

}
    b[i] = a[i];

}

for(int i = 0; i < n; i++){

    cout << b[i] << " ";
}

    return 0;
}
*/



/*
//2 o'lchovli massiv
#include <iostream>
using namespace std;
int main()
{

    int n,m;
    cin >> n >> m;

    int a[n][m];

    for(int i = 0; i < n; i++){

    for(int j = 0; j < n; j++) {
        cout << "a[" << i << "][" << j << "] = ";
        cin >> a[i][j];
    }
    }

    for(int i = 0; i < n; i++){

    for(int j = 0; j < n; j++) {

        cout <<  a[i][j] << "  " ;
    }
    }

*/


    /*
    // Kiritilgan sonlarni eng kattasini topish ikki o'lchovli massivda
    int n,m;
    cin >> n >> m;

    int a[n][m];

    for(int i = 0; i < n; i++){

    for(int j = 0; j < n; j++) {
        cout << "a[" << i << "][" << j << "] = ";
        cin >> a[i][j];
    }
    }
    int Max = a[1][0];
    for(int i = 0; i < n; i++){

    for(int j = 0; j < n; j++) {

        if( Max < a[i][j]){
         Max = a[i][j];
        }
    }
    }
    cout << " Natija " << Max << endl;
    */



/*

    //2 o'lchovli massivda katta va kichik sonlarni topish
    int n,m;
    cin >> n >> m;

    int a[n][m];

    for(int i = 0; i < n; i++)
    {

        for(int j = 0; j < m; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
    int Max = a[1][0];
    int Min = a[1][0];
    for(int i = 0; i < n; i++)
    {

        for(int j = 0; j < m; j++)
        {

            if( Max < a[i][j])
            {
                Max = a[i][j];
            }
            else if( Min > a[i][j])
            {
                Min = a[i][j];
            }
        }
    }
    cout << " Natija " << Max << endl;
    cout << " Natija " << Min << endl;
*/

    return 0;
}

