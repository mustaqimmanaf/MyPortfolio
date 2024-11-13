#include <iostream>
#include <fstream>
#include <string>
using namespace std; //ringkaskan cout line command

int main(){
    int mark;
    cout <<"Enter your mark :";
    cin>>mark;

    if (mark > 79){
        cout<<"Grade A";
    }else if (mark > 69 && mark <= 79){
        cout<<"Grade B";
    }else if (mark > 59 && mark <= 69){
        cout<<"Grade C";
    }else if (mark > 49 && mark <= 59){
        cout<<"Grade D";
    }else if (mark > 39 && mark <= 49){
        cout<<"Grade E";
    }else {
        cout<<"Fail! Retake Exam";
    }
    return 0;
}
