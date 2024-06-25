// Section 13
// Delegating Constructors
#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    std::string name;
    int health;
    int xp;
public:
    // Overloaded Constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};


int main()
{

    Player empty;
    Player frank{ "Frank" };
    Player villain{ "Villain", 100, 55 };

    return 0;
}

