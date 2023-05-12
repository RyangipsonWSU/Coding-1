#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    
    cout << "Hello World!\n";
    cout << "Here's a random number between 10 and 50.\n";
    cout << rand() % 41 + 10 << "\n\n";

    // into counter = 0;
    //while(counter < 10) {
        
   // }

    // this is for standard for loop.
    // for(initialization; test; action ) {code}
    for(int i = 0; i < 10; i++) {
        cout << i << "\n";
        }

        // the 'break' keyword gets out of a loop or code block
        // the 'continue' keyword jumps back to the top of the loop.

    cout<< "What number would you like me to count to?\n";
    int input;
    cin >> input;

    for(int i = 0; i < 100; i++) {
        // create another if statement 
        // to skip the number 13, because the computer is a little stitious..
        // using the continue keyword
        
                if(i == 13) {
            cout << "nah\n";
            continue;
        }
        
        cout << i << "\n";
        
        if (i == input) {
            cout << "Done!\n";
            break;
        }
      
    }
    
    for (int i = 0; i < 100; i += 5) {
        cout << i << "\n";
    }

    // lets talk about strings.
    // stings are an ordered list of characters.

    string fullName = "Ryan Colt Gipson";

    cout << "My name is " << fullName << ".\n";
    
    cout << "my name is " << fullName.size() << "characters in my name. \n";

    cout << "My first initial is " << fullName[0] << ".\n";
 // can you get all of the intials? 

    cout << "My last initial is " << fullName[10] << ".\n";

    // 1, can we use a for loop to add a space between every character
    // 2, can we find the intials with a for loop?

    cout << "\n\nwith spaces!!\n";
    for(int i = 0; i < fullName.size(); i++) {
        cout << fullName [i] << " ";
        
    }  

    cout << "\n\n";

    cout << "all the intials\n";
    cout << fullName[0];
    for(int i = 0; i < fullName.size(); i++) {
    // only output the character if it is after a space
        if(fullName[i] == ' ') {
            // output the character after i
            cout << fullName[i +1];
        }
    }

    cout << "\n\n";

    // let's build an array.
    //just keep typing!
    // an array is a list.
    // we are going to build an inventory.
    // all of the "things" will be strings.

    string inventory[7];     // here's a list with 5 spots in it.

    inventory[0] = "Sword";
    inventory[1] = "Shield";
    inventory[2] = "Bow";
    inventory[3] = "Arrows";
    inventory[4] = "Bomb";
    
    cout << "The first item in my inventory is a " <<inventory[0] << ".\n";
    //can you make a for loop that displays these items?

    cout << "Here are all the items in my inventory.\n\n";
    for(int i = 0; i < 5; i++) {
        if(inventory[i] == "") {
            continue;
        }
        
        cout <<inventory[i] << "\n";

        int highscore[10];

        highscore[0] = 222;

        // a collection initializer adds items to the array all at once.
        string colors[] = {"Red", "Green", "Blue", "Yellow", "Black"};

        for(int i =0; i < 5; i++) {
            if(colors[i] == "") {
                break;
            }
            cout << i + 1 << ". " << colors[i] << "\n";
            
        }
        
    }
    
    
 }
