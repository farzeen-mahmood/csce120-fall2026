#ifndef TEAM_H_
#define TEAM_H_

#include <string>
#include <vector>

#include "player.h"

class Team {
    public:
        std::string name() const;
        void set_name(const std::string&);

        void add_player(const Player& p);
        void remove_player(const Player& p);

        void update_record(char c);
    private:
        std::string name_ = "";
        std::vector<Player> players_;
        unsigned int num_wins_, num_losses_, num_ties_;
};

#endif  // TEAM_H