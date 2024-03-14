#ifndef TRIANGLES_SRC_TRIANGLE_H
#define TRIANGLES_SRC_TRIANGLE_H

#include <array>

#include "point.h"
#include "helpers.h"

namespace geometry {

class ConvexPolygon;

class Triangle : public ConvexPolygon {
public:
    explicit Triangle();
    explicit Triangle(const geometry::Point& _a,
                      const geometry::Point& _b,
                      const geometry::Point& _c);
    explicit Triangle(const std::array<geometry::Point, 3>& _point_array);

    operator geometry::ConvexPolygon() const;
    
    virtual ~Triangle() = default;

    double area() const override;
};

}

#endif //TRIANGLES_SRC_TRIANGLE_H