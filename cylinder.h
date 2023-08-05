#ifndef CYLINDER_H
#define CYLINDER_H

#include <iostream>

class Point{
    private:
    float x;
    float y;
    
    public:
    Point();
    Point(float a, float b);
    void set_x(float a);
    void set_y(float b);
    float get_x();
    float get_y();
    void display();
};
class Circle: public Point{
    private:
    float radius;
    
    public:
    Circle();
    Circle(float a, float b, float r);
    void set_radius(float r);
    float get_radius();
    float calculate_area();
    float calculate_circumference();
    void display();
};
class Cylinder: public Circle{
    private:
    float height;
    
    public:
    Cylinder();
    Cylinder(float a, float b, float r, float h);
    void set_height(float h);
    float get_height();
    float calculate_area();
    float calculate_volume();
    void display();
};

#endif