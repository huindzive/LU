#include <iostream>
#include "time.h"

using namespace std;

Time::Time(int h, int m, int s) : hour(h), minute(m), second(s) {}

Time::~Time() {
    cout << "Objekts tiek lividēts" << endl;
}

void Time::change(int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
}

void Time::print() const {
    cout << hour << ":" << minute << ":" << second << endl;
}

void Time::distance(const Time& other) const {
    int pilnasSekundes1 = hour * 3600 + minute * 60 + second;
    int pilnasSekundes2 = other.hour * 3600 + other.minute * 60 + other.second;
    int starpiba = abs(pilnasSekundes1 - pilnasSekundes2);

    int hours = starpiba / 3600;
    starpiba %= 3600;
    int minutes = starpiba / 60;
    int seconds = starpiba % 60;

    cout << "Attālums starp laikiem: "
        << hours << " stunda(s), "
        << minutes << " minūtes, "
        << seconds << " sekundes("
        << pilnasSekundes1 - pilnasSekundes2 << " sekundes)" << endl;
}
