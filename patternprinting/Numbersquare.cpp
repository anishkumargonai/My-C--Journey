#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter value of n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for (int j=1;j<=n;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }               
// }      eta kora hole pattern hoba 1 1 1 1 
                                     2 2 2 2
                                     3 3 3 3
                                     4 4 4 4