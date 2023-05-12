#include <cstdlib>  // for random numbers
#include <ctime>  // for seeding the random number generator
#include <iostream>  // for sending and recieving text from the console
using namespace std;

int main() {
  srand(time(0));  // sending rand () with the current time.

  // when generating a random number
  // seed = 5 -- * 23 + 11 / 7 * 23.45 - 4 / 3 = 2345245768
  // seed = 6 -- * 23 + 11 / 7 * 23.45 - 4 / 3 = 46
  // seed = 7 -- * 23 + 11 / 7 * 23.45 - 4 / 3 = 34568725
  
 cout << "Hello World!\n";

  // your assignment in repl.it;
  // make one of each!!
  // integers, booleans, floats, and strings.
  // declared and defined!

 int playerScore = 3000;
  bool playerIsAlive = true;
  float earthGravity = -9.81f;  // in meters per second;
  string playerName = "Darth Vader";

  int randomNumber = rand(); // rand() is a function
  cout << "Here is our random Number: " << randomNumber << ".\n";
  cout << "Here is our random Number: " << rand() << ".\n";
  cout << "Here is our random Number: " << rand() << ".\n";
  cout << "Here is our random Number: " << rand() << ".\n";
  // cool that we all got the same number!

  // at the top of the main() function, seed the random number generator.


  // so, how do we contrain it?
  // with the modulus operator = %

  cout << "\nWe are going to do some division... with whole numbers. \n";
  cout << "7 / 2 = " << 7 / 2<< ".\n";
  cout << "with a remainder of " << 7 % 2 << ".\n";

  cout << "Call it! heads or tails: ";  // asking the player for input
  string input;         // creat a string variable to store player input 

  cin >> input;   // get input from the player

  // flip the coin
  int coinToss = rand() % 2;
  cout << coinToss;

  if(input == "heads") {
    if (coinToss == 0) {
      cout << "You guessed right!\n";
   }
    else {
     cout << "You guessed wrong!\n";
   }
  } // end of heads code block 
else if (input == "tails") {
  if(coinToss == 1) {
    cout << "You guessed right!\n";
  }
else {
  cout << "invalid input. \n";
  }

// here is a number between 1 and 10...
  cout << "Here is a number between 1 and 10 (inclusive): " << (rand() % 10) +1 << ".\n";
  cout << "Here is a number between 1 and 10 (inclusive): " << (rand() % 10) +1 << ".\n";
  cout << "Here is a number between 1 and 10 (inclusive): " << (rand() % 10) +1 << ".\n";
  cout << "Here is a number between 1 and 10 (inclusive): " << (rand() % 10) +1 << ".\n";
  cout << "Here is a number between 1 and 10 (inclusive): " << (rand() % 10) +1 << ".\n";
  cout << "Here is a number between 1 and 10 (inclusive): " << (rand() % 10) +1 << ".\n";



  }}