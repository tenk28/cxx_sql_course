#include <iostream>
#include <optional>

std::optional<double> calculate(double value1,
                                double value2,
                                char operation) {
    std::optional<double> result;
    switch (operation)
    {
    case '+':
        result = value1 + value2;
        break;
    case '-':
        result = value1 - value2;
        break;
    case '*':
        result = value1 * value2;
        break;
    case '/':
        result = value1 / value2;
        break;
    
    default:
        return std::optional<double>();
        break;
    }
    return result;
}

int main() {
    char ch;
    double value1, value2;

    std::cout << "Enter statement: ";
    std::cin >> value1 >> ch >> value2;

    auto result = calculate(value1, value2, ch);
    if (result.has_value()) {
        std::cout << "Result is "
                  << result.value() << std::endl;
    } else {
        std::cout << "Operation "
                  << ch << " not permitted"
                  << std::endl;
    }

    return 0;
}

// 2 + 5