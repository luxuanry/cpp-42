#include "Point.hpp"

void check_point(Point const a, Point const b, Point const c, Point const point, std::string const description){
    std::cout << "Checking point " << description << ": ";
    if(bsp(a, b, c, point))
        std::cout << "The point is inside the triangle." << std::endl;
    else
        std::cout << "The point is outside the triangle or one the edge." << std::endl; 
}

int main(void){
    Point const a(0, 0);
    Point const b(6, 0);
    Point const c(0, 4);
    Point const point(0, 2);
    check_point(a, b, c, point, "on the edge(0,2)");

    return 0;
}