#include <iostream>
using namespace std;
main()
{
int a = 21;
int b = 10;
int c ;
c = a + b;
cout << "Line 1 - Value of c is :" << c << endl ;
c = a - b;
cout << "Line 2 - Value of c is :" << c << endl ;
c = a * b;
cout << "Line 3 - Value of c is :" << c << endl ;
c = a / b;
cout << "Line 4 - Value of c is :" << c << endl ;
c = a % b;
cout << "Line 5 - Value of c is :" << c << endl ;
c = a++;
cout << "Line 6 - Value of c is :" << c << endl ;
c = a--;
cout << "Line 7 - Value of c is :" << c << endl ;
return 0;
}

/*
O/P:

Line 1 - Value of c is :31
Line 2 - Value of c is :11
Line 3 - Value of c is :210
Line 4 - Value of c is :2
Line 5 - Value of c is :1
Line 6 - Value of c is :21
Line 7 - Value of c is :22

*/