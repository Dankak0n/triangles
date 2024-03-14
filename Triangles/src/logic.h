#ifndef TRIANGLES_SRC_LOGIC_H
#define TRIANGLES_SRC_LOGIC_H

#include <vector>

#include "point.h"
#include "polygon.h"
#include "triangle.h"

enum status_t {NOTHING, GRABBING, CREATING};

class Logic {
private:
    std::vector<geometry::Triangle> triangles {};
    geometry::ConvexPolygon intersection_polygon {};
    status_t status = NOTHING;
    bool is_debug = false;
public:
    Logic(bool _is_debug = false) : is_debug(_is_debug) {}
    Logic() = default;
    ~Logic() = default;

    void debug();
    void justDraw();
    void addingTriangle();
    void grabbingTriangle();
    void renew();
    void start();
};

#endif //TRIANGLES_SRC_LOGIC_H