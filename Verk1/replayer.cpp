#include "replayer.h"

RepLayer::RepLayer()
{

}

void RepLayer::printList(list<Person> personList)
{
    //Todo: Take list and print to console.
}


// Allows user to create person manually
Person RepLayer::addPerson()
{
    string name;
    string gender;
    int birthyear;
    int deathyear;
    cout << "Enter persons name: ";
    cin >> name;
    cout << "Enter persons gender (male/female): ";
    cin >> gender;
    cout << "Enter persons year of birth: ";
    cin >> birthyear;
    cout << "Enter persons year of death: ";
    cin >> deathyear;
    Person newPerson;
    newPerson.name = name;
    newPerson.birthyear = birthyear;
    newPerson.gender = gender;
    newPerson.deathyear = deathyear;
    return newPerson;
}

