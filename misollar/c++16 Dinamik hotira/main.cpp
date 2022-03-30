//Dinamik xotiralar
//C++ dasturlash tilida hotira 2 xil boladi 1-stack,2-heap deb yuritiladi
//Bizda ko'proq stack korinishida joylashib boradi

#include <iostream>

using namespace std;

int main()
{
/*
 int *p = new int; // bu dinamik hotira turiga o'tkazildi

 *p = 5;

    delete p;// dangling pointer

 p = new int;
*/

int *p = NULL;

p = new int[20];

//delete operatori bu orqali biz berilgan pointerni o'chiramiz
delete[] p;


    return 0;
}
