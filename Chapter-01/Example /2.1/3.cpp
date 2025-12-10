#include <iostream>
#include <ctime>

 using namespace std;

 class timer

 {

    clock_t start;
 public:

    timer();
    ~timer();

 };

    timer::timer()

 {

    start = clock();
 }

    timer::~timer()

 {

    clock_t end;

    end = clock();
    cout << "Elapsed time: " << (end-start) / CLOCKS_PER_SEC
 << "\n";
 }

 int main()
 {
    timer ob;

 char c;

    cout << " Enter: ";
    cin >> c;

    return 0;
 }
