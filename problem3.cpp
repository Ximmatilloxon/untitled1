#include <iostream>
#include <vector>
#include "map"
using namespace std;

class Student{
private:
    string name;
    long int id;
    string groupName;
public:
    Student(string name, long int id, string groupName){
        this -> name = name;
        this -> id = id;
        this -> groupName = groupName;
    }

    string getGroupName(){return this->groupName;}
};

int main(){
    vector<Student> vec;
    int n; string name, groupName; long int id;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> name >> id >> groupName;
        vec.emplace_back(name, id, groupName);
    }
    map<string, int> m;
    for (auto i:vec) {
        m[i.getGroupName()] += 1;
    }
    for (auto i:m) {
        cout << i.first << " : " << i.second << endl;
    }
}