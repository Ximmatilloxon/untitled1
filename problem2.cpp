#include <iostream>
using namespace std;

class Timer{
private:
    int hour;
    int min;
    int sec;
public:
    Timer(int hour, int min, int sec){
        this -> hour = hour;
        this -> min = min;
        this -> sec = sec;
    }
    void print(){
        min += sec / 60;
        sec %= 60;
        hour += min / 60;
        hour %= 24;
        min %= 60;
        cout << hour << ':' << min << ':' << sec;
    }
};

int main(){
    int h, m, s;
    cin >> h >> m >> s;
    Timer t(h, m, s);
    t.print();
}
