#include <cassert>

#include <iostream>
#include <sys/types.h>

class Person {
    std::string firstname;
    std::string lastname;
    uint age;

  public:
    Person(std::string firstname, std::string lastname, uint age) {
        this->firstname = firstname;
        this->lastname = lastname;
        this->age = age;
    }

    void set_age(uint new_age) { this->age = new_age; }

    uint get_age() { return this->age; }

    Person operator+(Person person) {
        Person new_person = Person(this->firstname, this->lastname, 0);
        new_person.age = this->age + person.age;
        return new_person;
    }

    bool operator==(Person person) {
        return person.get_age() == this->get_age();
    }

    bool operator!=(Person person) {
        return person.get_age() != this->get_age();
    }
};

int main() {
    Person person = Person("Nicky", "Hariniaina", 12);
    Person another_person = Person("", "", 14);

    Person new_person = person + another_person;
    assert(new_person.get_age() == 26);
    std::cout << "We got here" << std::endl;

    assert(new_person != another_person);

    std::cout << "We got here too" << std::endl;
}
