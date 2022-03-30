#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    /*
    //Eng katta va eng kichigini yig'indisini topish
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    int Max = a[0];
    int Min = a[0];
    for(int i = 0; i < n; i++){
        if(Max < a[i]){
            Max = a[i];
        }
        if(Min > a[i]){
            Min = a[i];
        }
    }
cout << "Eng katta va eng kichigini yi'gindisi =  ";
cout << Max << " + " << Min << " = " << Max + Min << endl;

*/


/*
//kiritilgan satrlarni nechta harfdan iboratligini  topish
string s;
getline(cin,s);

int countr = 0;
int max_w = -1;
int len = s.length();
string max = "  ";
string x = "  ";

for(int i = 0; i < len; i++)
{
    if(s[i] != ' ')
    {
        countr++;
    }
    if(s[i] == ' ' || i == len - 1)
    {

        if(countr > max_w)
        {
            max_w = countr;

        }
        if(i == len - 1)
        {
            max = s.substr(i + 1 - max_w,max_w);
        } else
        {
            max = s.substr(i - max_w,max_w);
        }
        countr = 0;
    }
}
cout << max_w << " " << max << endl;
*/





    return 0;
}



