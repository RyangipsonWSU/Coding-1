#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// Declare global variables
int health = 10;
int totalTreasure = 0;

// Declare functions
void Story();
bool AskYesNo(std::string question);
int RollDie(int sides = 6);
void Adventure();
void Ending();

// Main function
int main() {
    srand(time(NULL));  // initialize random number generator
    
    Story();
    while (health > 0) {
        Adventure();
        if (health <= 0) {
            Ending();
            break;
        }
    }
    
    return 0;
}

// Function definitions
void Story() {
    cout << " Hello brave adventure! You are on a quest to find treasure!\n";
}

bool AskYesNo(string question) {
    cout << question << " (y/n) ";
    char response;
    cin >> response;
    return (response == 'y' || response == 'Y');
}

int RollDie(int sides) {
    return rand() % sides + 1;
}

void Adventure() {
    cout << " You encounter a monster!\n";
    int enemyAttack = RollDie();
    int playerBlock = RollDie();
    int treasure = RollDie(10);
    cout << " Enemy attack: " << enemyAttack; 
    cout << " Your block: " << playerBlock;
    if (playerBlock >= enemyAttack) {
        cout << " You blocked the attack and found " << treasure << " treasure!";
        totalTreasure += treasure;
    } else {
        cout << " You failed to block the attack and lost " << enemyAttack << " health.";
        health -= enemyAttack;
    }
    cout << " Your health: " << health << std::endl;
    cout << " Total treasure: " << totalTreasure;
    if (!AskYesNo(" Would you like to continue adventuring?")) {
        health = 0;
    }
}

void Ending() {
    cout << " You are dead. Game over.";
}


  