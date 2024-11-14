#include <iostream>
#include <stdexcept>  

double divide(double numerator, double denominator) {
    if (denominator == 0) {
        throw std::invalid_argument("Error: Division by zero is not allowed.");
    }
    return numerator / denominator;
}

int main() {
    double num, den;

    std::cout << "Enter the numerator: ";
    std::cin >> num;

    std::cout << "Enter the denominator: ";
    std::cin >> den;

    try {
       
        double result = divide(num, den);
        std::cout << "Result: " << result << std::endl;
    }
    catch (const std::invalid_argument& e) {
        
        std::cout << "Exception: " << e.what() << std::endl;
    }
    catch (const std::exception& e) {
        
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "Program ended." << std::endl;

    return 0;
}
