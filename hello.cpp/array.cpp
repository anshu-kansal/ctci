// #include<iostream>
// using namespace std;

// int main()
// {
// int arr[i]={1,2};
// // cout<<"Enter elements"<<endl;
// // for(int i =0; i<2 ; ++i)
// // {
    
// //     cin>>arr[i];
// // }
// cout<<"eneterd elements: "<<endl;
// // for(int i =0; i<2 ; ++i)
// // {
// //     cout<<arr[i]<<" "<<endl;
// // }
// print();
// return 0;

// }

// void print(arr[i])
// {
//     for(int i =0; i<2 ; ++i)
// {
//     cout<<arr[i]<<" "<<endl;
// }
// }

#include<iostream>
using namespace std;

void print(int arr[], int size) {
    cout << "Entered elements: " << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[2];
    // int size = sizeof(arr) / sizeof(arr[0]);
    int size = 2;
    for(int i = 0 ; i <2 ; ++i)
    {  
        cin>>arr[i];
    }
   
    print(arr, size);

    return 0;
}
