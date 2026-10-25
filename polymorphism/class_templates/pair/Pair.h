#ifndef PAIR_H_
#define PAIR_H_

#include <iostream>

// TODO(@Student): generalize to be a pair of any type of data, not just int

template <typename T, typename U>
class Pair {
 private:
  T first_;
  U second_;

 public:
  Pair(const T& a, const U& b) : first_(a), second_(b) {}

  T first()  const { return first_;  }
  U second() const { return second_; }

  bool operator<(const Pair& other) {
    // remember, class member functions have access to private data
    if (first_ == other.first_)
      return second_ < other.second_;
    else
       return first_ < other.first_;
  }
};

template <typename T, typename U>
std::ostream& operator<<(std::ostream& os, const Pair<T, U>& pair) {
  os << "(" << pair.first() << ", " << pair.second() << ")";
  return os;
}

#endif  // PAIR_H_