// Create a function called absolute_value that returns absolute value of its single argument.
//The absolute value of an integer x is the following: x (itself) 
//if x is greater than or equal to 0; otherwise, it is x times −1.
#include<iostream>
using namespace std;
int absolute_value(int x)
{
if(x>=0)
{
return x;
}
else{
    x= x*-1;
    return x;
}

}
int main()
{
    int x;
    cout<<"Enter the value of x : "<<endl;
    cin>>x;
     
     int output = absolute_value(x);
     cout<<output;
}