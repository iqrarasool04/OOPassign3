#include <iostream>
#include "cylinder.h"
using namespace std;

Point::Point(){
    x = 0;
    y = 0;
}
Point::Point(float a, float b){
    set_x(a);
    set_y(b);
}
void Point::set_x(float a){
    x = a;
}
void Point::set_y(float b){
    y = b;
}
float Point::get_x(){
    return x;
}
float Point::get_y(){
    return y;
}
void Point::display(){
    cout<<"Point is ("<<x<<","<<y<<")"<<endl;
}

Circle::Circle():Point(){
    radius = 0;
}
Circle::Circle(float a, float b, float r): Point(a, b){
    set_radius(r);
}
void Circle::set_radius(float r){
    radius = r;
}
float Circle::get_radius(){
    return radius;
}
float Circle::calculate_area(){
    return (radius*radius)*3.14;
}
float Circle::calculate_circumference(){
    return 2*3.14*radius;
}
void Circle::display(){
    cout<<"Area of circle is "<<calculate_area()<<endl;
    cout<<"Circumference of circle is "<<calculate_circumference()<<endl;
}

Cylinder::Cylinder(): Circle(){
    height = 0;
}
Cylinder::Cylinder(float a, float b, float r, float h): Circle(a, b, r){
    set_height(h);
}
void Cylinder::set_height(float h){
    height = h;
}
float Cylinder::get_height(){
    return height;
}
float Cylinder::calculate_area(){
    return (Circle::calculate_circumference()*height)+(Circle::calculate_area()*2);
}
float Cylinder::calculate_volume(){
    return Circle::calculate_area()*height;
}
void Cylinder::display(){
    cout<<"Surface area of cylinder is "<<calculate_area()<<endl;
    cout<<"Volume of cylinder is "<<calculate_volume()<<endl;
}