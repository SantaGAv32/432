#include <iostream>
#include <iomanip>
int main() {
    int n;
    std::cout << "Введите высоту треугольника: ";
    std::cin >> n;
    if (n < 1) {
        std::cerr << "Ошибка! Введите высоту треугольника" << std::endl;
        return 1;
    }

    for (int i = 1; i <= n; ++i) {
        int spaces = n - i;
        int stars = 2 * i - 1;

        std::cout << std::setw(spaces) << "" << std::setw(stars) << "*";
        if (i != n) {
            std::cout << std::endl;
        }
    }

    return 0;
}