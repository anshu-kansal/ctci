#include<iostream>
using namespace std;
//  double square(double x)
//  {
//     return x*x;
//  }
//  void print_square(double x)
//  {
//     cout<<"the square of " << x << " is "<<square(x)<<endl;
//  }
//  int main()
//  {
//     print_square(1.234);
//  }
void some_function(int d)
{
// double d = 2.2;
int i{7};
d=d+i;
cout<<d<<endl;
i= d*i;
cout<<i;
}
int main()
{
    some_function(12);
}