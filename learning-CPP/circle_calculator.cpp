#include <iostream>

int main() {
    const double PI = 3.14159;
    double radius;
    std::cout << "Radius of circle: ";
    std::cin >> radius;
    radius = (double) radius;
    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;
    std::cout << "The area of the circle is " << area << "cm^2." << '\n';
    std::cout << "The circumference of the circle is " << circumference << "cm^2." << '\n';
    return 0;
}