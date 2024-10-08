#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name;
    string position;
public:
    Person(const string &name, string position) : name(name), position(position) {}
    string getName() const {
        return name;

    }
string getPosition() const {
        return position;
};
};
class where{
private:
    double time;
    int buildingNumber, roomNumber;
    const Person& person;
public:
    where(const Person& person, double time, int buildingNumber, int roomNumber) :time(time), buildingNumber(buildingNumber), roomNumber(roomNumber),person(person){}
    virtual void displayLocation() const {
        cout << "The meeting will take place at " << time << " at building # " 
        << buildingNumber << " in room "<< roomNumber <<" with " << person.getName() << endl<< " they are a "<<  person.getPosition()<<endl; // Access name through the Person object
    };  
};
int main() { 
    Person p ("Adam", "janitor");
    where meeting(p,10,33,12);
    meeting.displayLocation();
    return 0;  
}