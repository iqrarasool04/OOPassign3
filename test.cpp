#include <iostream>
#include "cylinder.h"
using namespace std;

int main(){
    float x,y,r,h;
    cout<<"Enter Point (center): ";
    cin>>x>>y;
    cout<<endl;
    cout<<"Enter radius: ";
    cin>>r;
    cout<<endl;
    cout<<"Enter height: ";
    cin>>h;
    cout<<endl;
    Cylinder c(x,y,r,h);
    c.display();
}