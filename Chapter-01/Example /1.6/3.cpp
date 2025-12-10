#include<iostream>

using namespace std;

int main(){

    int num;

    cout<<"Enter a number:"<<endl;
    cin>>num;

    int a , fact=1;

    for(a=num ;a>=1;a--)

    fact= fact*a;

    cout<<"Factorial is:"<<fact;


    return 0;

}
