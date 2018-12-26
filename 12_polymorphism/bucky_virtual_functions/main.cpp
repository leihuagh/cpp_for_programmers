/* https://www.youtube.com/watch?v=R_PPA9eejDw */
#include <iostream>
using namespace std;

// class definitions

// Enemy class
class Enemy
{
protected:
    int attackPower;

public:
    void setAttackPower(int a)
    {
        attackPower = a;
    }
};

// Ninja class (inherits from Enemy class)
class Ninja : public Enemy
{
public:
    void attack()
    {
        std::cout << "i am a ninja, jinja chop! -" << attackPower << std::endl;
    }
};

// Monster class (inherits from Enemy class)
class Monster : public Enemy
{
public:
    void attack()
    {
        std::cout << "i am a monster, monster smash! -" << attackPower << std::endl;
    }
};

/* ------------------------------------------------------------------------------- */



// main
int main(int argc, char const *argv[])
{
    Ninja n;
    Monster m;

    Enemy* enemy1 = &n;
    Enemy* enemy2 = &m;

    enemy1->setAttackPower(29);
    enemy2->setAttackPower(99);

    n.attack();
    m.attack();

}




































/*
public vs. private vs. protected class objects:

Let:

class Base {
    public:
        int publicMember;
    protected:
        int protectedMember;
    private:
        int privateMember;
};


Everything that is aware of Base is also aware that Base contains publicMember.
Only the children (and their children) are aware that Base contains protectedMember.
No one but Base is aware of privateMember.
By "is aware of", I mean "acknowledge the existence of, and thus be able to access".

*/

