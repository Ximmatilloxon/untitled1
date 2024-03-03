// Ximmatilloxon Musayev
// FAR1
// 230006
#include <iostream>
using namespace std;

class Person{
protected:
    string Firstname;
    string Lastname;
    int age;
public:
    Person(string Firstname, string Lastname, int age){
        this -> Firstname = Firstname;
        this -> Lastname = Lastname;
        this -> age = age;
    }

    Person() {}

    void setFirstName(){this -> Firstname = Firstname;}
    string getFirstName(){return this -> Firstname;}

    void setLastName(){this -> Lastname = Lastname;}
    string getLastName(){return this -> Lastname;}

    void setage(){this -> age = age;}
    int getage(){return this -> age;}

};

class Student: Person{
private:
    long int id;
    int numberOfCredits;
public:
    Student(string Firstname, string Lastname, int age, long int id, int numberOfCredits){
        this -> Firstname = Firstname;
        this -> Lastname = Lastname;
        this -> age = age;
        this -> id = id;
        this -> numberOfCredits = numberOfCredits;
    }

    void print(){
        cout << Firstname << " " << Lastname << " " << id;
    }
};

int main(){

    /*
     P1

    Person p1("F1", "L1", 1), p2("F2", "L2", 2);
    cout << p1.getFirstName() << " " << p1.getLastName() << " " << p1.getage() << endl;
    cout << p2.getFirstName() << " " << p2.getLastName() << " " << p2.getage() << endl;
    */
    Student s1("SF", "SL", 19, 230000, 6);
    s1.print();
}