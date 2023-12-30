#include<iostream>
using namespace std;

int main()
{   
    int age;
    cout<<"Enter your age:";
    cin>>age;

    // if(age>18)
    // {
    //     cout<<true;
    //     return 0;
    // }
    // else{
    //     cout<<false;
    //     return 0;
    // }


    if (age > 18) {
        cout << "false";
    } else if (age < 18) {
        cout << "true";
    } else {
        cout << "Nothing has entered";
    }

    return 0;
}




