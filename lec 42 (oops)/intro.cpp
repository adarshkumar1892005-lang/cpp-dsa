#include <iostream>
#include "hero.cpp"
using namespace std;

class empt {
    //this is an empty class 
};

int main()
{
    empt e1;
    cout << "size of an empty class is : " << sizeof(e1) << endl;
    hero ramesh;
    cout << endl;
    cout << "Properties of ramesh \n";
    ramesh.level = 'A';
    ramesh.setHealth(70, "password");
    
    cout << "level : " << ramesh.level << endl;
    cout << "health : " << ramesh.getHealth() << endl;
    
    cout << endl;
    hero *a = new hero;
    a->setHealth(90, "password");
    a->setlevel('C');
    return 0;
}