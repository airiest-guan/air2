#include <iostream>
#include <cmath>

// Function to calculate the area of a regular hexagon
double calculateHexagonArea(double sideLength) {
    return (3.0 * std::sqrt(3.0) / 2.0) * std::pow(sideLength, 2);
}

int main() {
    double sideLength;

    // Get the side length from the user
    std::cout << "Enter the side length of the regular hexagon: ";
    std::cin >> sideLength;

    // Calculate and display the area of the regular hexagon
    double hexagonArea = calculateHexagonArea(sideLength);

    std::cout << "Area of the regular hexagon: " << hexagonArea << std::endl;

    return 0;
}
