#include<iostream>
#include<string>
using namespace std;

class box {
private :
	string color;
	int* weight;
public :

	       // normal constructor
	box(string c, int w) {

		color = c;
		weight = new int;
		*weight = w;
	}

	      // copy constructor
	box(const box &obj) {
		color = obj.color;
		weight = new int;
		*weight = *obj.weight;
	}

	~box() {
		delete weight;
	}

	void setWeight(int w) {
		*weight = w;
	}

	void displayInfo() {
		cout << "color :" << color;
		cout << endl;
		cout << " weight :" << *weight;

	}

};

int main() {

	box b1("red", 10);
	box b2 = b1;

	
	b2.setWeight(25);

	b1.displayInfo();
	cout << endl;
	b2.displayInfo();



}