#include <iostream>
using namespace std;
int main ()
{
// local variable declaration:
int a = 100;
int b = 200;
switch(a) {
case 100:
cout << "This is part of outer switch" << endl;
switch(b) {
case 200:
cout << "This is part of inner switch" << endl;
}
}
cout << "Exact value of a is : " << a << endl;
cout << "Exact value of b is : " << b << endl;
return 0;
}
/*
O/P:
This is part of outer switch
This is part of inner switch
Exact value of a is : 100
Exact value of b is : 200
*/