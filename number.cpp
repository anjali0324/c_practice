#include <iostream>
using namespace std;


int main(){

    char chr_in;
    cout << "Please enter a line: ";
    cin>>chr_in;
    int total_number{};
    int total_upp{};
    int total_low{};
    while(chr_in!='\n'){
            if((chr_in>=0&&chr_in<=9)||(chr_in>='A'&&chr_in<='Z')||(chr_in>='a'&&chr_in<='z')){
    if(chr_in<'A'&& chr_in<'a')
        total_number++;
    else if(chr_in>9&&chr_in<'a')
        total_upp++;
    else if(chr_in>'A')
        total_low++;
    }}
    cout<<"Total number of numbers: "<<total_number<<endl;
    cout<<"Total number of uppercase character: "<<total_upp<<endl;
    cout<<"Total number of lowercase character: "<<total_low<<endl;

    return 0;
}
