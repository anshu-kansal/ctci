#include<iostream>
using namespace std;
// int main()
// {
//    cout<<("Hello, World!");
//    return 0;
// }

// int main()
// {
//    int the_answer=42;
//     int lucky_number= the_answer/6;
//     cout<< lucky_number;
//     return 0;
// }

// int main()
// {
//    int a = 3;
//     int b = 5;
//    float c = 43.2;
//    bool d = true  ;
//     cout<<c/a;
//     return 0;
// }
// int main()
// {
//     int x = 100;
//     if(x > 100){
//         cout<< "X is greater than 100 "<<endl;
//         cout<< x ;
//     }  
//     else if(x==100){
//         cout<<"X is equal to 100";
//     }
//     else{
//         cout<<"X is less than 100";
//     }
//add function    
    int add(int a, int b)
    {
     return a+b ; 
    }
     int main(){
     int a ;
     int b;
     cout<<"Enter a: "<<endl;
     cin>> a  ;
     cout<<"Enter b: "<<endl;
     cin>> b  ;

     int sum = add(a,b);
     cout<<"sum of "<< a <<" and " << b << " is : " <<sum<<endl;
     

     int x;
     int y;
     cout<<"Enter x: "<<endl;
     cin>> x  ;
     cout<<"Enter y: "<<endl;
     cin>> y  ;
     int addition = add(x,y);
     cout<<"sum of "<< x <<" and " << y << " is : "<<  addition ;
     return 0;
    
    }
