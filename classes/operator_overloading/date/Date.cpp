#include "Date.h"

#include <iostream>

void Date::print() const {
  std::cout << month_ << "/" << day_ << "/" << year_;
}

// TODO(@Student): implement == and !=
bool Date::operator==(const Date& rhs) {
    return (year_ == rhs.year_ && month_ == rhs.month_ && day_ == rhs.day_);
}

bool Date::operator!=(const Date& rhs) {
    return (!(*this == rhs));
}

// TODO(@Student): implement < and <=
bool Date::operator<(const Date& rhs) {
    if (year_ < rhs.year_) return true;
    else if (year_ > rhs.year_) return false;
    else {
        if (month_ < rhs.month_) return true;
        else if (month_ > rhs.month_) return false;
        else {
            if (day_ < rhs.day_) return true;
            else return false;
        }
    }
}

bool Date::operator<=(const Date& rhs) {
    return (*this < rhs) || (*this == rhs);
}