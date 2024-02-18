#include <iostream>
#include <optional>

std::optional<int>calculateGrade(int grade){
    std::optional<int>result;

    switch (grade) {
        case 12:
        case 11:
        case 10:
            result = 5;
            break;

        case 9:
        case 8:
        case 7:
            result = 4;
            break;

        case 6:
        case 5:
        case 4:
            result = 3;
            break;

        case 3:
        case 2:
            result = 2;
            break;

        case 1:
            result = 1;
            break;

        default:
            return std::optional<int>();
            break;

    }

    return result;

}

int main1() {
    int grade;

    std::cout << "Enter grade 1 - 12 :   ";
    std::cin >> grade;

    auto result = calculateGrade(grade);
    if (result.has_value()){
        std::cout << "Result is " << result.value() << std::endl;
    } else {
        std::cout << "Not Found this number "<< grade << std::endl;
    }

    return 0;
}