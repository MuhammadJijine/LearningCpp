#include <iostream>
using namespace std;


int main()
{
    enum class Monster
    {
    monster_orcs, 
    monster_goblins,
    monster_trolls,
    monster_ogres,
    monester_skeletons
    };
    Monster player{Monster::monster_trolls};
    return 0;
}