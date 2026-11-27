#include<iostream>
using namespace std;
int main (){
    double radius, volume;
    double pi =3.1415;
    cout<<"Enter radius: ";
    cin>>radius;
    volume=(4.0/3.0)*pi*radius*radius*radius;
    cout<<"Volume= "<<volume;
}