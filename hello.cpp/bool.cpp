#include<iostream>
using namespace std;

// bool accept2()
// {
// cout << "Do you want to proceed (y or n)?<<endl";
// char answer = 0;
// cin >> answer;
// switch (answer) 
// {
// case 'y':
// return true;
// case 'n':
// return false;
// default:
// cout << "I'll take that for a no.<<endl";
// return false;
// }
// }
// int main()
// {
//     if (accept2())
//     {
//         cout << "User wants to proceed.<<endl";
//             }
//     else
//     {
//         cout << "User chose not to proceed. <<endl";
//         }

//     return 0;
// }
int main()
{
    int x=1;
    while(x<4)
    {
        cout<<"Do you want to proceed(y or n )?"<<endl;
        char answer = 0;
        cin>> answer;

        switch(answer)
        {
              case 'y' :
                 cout<<"You are going forward"<<endl;
                 break;
              
              case 'n':
                 cout<<"You are exiting"<<endl;
                 break;
             
              default:
                 cout<<"No input"<<endl;
             
        }
          ++x;
    }
    cout<<"I'll take that for no reason"<<endl;
    return false;
    
}