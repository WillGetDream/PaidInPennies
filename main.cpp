#include <iostream>
using namespace std;
int main() {
    float penny=0.01;
    int days;
    cout<<"enter days less or equal than 45"<<endl;

    cin>>days;
    while(days>45){
        cout<<"please enter days less or equal than 45"<<endl;
        cin>>days;
    }
    int i=0;
    float sum=0;
    while(i<days){
        cout<<"today salary are $"<<penny;
        i++;
        sum=sum+penny;
        penny=penny*2;
        cout<<" and total pay at then end of the period is $"<<sum<< " the "<<i<<" day. "<<endl;

    }

    return 0;
}