#include<iostream>
using namespace std;
int add(int a,  int b)
{
    return a+b;
}
int main()
{
    int x;
    int y;

    cout<<"Enter x: " <<endl;
    cin>>x ;
    cout<<"Enter y: " <<endl;
    cin>>y ;

    int sum = add(x,y);
    cout<<"The sum of x and y is: " << sum ;
    return sum;
}