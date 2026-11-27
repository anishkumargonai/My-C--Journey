// #include<iostream>
// using namespace std;
// int main(){
//     // 5 integers = 6 , 2, 7 , 18 ,45
//     int arr [5]; // Declaration mane eta 5 ta faka box toiri hoye galo 
//     // arr[0] = 6 ; // 1 no box e 6 galo eta ke INITIALISE / SETbole
//     // arr[1] = 2 ; // 2 no box e 2 galo eta ke INITIALISE bole
//     // arr[2] = 7 ; // 3 no box e 7 galo eta ke INITIALISE bole
//     // arr[3] = 18 ; //4  no box e 18 galo eta ke INITIALISE bole
//     // arr[4] = 45 ; // 5 no box e 45  galo eta ke INITIALISE bole
//  cout<<"Enter array elements : ";
//         for(int i=0; i<=4; i++){
//         cin>>arr[i] ;     // Output using loops 
//     }
//   cout<<"Array elements are : ";

//     for(int i=0; i<=4; i++){
//         cout <<arr[i]<< " ";     // Output using loops 
//     }


//      arr[0]=100; // Updating the value 
//     cout<<endl;
//     for(int i=0; i<=4; i++){
//         cout <<arr[i]<< " ";     // Output using loops 
//     }
// }

//     // cout<<arr[0]<<" ";
//     // cout<<arr[1]<<" ";
//     // cout<<arr[2]<<" ";
//     // cout<<arr[3]<<" ";nnn
//     // cout<<arr[4]<<" ";
 

#include<iostream>
using namespace std;
int main(){
int arr[5]={ 1 , 7 , 15, 18 ,45};
for (int i=0; i<=4; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
for (int i=4; i>=0; i--){
    cout<<arr[i]<<" ";
}


}
