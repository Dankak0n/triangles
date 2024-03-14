#ifndef TRIANGLES_SRC_POINT_H
#define TRIANGLES_SRC_POINT_H

#include <initializer_list>
#include <utility>

#include "helpers.h"

namespace geometry {

class Point {
private:
    double x {};
    double y {};
public:
    explicit Point();
    explicit Point(double _x, double _y);
    explicit Point(std::initializer_list<double> _i_list);
    Point(const Point& _other);
    ~Point() = default;

    Point& operator= (const Point& _other);
    bool   operator==(const Point& _other) const;
    bool   operator< (const Point& _other) const;
    
    double getX() const;
    double getY() const;
    std::pair<double, double> getCoords() const;

    void setX(double _x);
    void setY(double _y);
    void setCoords(double _x, double _y);
    void setCoords(std::pair<double, double> _cords);

    double getDistance(const Point& _other) const;
    double getNorm() const;
    double getSkewProduct(const Point& _other) const;
    Point        getVector(const Point& _other) const;
};

}

#endif //TRIANGLES_SRC_POINT_H