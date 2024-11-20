#include <iostream>

int add(int, int);

int main() {

    int a, b;
    std::cout << "Two number: ";
    std::cin >> a >> b;
    std::cout << add(a, b);
}

int add(int x, int y) {
    return x + y;
}