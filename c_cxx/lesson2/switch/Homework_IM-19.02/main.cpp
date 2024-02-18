#include <iostream>

enum Months {
    January,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};


char printMonth(Months month){
    switch (month){
        case December:
        case January:
        case February:
            std::cout << "WINTER";
            break;
        case March:
        case April:
        case May:
            std::cout << "SPRING";
            break;

        case June:
        case July:
        case August:
            std::cout << "SUMMER";
            break;
        case September:
        case October:
        case November:
            std::cout << "AUTUMN";
            break;
        default:
            std::cout << "UnKnown";
            break;
    }
}

int main() {

    std::cout << printMonth(December) ;

    return 0;
}
