#include <iostream>
using namespace std;
class Animal
{
public:
  virtual  void speak()  //without virtual keyword ke runtime  me output nhi ayega 
   
    {
        cout << " hu HU HU..\n";
    }
};
class Dog : public Animal
{
    public:
    void speak()
    {
        cout<<" barking \n";
    }
};

int main()
{
    Animal *P;
    P = new Dog();  //jab new keyword ka use karta hu runtime me humesha output dega
    P->speak();      //isme complile time me hi output  decide ker le lega
}