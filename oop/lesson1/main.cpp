#include "date.h"

#include <iostream>

int main () {
    Date date1(30, 9, 2008);
    date1.print();

    Date date2;
    date2.print();

    Date date3(date1);
    date3.print();
    return 0;
}
