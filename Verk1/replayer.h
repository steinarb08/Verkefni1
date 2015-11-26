#ifndef REPLAYER_H
#define REPLAYER_H

#include <iostream>
#include<list>
using namespace std;
struct Person
{
    string name;
    string gender;
    int birthyear;
    int deathyear;

};
class RepLayer
{
public:
    RepLayer();
    void printList(list<Person> personList);
    Person addPerson();
};

#endif // REPLAYER_H
