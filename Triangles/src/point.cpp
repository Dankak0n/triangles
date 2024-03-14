#include <initializer_list>
#include <utility>
#include <cmath>
#include <limits>

#include "helpers.h"
#include "point.h"

namespace geometry {

Point::Point()
{}

Point::Point(double _x, double _y) :
x {_x}, y {_y} {}

Point::Point(std::initializer_list<double> _i_list) :
x { *_i_list.begin() }, y { *(_i_list.begin() + 1) } {}

Point::Point(const Point& _other) :
x {_other.x}, y {_other.y} {}

Point& Point::operator= (const Point& _other) {
    x = _other.x;
    y = _other.y;
    return *this;
}
bool Point::operator< (const Point& _other) const {
    if (!helpers::_equalDouble(x, _other.x)) {
        return helpers::_lessDouble(x, _other.x);
    }
    return helpers::_lessDouble(y, _other.y);
}
bool Point::operator==(const Point& _other) const {
    return helpers::_equalDouble(x, _other.x) && helpers::_equalDouble(y, _other.y);
}

double Point::getX() const { return x; }
double Point::getY() const { return y; }
std::pair<double, double> Point::getCoords() const {
    return std::pair<double, double>{x, y};
}
void Point::setX(double _x) { x = _x; }
void Point::setY(double _y) { y = _y; }
void Point::setCoords(double _x, double _y) {
    x = _x; y = _y;
}
void Point::setCoords(std::pair<double, double> _cords) {
    x = _cords.first;
    y = _cords.second;
}
double Point::getDistance(const Point& _other) const {
    return sqrt( (x - _other.x) * (x - _other.x) + (y - _other.y, 2) * (y - _other.y, 2) );
}
double Point::getNorm() const {
    return this->getDistance( Point{0, 0} );
}
double Point::getSkewProduct(const Point& _other) const {
    return x * _other.y - _other.x * y;
}
Point Point::getVector(const Point& _other) const {
    return Point{_other.x - x, _other.y - y};
}

}