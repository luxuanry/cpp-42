#include "Point.hpp"

static Fixed check_side(Point const P1, Point const P2, Point const P3) {
    return (P1.getX() - P3.getX()) * (P2.getY() - P3.getY()) - (P2.getX() - P3.getX()) * (P1.getY() - P3.getY());
}

bool bsp(Point const a, Point const b, Point const c, Point const point){
    Fixed side_1 = check_side(point, a, b);
    Fixed side_2 = check_side(point, b, c);
    Fixed side_3 = check_side(point, c, a);

    bool all_positive(side_1 > 0 && side_2 > 0 &&side_3 > 0);
    bool all_negative(side_1 < 0 && side_2 < 0 && side_3 < 0);

    return (all_positive || all_negative);
}