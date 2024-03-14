#include <vector>
#include <iostream>

// #include <SFML/Window.hpp>

#include "logic.h"
#include "point.h"
#include "polygon.h"
#include "triangle.h"

void Logic::justDraw() {

}
void Logic::grabbingTriangle() {

}
void Logic::addingTriangle() {

}
void Logic::renew() {
    if (polygons.size() == 0) {
        return;
    }
    if (polygons.size() == 1) {
        intersection_polygon = polygons[0];
        return;
    }
    geometry::ConvexPolygon new_intersection_polygon = polygons[0];
    for (size_t pos = 1; pos < polygons.size(); pos++) {
        new_intersection_polygon = geometry::getIntersection(new_intersection_polygon, polygons[pos]);
    }
}
void Logic::debug() {
    geometry::ConvexPolygon p = intersection_polygon;
    std::cout << "[]: ";
    for (int i = 0; i < p.size(); i++) {
        std::cout << p.getPointAt(i).getX() << ' ' << p.getPointAt(i).getY() << std::endl;
    }
    std::cout << std::endl;
}

void Logic::start() {
    // sf::Window window(sf::VideoMode(800, 600), "My window");

    // // run the program as long as the window is open
    // while (window.isOpen())
    // {
    //     // check all the window's events that were triggered since the last iteration of the loop
    //     sf::Event event;
    //     while (window.pollEvent(event))
    //     {
    //         // "close requested" event: we close the window
    //         if (event.type == sf::Event::Closed)
    //             window.close();
    //     }
    // }

    return;
}
