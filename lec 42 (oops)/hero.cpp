#include <iostream>
using namespace std;

class hero
{
    private:
    int health;

    public:
    char level;


    void setHealth(int h, string name)
    {
        if (name == "password")
        {
            health = h;
        }
    }
    void setlevel(int l)
    {
        level = l;
    }
    int getHealth()
    {
        return health;
    }
};
