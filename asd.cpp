#include <iostream>
using namespace std;

int main(){
    int total_run{};
    cin>>total_run;
     int between10{};
        int between20{};
        int grt20{};
    for(int i{1}; i<=total_run; i++){
        int num_in{};
        cout<<"Enter number "<<i<<" :";
        cin>>num_in;

        if(num_in>=0 && num_in<=10)
            ++between10;
        else if(num_in>10 && num_in<=20){
            ++between20;
        }
        else if(num_in>20)
            ++grt20;
    }
    cout<<"Number between [0-10]: "<<between10<<endl;
    cout<<"Number between [11-20]: "<<between20<<endl;
    cout<<"Number greater than 20: "<<grt20<<endl;
    return 0;
}
