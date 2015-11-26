#include <QCoreApplication>
#include <iostream>
using namespace std;
struct Person
{
    string name;
    string gender;
    int birthyear;
    int deathyear;

};

list<Person> personList;

Person addPerson()
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


void addPerson(Person newPerson)
{
    personList.push_back(newPerson);
}

int main(int argc, char *argv[])
{
    Person person1 = addPerson();
    int k =0;
    personList.push_back(person1);
    QCoreApplication a(argc, argv);
    return 0;
}

