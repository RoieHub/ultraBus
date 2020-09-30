//
// Created by 97252 on 30/09/2020.
//

#ifndef TAHOBUS_POINT_3D_H
#define TAHOBUS_POINT_3D_H
#include<iostream>
#include <tuple>
class Point_3D
{
private:
// Member
std::tuple<double,double,double> _location; // Need to find what the bug

    bool set_first(double x);

    bool set_second(double x);

    bool set_third(double x) ;
public:
// Constructor
Point_3D(double x,double y,double z)
    {
    set_first(x);
    set_second(y);
    set_third(z);
    }

// Operations

const double get_first();
const double get_second();
const double get_third();


};
#endif //TAHOBUS_POINT_3D_H
