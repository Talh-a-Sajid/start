#include<iostream>
#include<string>
using namespace std;

struct talha{

string name;
int age;
string cnic;
int height;
string cast;
string city;
string address;
};

int main (){

    talha t1;

    t1.name = "Talha";
    t1.age = 20;
    t1.cnic = "36603-------";
    t1.height = 6;
    t1.cast = "Rajpoot";
    t1.city = "vehari";
    t1.address = "39 wb vehari";

    cout << t1.name << endl;
    cout << t1.age <<endl;
    cout << t1.cnic << endl;
    cout << t1.height << endl;
    cout << t1.cast << endl;
    cout << t1.city << endl;
    cout << t1.address << endl;

}