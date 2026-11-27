#include<iostream>
#include<vector>
using namespace std;
int main(){
// vector<int>v; // It's an empty vector of zero size and zero capacity
vector<int>arr(5, 18); // index 0 to 4
int n= arr.size() ;
for (int i=0; i<5;i++){
    cout<<arr[i]<<"    "; 
}
cout<<endl;
arr.push_back(10);
arr.push_back(8);
arr.pop_back(); // remove last element
for (int i=0; i<arr.size() ;i++){
    cout<<arr[i]<<"    "; 
}
} 