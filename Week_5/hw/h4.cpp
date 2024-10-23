#include <iostream>

using namespace std;

int main() {

   int potion;
   cout << "Select a potion crafting priority: \n1. Health Potion \n2. Magic Potion" << endl;
   cin >> potion;

   while(potion != 1 && potion != 2) {
       cout << "Invalid input. Please select 1 or 2." << endl;
       cin >> potion;
   }

   int tealeaves, sunflowers, toadstools, pineNeedles;
   cout << "How many Tealeaves do you have?" << endl;
   cin >> tealeaves;
   cout << "How many Sunflowers do you have?" << endl;
   cin >> sunflowers;
   cout << "How many Toadstools do you have?" << endl;
   cin >> toadstools;
   cout << "How many Pine Needles do you have?" << endl;
   cin >> pineNeedles;

   int healthPotions = 0, magicPotions = 0;

   // Constants for crafting recipes
   const int healthTealeaves = 6, healthSunflowers = 1, healthToadstools = 5, healthPineNeedles = 2;
   const int magicTealeaves = 2, magicSunflowers = 3, magicToadstools = 10, magicPineNeedles = 1;

   if (potion == 1) {
       // Craft Health potions as priority
       while (tealeaves >= healthTealeaves && sunflowers >= healthSunflowers &&
              toadstools >= healthToadstools && pineNeedles >= healthPineNeedles) {
           tealeaves -= healthTealeaves;
           sunflowers -= healthSunflowers;
           toadstools -= healthToadstools;
           pineNeedles -= healthPineNeedles;
           healthPotions++;
       }

       // Use leftovers for Magic potions
       while (tealeaves >= magicTealeaves && sunflowers >= magicSunflowers &&
              toadstools >= magicToadstools && pineNeedles >= magicPineNeedles) {
           tealeaves -= magicTealeaves;
           sunflowers -= magicSunflowers;
           toadstools -= magicToadstools;
           pineNeedles -= magicPineNeedles;
           magicPotions++;
       }

       cout << "You can make " << healthPotions << " Health potion(s) and " 
            << magicPotions << " Magic potion(s)." << endl;

   } else {
       // Craft Magic potions as priority
       while (tealeaves >= magicTealeaves && sunflowers >= magicSunflowers &&
              toadstools >= magicToadstools && pineNeedles >= magicPineNeedles) {
           tealeaves -= magicTealeaves;
           sunflowers -= magicSunflowers;
           toadstools -= magicToadstools;
           pineNeedles -= magicPineNeedles;
           magicPotions++;
       }

       // Use leftovers for Health potions
       while (tealeaves >= healthTealeaves && sunflowers >= healthSunflowers &&
              toadstools >= healthToadstools && pineNeedles >= healthPineNeedles) {
           tealeaves -= healthTealeaves;
           sunflowers -= healthSunflowers;
           toadstools -= healthToadstools;
           pineNeedles -= healthPineNeedles;
           healthPotions++;
       }

       cout << "You can make " << magicPotions << " Magic potion(s) and " 
            << healthPotions << " Health potion(s)." << endl;
   }

   return 0;
}