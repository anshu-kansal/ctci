#include<iostream>
using namespace std;
//  int main()
//  {
//     auto i = 123;
//     auto d = 1.45;
//     auto b = true;
//     auto ch = 'x';

//     cout<<i<<endl;
//     cout<<d<<endl;
//     cout<<b<<endl;

//     return 0;
//  }

// void sqrt(double d)
// {
//     d *= d;
//     cout<<d;
// }
// int main()
// {
//     int y = 34;
//     int x = 64;
//     // x+=y;
//     x-=y;
//     cout<<x;
// }
//  int square(const int x)
// {
// x*=x;
// cout<<x;
// }
// int main()
// {
//     const int x = 17;
//     // int var = 17;
//     constexpr double max1= 1.4*square(x);
//     cout<<max1;
// }


constexpr int square(const int x)
{
    int result = x * x;
    cout << result;
    return result;
}

int main()
{
    const int x = 17;
    // int var = 17;
    constexpr double max1 = 1.4 * square(x);
    cout << max1;

    return 0;
}
