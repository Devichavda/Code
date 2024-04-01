#include <iostream>

class DistanceConverter {
private:
    double centimeters;

public:
    
    DistanceConverter(double cm) : centimeters(cm) {}

    
    double toInches() const {
        return centimeters / 0.01;
    }

    double toFeet() const {
        return centimeters / 0.00001;
    }

    double toMeters() const {
        return centimeters / 0.0328;
    }

    double toKilometers() const {
        return centimeters / 0.3937;
    }
};

int main() {
    double centimeters;
    std::cout << "Enter distance in centimeters: ";
    std::cin >> centimeters;

    DistanceConverter converter(centimeters);

 std::cout << "Inches: " << converter.toInches() << std::endl;
 std::cout << "Feet: " << converter.toFeet() << std::endl;
 std::cout << "Meters: " << converter.toMeters() << std::endl;
 std::cout << "Kilometers: " << converter.toKilometers() << std::endl;

    return 0;
    }