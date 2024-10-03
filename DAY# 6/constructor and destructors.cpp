#include <iostream>
class Rectangle {
private:
    double width;
    double height;
public:
    // Default constructor
    Rectangle() : width(1.0), height(1.0) {
        std::cout << "Default constructor called." << std::endl;
    }
    // Parametric constructor
    Rectangle(double w, double h) : width(w), height(h) {
        std::cout << "Parametric constructor called." << std::endl;
    }
    // Constructor with default arguments
    Rectangle(double w) : width(w), height(1.0) {
        std::cout << "Constructor with default argument called." << std::endl;
    }
    // Copy constructor
    Rectangle(const Rectangle &rect) {
        width = rect.width;
        height = rect.height;
        std::cout << "Copy constructor called." << std::endl;
    }
    // Destructor
    ~Rectangle() {
        std::cout << "Destructor called." << std::endl;
    }
    // area
    double area() const {
        return width * height;
    }
    void display() const {
        std::cout << "Width: " << width << ", Height: " << height << std::endl;
    }
};
int main() {
    // Using the default constructor
    Rectangle rect1;
    rect1.display();
    std::cout << "Area: " << rect1.area() << std::endl;
    
    // Using the parametric constructor
    Rectangle rect2(4.0, 5.0);
    rect2.display();
    std::cout << "Area: " << rect2.area() << std::endl;

    // Using the constructor with default argument
    Rectangle rect3(3.0);
    rect3.display();
    std::cout << "Area: " << rect3.area() << std::endl;

    // Using the copy constructor
    Rectangle rect4 = rect2;
    rect4.display();
    std::cout << "Area: " << rect4.area() << std::endl;

    return 0;
}
