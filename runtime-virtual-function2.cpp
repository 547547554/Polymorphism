#include <iostream>
#include<vector>
using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout << "Huu HU..\n";
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << " barking \n";
    }
};

class Cat : public Animal
{
public:
    void speak()
    {
        cout<<"meu meu \n";
    }
};

int main ()
{
    Animal *p;
    vector<Animal*>Animals; 
    Animals.push_back(new Dog());
     Animals.push_back(new Cat());
      Animals.push_back(new Animal());
    
    for(int i =0; i<Animals.size();i++)
    {
        p = Animals[i];
        p->speak();
    }
}