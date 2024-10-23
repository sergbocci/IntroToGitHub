#include <iostream>
#include <string>

using namespace std;

void mostPopularWord(string words[], const int WORDS_SIZE) {
    int maxCount = 0;                // To store the maximum frequency found
    string mostFrequentWord;         // To store the most frequent word
    int mostFrequentWordIndex = -1;  // To store the latest position of the most frequent word
    int count = 0;                   // Temporary variable for frequency count

    // First pass: find the word with the highest frequency
    for (int i = 0; i < WORDS_SIZE; i++) {
        count = 0;  // Reset the count for each word
        
        // Count occurrences of words[i]
        for (int j = 0; j < WORDS_SIZE; j++) {
            if (words[j] == words[i]) {
                count++;
            }
        }
        
        // Update the most frequent word based on frequency or most recent occurrence
        if (count > maxCount || (count == maxCount && i > mostFrequentWordIndex)) { //mostFrequentWordIndex used for most popular word used last
            maxCount = count;
            mostFrequentWord = words[i];
            mostFrequentWordIndex = i;  // Track the latest occurrence of the most frequent word
        }
    }

    // Second pass: collect all positions of the most frequent word
    cout << "The most popular word: " << mostFrequentWord << endl;
    cout << "Frequency: " << maxCount << endl;
    cout << "Found at pos: ";
    for (int i = 0; i < WORDS_SIZE; i++) {
        if (words[i] == mostFrequentWord) {
            cout << i << " ";  // Print each occurrence position
        }
    }
    cout << endl;
}
int main(){
    const int WORDS_SIZE = 4;
    string words[WORDS_SIZE] = {"mail", "text",
    "spam", "spam"};
    mostPopularWord(words, WORDS_SIZE);
    return 0;
}