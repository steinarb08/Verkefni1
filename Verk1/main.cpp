#include <QCoreApplication>
#include <iostream>
#include "replayer.h"
using namespace std;


list<Person> personList;


// Should probably be in the domain layer.
void addPerson(Person newPerson)
{
    personList.push_back(newPerson);
}

int main(int argc, char *argv[])
{
    Person person1 = {"Jón","male",1985,2016};
    Person person2 = {"Gunna","female",1920,2000};
    Person person3 = {"Karl","male",1970,2001};
    Person person4 = {"Grani","male",1790,1846};
    addPerson(person1);
    addPerson(person2);
    addPerson(person3);
    addPerson(person4);
    QCoreApplication a(argc, argv);
    return 0;
}

