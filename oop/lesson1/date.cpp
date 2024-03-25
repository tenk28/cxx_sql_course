#include "date.h"

#include <ctime>
#include <iostream>
#include <iomanip>

Date::Date() {
    time_t theTime = time(NULL);
    struct tm *aTime = localtime(&theTime);
    mDay = aTime->tm_mday;
    mMonth = aTime->tm_mon + 1; // Month is 0 - 11, add 1 to get a jan-dec 1-12 concept
    mYear = aTime->tm_year + 1900; // Year is # years since 1900
}

Date::Date(int day, int month, int year) {
    mDay = day;
    mMonth = month;
    mYear = year;
}

Date::Date(const Date& copy) {
    mDay = copy.mDay;
    mMonth = copy.mMonth;
    mYear = copy.mYear;
}

Date::~Date() {
}

int Date::getDay() const {
    return mDay;
}

void Date::setDay(int day) {
    mDay = day;
}

void Date::print() const {
    std::cout << std::setfill('0');
    std::cout << std::setw(2) << mDay << "/"
              << std::setw(2) << mMonth << "/"
              << mYear << std::endl;
}
