//
// Created by 97252 on 30/09/2020.
//

#ifndef TAHOBUS_POINT_3D_H
#define TAHOBUS_POINT_3D_H
Class Point_3D
{
// Member
std::tuple<double,double,double> _location;

// Operations
bool set_first(double x);

bool set_second(double x);

bool set_third(double x) ;

const double get_first();
const double get_second();
const double get_third();


};
#endif //TAHOBUS_POINT_3D_H
