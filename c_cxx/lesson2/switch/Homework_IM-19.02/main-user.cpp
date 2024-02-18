#include <iostream>
#include <optional>
#include <string>

std::optional<std::string>printMonth(int number){
    std::optional<std::string> result;
    switch (number) {
        case 12:
        case 1:
        case 2:
            result = "Winter";
            break;
        case 3:
        case 4:
        case 5:
            result = "Spring";
            break;
        case 6:
        case 7:
        case 8:
            result = "Summer";
            break;
        case 9:
        case 10:
        case 11:
            result = "Autumn";
            break;
        default:
            return std::optional<std::string>();
            break;
    }
    return result;
}



int main(){
    int number;

    std::cout << "Enter number of month:  ";
    std::cin >> number;

    auto result = printMonth(number);
    if (result.has_value()) {
        std::cout << "Result is " << result.value() << std::endl;
    } else {
        std::cout << "Not Found"; << std::endl;
    }
    return 0;
}








