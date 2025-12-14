#include <iostream>
using namespace std;


class Animal {
public:
    string name;

    Animal(string n) : name(n) {}
    virtual void makeSound() { cout << name << " makes a sound.\n"; } 
};


class Dog : public Animal {
public:
    Dog(string n) : Animal(n) {}

    void makeSound() override { cout << name << " barks.\n"; }
};

class Cat : public Animal {
public:
    Cat(string n) : Animal(n) {}

    void makeSound() override { cout << name << " meows.\n"; }
};

class Cow : public Animal {
public:
    Cow(string n) : Animal(n) {}

    void makeSound() override { cout << name << " moos.\n"; }
};


void animalSound(Animal* a) {
    a->makeSound();
}

int main() {

    Animal* animals[3];

    animals[0] = new Dog("Buddy");
    animals[1] = new Cat("Misty");
    animals[2] = new Cow("Bessie");


    for(int i = 0; i < 3; i++) {
        animalSound(animals[i]);
    }


    return 0;
}
