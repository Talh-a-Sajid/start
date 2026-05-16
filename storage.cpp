// this is an array for storing inventory items





#include"inventoryitem.h"
#include<iostream>
#include<string>
using namespace std;


                              //   for non parameterized constructor

int main() {
	inventoryItem  inventory[3];

	inventory[0].display();
	inventory[1].display();
	inventory[2].display();
}


                                 // for one parameter constructor 

int main() {

	inventoryItem inventory[3] = { string("hammer"),string("axe") , string("gun") }; //remeber this string words inside the curly brackets
	inventoryItem inventory[3] = { "axe "s , "hammer"s , "gun"s}; //remeber this suffixex "s" inside the curly brackets

                                 these suuffixes or string words are here because inside the 
                                 curly brackets, only one conversion can happen but here were 3
                                                                 
 
 
 
 
	inventory[0].display();
	inventory[1].display();
	inventory[2].display();

}

                         //    For multiple parameters






int main() {

    // Pass name + price + quantity for every single item
    inventoryItem inventory[3] = {
        inventoryItem("Hammer", 6.95, 12),
        inventoryItem("Wrench", 8.75, 20),
        inventoryItem("Pliers", 3.75, 10)
    };

    cout << "--- Type 3: Multi-Argument Constructor ---" << endl;
    inventory[0].display();  // Item: Hammer, Cost: $6.95, Units: 12
    inventory[1].display();  // Item: Wrench, Cost: $8.75, Units: 20
    inventory[2].display();  // Item: Pliers, Cost: $3.75, Units: 10

    return 0;
}



int main() {

    inventoryItem inventory[3] = {

        inventoryItem("gun" , 2.0 , 50),
            
        inventoryItem("knife", 5.0, 100),
            
        inventoryItem("axe", 10.0, 150)
    };

    cout << "\n--- Before Changes ---" << endl;
    

    inventory[0].display();
    cout << endl;

    inventory[1].display();
    cout << endl;

    inventory[2].display();

    cout << "\n--- Applying Changes ---" << endl;

    inventory[0].setCost(50.0);
    inventory[1].setDescription("50");
    inventory[2].setUnits(50);

    cout << "\n--- After Changes ---" << endl;

    
    inventory[0].display();
    cout << endl;

    inventory[1].display();
    cout << endl;

    inventory[2].display();


    cout << "GETTING RESULTS WITH GETTERS"<<endl;


  
    cout <<  inventory[0].getCost() << endl;
    cout << inventory[1].getDescription() <<endl;
    cout << inventory[2].getUnits() <<endl;



}
