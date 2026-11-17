#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
using namespace std;

class Character {
protected:
    string id;
    string name;

public:
    Character(string id, string name);

    string getId();
    string getName();

    virtual void displayInfo();
    virtual ~Character();
};

#endif
