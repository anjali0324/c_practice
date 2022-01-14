#include <iostream>
using namespace std;

int main(){
    int distance{}, fare{};
    int distance_left{};
    cout <<"Enter distance: ";
    cin>>distance;
    if(distance>20){
        // fare for first 12 km
        fare = 100;
        distance_left = distance-12;
        fare += (8*4);
        distance_left = distance-4;
        fare += (6*4);
        // calculating fare after 20 km
        int distance_after_twentykm{};
        distance_after_twentykm = distance - distance_left;
        fare += (5*distance_after_twentykm);


        cout <<"final fare : "<< fare<< endl;

    }
        system("pause");
        return 0;
}