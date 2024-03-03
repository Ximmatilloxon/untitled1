#include <utility>

#include "iostream"
using namespace std;

class Animal{
protected:
    int energy = 50;
public:
    void sleep(){
        this -> energy += 1;
        cout << "I'm sleeping\n";
    }

    void eat(){
        this -> energy += 1;
        cout << "I'm eating\n";
    }

    int getEnergy(){return this -> energy;}
};

class Dog: public Animal{
private:
    string name;
public:
    explicit Dog(string name){
        this -> name = std::move(name);
    }

    void bark(){
        this -> energy -= 1;
        cout << "Bark!\n";
    }

    void run(){
        this -> energy -= 3;
        cout << "Running!\n";
    }
};

int main() {
    Dog dog1("Max");
    for(int i=4;i<9;i++){
        dog1.sleep();
        dog1.run();
    }
    dog1.eat();
    dog1.bark();
    cout<<dog1.getEnergy()<<endl;
    return 0;
}