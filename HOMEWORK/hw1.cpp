#include<iostream>
using namespace std;
int main(){
    int length,breadth, area, perimeter;
    cout<<"Enter length: ";
    cin>>length;
    cout<<"Enter breadth";
    cin>>breadth;
   area=(length*breadth);
    perimeter=2*(length+breadth);
    if (perimeter>area) cout<<"Perimeter is bigger";
    else if(area>perimeter) cout<<"Area is bigger";
    else cout<<"Both are equal";
}