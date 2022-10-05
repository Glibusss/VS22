#define _CRT_SECURE_NO_WARNINGS 
#include "massiv.h"
#include "pnt.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
   
    point pt(5);
    cout << pt[2] << endl;

    return 0;
}