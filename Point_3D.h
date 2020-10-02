//
// Created by 97252 on 30/09/2020.
//

#ifndef TAHOBUS_POINT_3D_H
#define TAHOBUS_POINT_3D_H
#include<iostream>
#include <tuple>
#include <vector>
class Point_3D
{
private:
    std::vector<double> _location = std::vector<double>(3,0) ; // Not optimized


    // Constructor
    Point_3D(double x, double y ,  double z)
    {
        _location[0] =x;
        _location[1] =y;
        _location[2] =z;

    };

    Point_3D(std::vector<double> point )
    {
        if(point.size() != 3)
            throw std::invalid_argument( "Point is not a 3D point" );
        else(_location = point);

    }

    double get_x() const
    {
        return _location[0];
    }
    double get_y() const
    {
        return _location[1];
    }
    double get_z() const
    {
        return _location[2];
    }
};

/**
 * Point 3D tuple based
 */
/**
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
**/

#endif //TAHOBUS_POINT_3D_H
