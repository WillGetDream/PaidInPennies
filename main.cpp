#include <iostream>
using namespace std;
int main() {
    long penny=1;
    int days;
    cout<<"enter days less or equal than 45"<<endl;

    cin>>days;
    while(days>45){
        cout<<"please enter days less or equal than 45"<<endl;
        cin>>days;
    }
    int i=0;
    long sum=0;
    while(i<days){
        cout<<"today salary are $"<<penny/100;
        i++;
        cout<<" and total pay at then end of the period is the "<<i<<" day. "<<endl;
        sum+=penny;
        penny=penny*2;
    }

    return 0;
}