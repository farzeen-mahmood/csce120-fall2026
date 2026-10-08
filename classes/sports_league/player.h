#ifndef PLAYER_H_
#define PLAYER_H_

#include <string>

// TODO(@Class): Define the Player class
class Player {
    public:
        // name getter and setter
        std::string name() const;
        void set_name(const std::string&);
    private:
        std::string name_;
        unsigned int jersey_number_;
        std::string position_;
}

#endif  // PLAYER_H