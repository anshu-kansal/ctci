// Create a function called absolute_value that returns value of 
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