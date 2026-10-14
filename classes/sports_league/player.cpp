#include "player.h"

std::string Player::name() const {
    return name_;
}

void Player::set_name(const std::string& s) {
    name_ = s;
}

unsigned int Player::jersey_number() const {
    return jersey_number_;
}

void Player::set_jersey_number(const std::string& s) {
    jersey_number_ = s;
}