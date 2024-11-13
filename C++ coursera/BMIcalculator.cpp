#include <iostream>
#include <fstream>
#include <string>
using namespace std; //ringkaskan cout line command

int main(){
    float weight,height;

    cout<<"Sila masukkan berat dalam KG: ";
    cin>> weight;

    cout<<"Sila masukkan tinggi dalam m: ";
    cin>> height;

    //process
    float bmi = weight/(height*height);

    cout<<"BMI anda adalah = "<<bmi;

    return 0;
}