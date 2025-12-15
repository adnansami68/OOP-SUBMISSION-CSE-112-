#include <iostream>
#include <ctime>
using namespace std;

class TimeDate {
    time_t t;

public:

    TimeDate(time_t currentTime) {
        t = currentTime;
    }


    void show() {
        cout << "Current time and date: " << ctime(&t);
    }
};

int main() {
    time_t now = time(0);
    TimeDate td(now);
    td.show();

    return 0;
}
