#include <iostream>
#include <string>
using namespace std;
class Character {
private:
    string _name;
    double _health;
    int _mana;
    char _status;
    bool _isCreature;

public:
    // Default constructor
    Character();

    // Parameterized constructor
    Character(string name, double health, int mana, char status, bool isCreature);

    // Accessor functions
    string getName() const;
    double getHealth() const;
    int getMana() const;
    char getStatus() const;
    bool getIsCreature() const;

    // Mutator functions
    void setName(string name);
    void setHealth(double health);
    void setMana(int mana);
    void setStatus(char status);
    void setIsCreature(bool isCreature);

    // Print character stats
    void printStats() const;
};



// Default constructor
Character::Character() {
    _name = "";
    _health = 0;
    _mana = 0;
    _status = 'A';
    _isCreature = false;
}

// Parameterized constructor
Character::Character(string name, double health, int mana, char status, bool isCreature) {
    _name = name;
    _health = (health >= 0) ? health : 0;           // Ensure health is non-negative
    _mana = (mana >= 0) ? mana : 0;                 // Ensure mana is non-negative
    _status = (status == 'A' || status == 'C' || status == 'F') ? status : 'A'; // Set valid status
    _isCreature = isCreature;
}

// Getters
string Character::getName() const {
    return _name;
}

double Character::getHealth() const {
    return _health;
}

int Character::getMana() const {
    return _mana;
}

char Character::getStatus() const {
    return _status;
}

bool Character::getIsCreature() const {
    return _isCreature;
}

// Setters
void Character::setName(string name) {
    _name = name;
}

void Character::setHealth(double health) {
    if (health >= 0) {
        _health = health;  // Only update if health is non-negative
    }
}

void Character::setMana(int mana) {
    if (mana >= 0) {
        _mana = mana;  // Only update if mana is non-negative
    }
}

void Character::setStatus(char status) {
    if (status == 'A' || status == 'C' || status == 'F') {
        _status = status;  // Only update if status is valid
    }
}

void Character::setIsCreature(bool isCreature) {
    _isCreature = isCreature;
}

// Print character stats
void Character::printStats() const {
    // Display "<name>'s stats:" on the first line
    cout << _name << "'s stats:" << endl;
    
    // Display attributes with mana after status and health as double with precision
    cout << "Health: " << fixed << setprecision(2) << _health << endl;  // Set precision for health
    cout << "Status: " << _status << endl;
    cout << "Mana: " << _mana << endl;
    cout << "Is Creature: " << (_isCreature ? "Yes" : "No") << endl;
}

