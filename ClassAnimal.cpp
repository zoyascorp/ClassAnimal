#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void Voice() const = 0;
};

class Dog : public Animal
{
public:
    void Voice() const override
    {
        cout << "Woof!";
    }
};
class Cat : public Animal
{
public:
    void Voice() const override
    {
        cout << "\tMeow!";
    }
};
class Cow : public Animal
{
public:
    void Voice() const override
    {
        cout << "\tMoo!";
    }
};

int main()
{
    Animal* animals[3]{};
    animals[0] = new Dog,
    animals[1] = new Cat,
    animals[2] = new Cow;
    for (Animal* a:animals)
        a->Voice();
}
