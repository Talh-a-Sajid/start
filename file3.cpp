#include <iostream>
#include <string>
using namespace std;

class player {
private:	
	string name;
	int score;
public :
	player(string n, int s) {
		name = n;
		score = s;
	}

	friend class coach;
};

class coach {
public:
	void evaluate(player p) {
 

		cout << " name :" << p.name << endl;
		cout << " score :" << p.score;

	}
};

int main() {

	player p1("Ali" , 95);
	coach c1;
	cout << endl;
	c1.evaluate(p1);

}