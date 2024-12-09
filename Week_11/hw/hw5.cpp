#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

// Character Class
class Character {
private:
    string name;
    double health;
    int mana;
    char status;
    bool isCreature;

public:
    // Constructors
    Character() : name(""), health(0.0), mana(0), status('A'), isCreature(false) {}
    Character(string name, double health, int mana, char status, bool isCreature)
        : name(name), health(health), mana(mana), status(status), isCreature(isCreature) {}

    // Getters
    string getName() const { return name; }
    double getHealth() const { return health; }
    int getMana() const { return mana; }
    char getStatus() const { return status; }
    bool getIsCreature() const { return isCreature; }

    // Setters
    void setName(string name) { this->name = name; }
    void setHealth(double health) { this->health = health; }
    void setMana(int mana) { this->mana = mana; }
    void setStatus(char status) { this->status = status; }
    void setIsCreature(bool isCreature) { this->isCreature = isCreature; }

    // Print stats
    void printStats() const {
        if (!name.empty()) {
            cout << name << "'s stats:" << endl;
            cout << "Health: " << fixed << setprecision(2) << health << endl;
            cout << "Status: " << status << endl;
            cout << "Mana: " << mana << endl;
            cout << "Is Creature: " << (isCreature ? "Yes" : "No") << endl;
        }
    }
};

// Function to load characters from a file
bool loadCharacters(string filename, Character characters[], const int CHARACTERS_SIZE, bool is_creature) {
    ifstream file(filename);
    if (!file.is_open()) {
        return false;  // If the file can't be opened, return false
    }

    string line;
    bool firstLine = true;  // To skip the header line in the file
    int index = 0;

    // Read the file line by line
    while (getline(file, line) && index < CHARACTERS_SIZE) {
        if (firstLine) {
            firstLine = false;  // Skip header line
            continue;
        }

        stringstream ss(line);
        string name;
        double health;
        int mana;
        char status;

        // Parse the current line using '|' as delimiter
        getline(ss, name, '|');
        ss >> health;
        ss.ignore(1, '|');  // Ignore the '|' separator
        ss >> mana;
        ss.ignore(1, '|');  // Ignore the '|' separator
        ss >> status;

        // Create a new character and set its properties
        characters[index] = Character(name, health, mana, status, is_creature);
        index++;
    }

    file.close();
    return true;  // Return true if the characters were successfully loaded
}

int main() {
    const int CHARACTERS_SIZE = 5;
    Character characters[CHARACTERS_SIZE];
    string filename = "characters.txt";  // Change this to your actual filename

    bool is_creature = false;  // Set to true for creatures, false for players

    if (loadCharacters(filename, characters, CHARACTERS_SIZE, is_creature)) {
        // Successfully loaded, print stats
        for (int i = 0; i < CHARACTERS_SIZE; i++) {
            if (!characters[i].getName().empty()) {
                characters[i].printStats();
            }
        }
    } else {
        cout << "Failed to load characters." << endl;
    }

    return 0;
}
