#ifndef PLAYER_H_
#define PLAYER_H_

#include <string>

class Player {
    public:
        //constructors
        Player(std::string& in_name, unsigned int in_number, std::string& in_pos) 
        : name_{in_name}, jersey_number_{in_number}, position_{in_pos}
        {
            // made it to the constructor
            if (jersey_number_ == 12) {
                throw std:invalid_argument("NO 12TH MAN");
            }
        }

        // getter and setter for name_
        std::string name() const;
        void set_name(const std::string&);

        // getter and setter for jersey_number_
        unsigned int jersey_number() const;
        void set_jersey_number(unsigned int);

        // getter and setter for position_
        std::string position() const;
        void set_position(const std::string&);

        std::string print() const;

    private:
        // data members
        std::string name_ = "";
        unsigned int jersey_number_ = 0;
        std::string position_ = "";
};

#endif  // PLAYER_H