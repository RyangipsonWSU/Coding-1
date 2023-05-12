#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//return type, name, (input) {code}
// defining a function that returns nothing,
// named "welcome", with no input paramaters
void welcome() {
  cout << "Hello World!\n";
}

// overloading a funtion
// this function has one input: a sting variable named "message"
void welcome(string message) {
  cout << message << "\n";
}

// this return type is int
// dont forget to include <ctime> and <cstdlib>, also to use srand() in main().

//make an input parameter named 'sides' to change the max random amount.
// sides has a default value of 6, so that if we do give an amount, sides = 6
int rollDie(int sides = 6, int min = 1){
  return rand() % sides + min;
}



// build a function that asks for specific user input (y/n)... and loop until it gets it.
// lets make the return a boolean.

bool askYN(string question = "keep playing? "){
  while(true) {
    cout << question<< "(y/n)\n ";
    char input;
    cin >> input;

      if(input == 'y') {
        return true;
      }
      else if(input == 'n') {
        return false;
        }
    
  }
}


int main() {
  srand(time(0));
  // calling the welcome() function
  welcome();
  welcome("howdy!!");

  int roll = rollDie();
  cout << "Your die roll is " << rollDie() << ".\n";
  cout << "Your die roll is " << rollDie(6) << ".\n";
  cout << "Your die roll is " << rollDie(8) << ".\n";
  cout << "Your die roll is " << rollDie(20) << ".\n";
  cout << "Your die roll is " << rollDie(10) << ".\n";
  cout << "Your die roll is " << rollDie(100) << ".\n";
  cout << "Your die roll is " << rollDie(1000,1000) << ".\n";

  if (askYN() == true){
    cout << "Yay, lets go again!\n";
    }
  else { 
    cout << "Ok, maybe later...\n";
    }

  //can you get this to work?
  if (askYN("Should we go left?")) {
    cout << "Here we go to the left.\n";
  }
  else {
    cout << "I mean, alright! Your funeral...\n";
  }
  
 if (askYN("Should we turn the lights on?")) {
   cout << "Thats much better!\n";
 }
  
}