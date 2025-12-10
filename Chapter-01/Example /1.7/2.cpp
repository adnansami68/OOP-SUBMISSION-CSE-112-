#include<iostream>

using namespace std;

void date(char*date);
void date(int day, int month, int year);

int main()
{


    date("14/02/2004");
    date(14,02,2004);

    return 0;
}


    void date (char*date){
    cout<<"date"<<date<<"\n";
    }
    void date(int day, int month, int year){

    cout << "Date: " << day << "/";
    cout << month<< "/" << year << "\n";
 }
