#pragma once

class Date {
public:
    Date();
    Date(int day, int month, int year);
    Date(const Date& date);

    ~Date();

    int getDay() const; // getter

    void setDay(int day); // setter

    void print() const; // method
private:
    int mDay, mMonth, mYear; // property
};
