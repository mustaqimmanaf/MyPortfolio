#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main(){
    //declare the import file library
    ifstream file("data.txt");

    string name;
    int age;

    if(file.is_open()){
        while(file >> name >> age){
            cout << "Nama :" << name << ", Umur :"<< age << endl; 

        }
        file.close();
    }else{
        cout << "Unable to open file/ no exist";
    }
    
    return 0;
}