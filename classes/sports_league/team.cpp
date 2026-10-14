#include "team.h"

// TODO(@Student): Implement all data members here
//                 The first one is provided for you

// getter and setter for name_
std::string Team::name() const {
    return name_;
}

void Team::set_name(const std::string& s) {
    name_ = s;
}

void Team::add_player(const Player& p) {
    players_.push_back(p);
}

void Team::remove_player(const Player& p) {
    for (Player q : players_)
}

void Team::update_record(char c) {
    switch (tolower(c)) {
        case 'w':
            num_wins_++;
            break;
        case 'l':
            num_losses_++;
            break;
        case 't':
            num_ties_++;
            break;
    }
}