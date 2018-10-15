/*
  Copyright 2018
*/

#ifndef HW03_DATE_H_
#define HW03_DATE_H_

#include <string>
#include "HW/HW03/Exceptions.h"

class Date {
 public:
    Date();
    Date(int, int, int);
    ~Date();

    std::string show() const;

    bool equals(const Date &) const;

    bool before(const Date &) const;

    void day_inc(int);

    Date copy() const;

 private:
    int year, month, day;
};

Date mkDat mkDate_ptr(int y, int m, int d);

#endif  // HW03_DATE_H_
