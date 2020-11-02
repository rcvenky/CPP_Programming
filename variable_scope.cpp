#include <iostream>
using namespace std;
int main ()
{
// Local variable declaration:
int a, b;
int c;
// actual initialization
a = 10;
b = 20;
c = a + b;
cout << c;
return 0;
}

//O/P: 30

#include <iostream>
using namespace std;
// Global variable declaration:
int g;
int main ()
{
// Local variable declaration:
int a, b;
// actual initialization
a = 10;
b = 20;
g = a + b;
cout << g;
return 0;
}

//O/P: 30

#include <iostream>
using namespace std;
// Global variable declaration:
int g = 20;
int main ()
{
// Local variable declaration:
int g = 10;
cout << g;
return 0;
}

//O/P: 10