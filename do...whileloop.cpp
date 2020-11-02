#include <iostream>
using namespace std;
int main ()
{
// Local variable declaration:
int a = 10;
// do loop execution
do
{
cout << "value of a: " << a << endl;
a = a + 1;
}while( a < 20 );
return 0;
}
/*

O/P:

value of a: 10
value of a: 11
value of a: 12
value of a: 13
value of a: 14
value of a: 15
value of a: 16
value of a: 17
value of a: 18
value of a: 19

*/