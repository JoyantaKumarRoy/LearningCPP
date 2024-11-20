#include <iostream>
#include <cmath>

float calculate(float, float, char);

int main() {
    float a, b;
    char op;
    std::cout << "Calculate: ";
    std::cin >> a >> op >> b;
    std::cout << calculate(a, b, op) << std::endl;
}

float calculate(float x, float y, char operation) {
    switch (operation)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    case '%':
        return x * y;
    case '^':
        return pow(x, y);
    default:
        return 0;
    }
}
