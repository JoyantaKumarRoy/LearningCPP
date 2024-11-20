#include <iostream>

int add(int, int);
double add(double, double);

int main() {

    double a, b;
    std::cout << "Two number: ";
    std::cin >> a >> b;
    std::cout << add(a, b);
}

int add(int x, int y) {
    return x + y;
}
double add(double x, double y) {
    return x + y;
}