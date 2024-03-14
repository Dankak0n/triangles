#include <array>
#include <cmath>

#include "point.h"
#include "helpers.h"
#include "polygon.h"
#include "triangle.h"

namespace geometry {

using Vector2 = Point;

Triangle::Triangle() :
ConvexPolygon(3) {}

Triangle::Triangle(const geometry::Point& _a,
                            const geometry::Point& _b,
                            const geometry::Point& _c) :
ConvexPolygon{_a, _b, _c} {}

Triangle::Triangle(const std::array<geometry::Point, 3>& _point_array) :
ConvexPolygon{_point_array[0], _point_array[1], _point_array[2]} {}

Triangle::operator geometry::ConvexPolygon() const {
    return geometry::ConvexPolygon(getAllPoints());
}

double Triangle::area() const {
    Vector2 side_a = getPointAt(0).getVector(getPointAt(1));
    Vector2 side_b = getPointAt(0).getVector(getPointAt(2));
    double skew_product = side_a.getSkewProduct(side_b);
    return abs(skew_product) / 2.0;
}

}