#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int main()
{

    /*
int x[3][2] = {{0,1},{2,3},{4,5}};

cout << "Old Array " << endl;

for (int i = 0; i < 3; i++){
    for(int j = 0; j < 2; j++){
        cout << "Element at x[" << i << "][" << j << "]: ";
        cout << x[i][j] << endl;
    }
}

x[0][0] = 10;
x[0][1] = 20;
x[2][0] = 30;


   cout << "\nChanged array: \n";

   for(int i = 0; i < 3; i++){
    for(int j = 0; j < 2; j++){
        cout << "Element at x[" << i << "][" << j << "]: ";
        cout << x[i][j] << endl;
    }
   }

   */



/*
   int x[4][3]= {
     {0,1,9}
    ,{2,3,9}
    ,{4,5,9}
    ,{6,7,8}
    };
    for(int i=0 ; i<4; i++)
    {
        for(int j = 0 ; j<3 ; j++ )
        {
            cout<<"| X ["<<i<<"]"<<"["<<j<<"] = ";
            cout<<x[i][j];
        }
        cout<<" |"<<endl;
    }
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;


    //qiymatini o'zgartirish
    x[0][0]=6;
    x[1][1]=6;


    for(int i=0 ; i<4; i++)
    {
        for(int j = 0 ; j<3 ; j++ )
        {
            cout<<"| X ["<<i<<"]"<<"["<<j<<"] = ";
            cout<<x[i][j];
        }
        cout<<" |"<<endl;
    }
*/


/*
int n,m;
cin >> n >> m;
   int x[n][m];
    for(int i=0 ; i<n; i++)
    {
        for(int j = 0 ; j<m; j++ )
        {
            cout<<"| X ["<<i<<"]"<<"["<<j<<"] = ";
            cin >> x[i][j];
        }
        cout<<" |"<<endl;
    }
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;


    for(int i=0 ; i<n; i++)
    {
        for(int j = 0 ; j<m; j++ )
        {
            cout<<"| X ["<<i<<"]"<<"["<<j<<"] = ";
            cout<<x[i][j];
        }
        cout<<" |"<<endl;
    }

*/



/*
//Massivni yig'indilarini bir biriga qo'shish

int n,m,s = 0;
cin >> n >> m;
   int x[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j = 0; j<m; j++ )
        {
            cout<<"| X ["<<i<<"]"<<"["<<j<<"] = ";
            cin >> x[i][j];
            s = s + x[i][j];
        }
        cout <<"                s = " << s << endl;
        cout <<  " | " << endl;
        s = 0;


    }
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;

    for(int i=0 ; i<n; i++)
    {
        for(int j = 0 ; j<m; j++ )
        {
            cout<<"| X ["<<i<<"]"<<"["<<j<<"] = ";

            cout<<x[i][j];

        }
        cout<<" |"<<endl;
    }
*/





/*
//Massivlarni yig'indisini eng kattasini topish

    int n,m;
    cin >> n ;
    cin >> m ;

    int x[n][m],s[n];
    for(int i=0 ; i<n; i++)
    {
        for(int j = 0 ; j<m ; j++ )
        {
            cout<<"| X ["<<i<<"]"<<"["<<j<<"] = ";
            cin>>x[i][j];
        }
        cout<<" |"<<endl;
    }

    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;

    for(int i=0 ; i<n; i++)
    {
        for(int j = 0 ; j<m ; j++ )
        {
            cout<<"| X ["<<i<<"]"<<"["<<j<<"] = ";
            cout<<x[i][j];
            s[i]=s[i]+x[i][j];
        }
        cout<<"               S = "<<s[i];
        cout<<" |"<<endl;
    }
    int maximal=s[0];
    for(int i = 0 ; i < n ; i++){
        if(maximal<s[i]){
            maximal=s[i];
        }
    }
    cout<<" maksimali:"<<maximal;
*/


/*
//satr ichidagi raqamlarni yig'indisini topish
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
*/




/*
//Berilgan matndagi katta kichik harflarni nechtaligini tekshirish

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
*/

/*
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
*/




/*
//Katta harflarni kichikka kichiklarni kattaga o'tkazish
    string a;
    getline(cin , a);
    for(int i=0;i<a.length();i++){
        if(islower(a[i])){
            a[i]=toupper(a[i]);
        }
        else if(isupper(a[i])){
            a[i]=tolower(a[i]);
        }

    }
    cout<<a<<endl;
*/




    return 0;
}
