//My GitHub CSCI 1000 Comment Change!!!!
#include <iostream>
#include <cassert>
#include <iomanip>
#include <string>
using namespace std;

bool isValidBase(char base)
{
    if (base != 'A' && base != 'C' && base != 'G' && base != 'T')
    {                 // checkling for specific ATCG letters by using and to make sure it's one of correct options
        return false; // if that character is not found it returns false
    }
    else
    {
        return true; // if character is found it returns true
    }
}

bool isValidStrand(string strand)
{
    if (strand.length() == 0)
    { // checks to make sure there was not an empty answer. If there was, return false
        return false;
    }
    for (int i = 0; (unsigned)i < strand.length(); i++)
    { // checks each letter in the string and calls the isValidBase() function to check to see if it is a valid letter
        // code runner did not like when i was not unsigned - not sure completely why
        if (isValidBase(strand[i]) == false)
        { // if it is an invalid base at each letter, the string is invalid and thus it returns false
            return false;
        }
    }
    return true;
}

double strandSimilarity(string strand1, string strand2)
{
    double score = 0.0; // this will be the initialized and declared variable for score of the strings matching
    if (strand1.length() != strand2.length())
    { // this is the error handling case/boundary condition that makes sure both strings are of equal length
        return 0;
    }
    for (int i = 0; (unsigned)i < strand2.length(); i++)
    { // this checks each value for each string and checks if that character is equal
        if (strand1[i] == strand2[i])
        {
            score = score + 1; // if the character is equal, we add 1 to the score. If not, score stays the same
        }
    }
    score = score / strand2.length(); // finally score is equal to total matches/total positions
    return score;                     // returns a double of the score
}

int bestStrandMatch(string input_strand, string target_strand)
{
    double score = 0.0;   // declared and initialized variable to keep track of score
    int bestPosition = 0; // declared and initialized variable to keep track of the position in the string

    if (input_strand.length() < target_strand.length())
    {                                                 // boundary test to make sure input_strand has valid length
        cout << "Best similarity score: 0.0" << endl; // prints the score found from invalid
        return -1;
    }
    for (int i = 0; (unsigned)i <= input_strand.length() - target_strand.length(); i++) //loops through proper length so it doesn't go out of bounds
    {                                                                           // loops through the input_strand with a valid length of target strand
        string current_strand = input_strand.substr(i, target_strand.length()); // declare and initialize current_strand so we don't modify original strand
        //.substr(i,target_strand.length()) creates a valid substring length, otherwise, I have found out that it will never overcome original declared score
        double current_score = strandSimilarity(current_strand, target_strand); // delcared and initialized variable current_score checks score of substring using previous function made

        if (current_score > score)
        {                          // then checks to see if score is greater than score from before
            score = current_score; // if so sets original score to current score
            bestPosition = i;      // and best position in the string to the current index in the string
        }
    }
    cout << "Best similarity score: " << score << endl; // prints the score found from best position
    return bestPosition;                                // returns the index of best placement
}

void identifyMutations(string input_strand, string target_strand)
{ // function that identifies mutations
    int i = 0;
    if (input_strand == target_strand) // if the strands are exactly the same.
    {
        int position = bestStrandMatch(target_strand, input_strand); // call bestStrandMatch function and
        // print where alignment is found and no mutations are found
        cout << "Best alignment index: " << position << endl;
        cout << "No mutations found." << endl;
    }
    else if (target_strand.length() > input_strand.length())
    {                                                                // case for target strand being longer than input strand
        int position = bestStrandMatch(target_strand, input_strand); // call function to get position and alignment index
        cout << "Best alignment index: " << position << endl;
        while (i < position)
        { // while index is less than position we insert letter at index into target strand
            cout << "Insertion at position " << i + 1 << ": " << target_strand[i] << " is inserted in target strand" << endl;
            i++;
        }
        int i = 0;
        for (int counter = position; (unsigned)i < input_strand.length() && (unsigned)counter < target_strand.length(); i++, counter++)
        {
            /*
            A counter variable is created and initialized to position to track index of target strand, and an i variable is used
            to track through the input strand
            because the indexes are not lined up: for ex:
            target[counter] != input[i]
            */
            if (target_strand[counter] != input_strand[i])
            {
                cout << "Substitution at position " << counter + 1 << ": " << input_strand[i] << " -> " << target_strand[counter] << endl;
            } // substitutes the index of target at counter and puts the index of input from variable i to the target strand at counter
        }
        int j = position + input_strand.length();
        while ((unsigned)j < target_strand.length())
        { // inserts any Letters into target strand that come after the length of input strand
            cout << "Insertion at position " << j + 1 << ": " << target_strand[j] << " is inserted in target strand" << endl;
            j++;
        }
    }
    else if (target_strand.length() < input_strand.length())
    { // Case for input strand being longer than target strand
        int position2 = bestStrandMatch(input_strand, target_strand);
        cout << "Best alignment index: " << position2 << endl;
        int counter = 0;
        while (counter < position2)
        { // deletes everything up to the matching position that is in the input strand
            cout << "Deletion at position " << counter + 1 << ": " << input_strand[counter] << " is deleted in target strand" << endl;
            counter++;
        }
        int j = position2 + input_strand.length();
        while ((unsigned)j < target_strand.length())
        { // inserts everything that comes after the length of target strand into the target strand
            if (input_strand[i] == ' ' && position2 < i)
            {
                cout << "Insertion at position " << j + 1 << ": " << input_strand[j] << " is inserted in target strand" << endl;
                j++;
            }
        }
        /*
        substitution that does something similar to last substitution case but this time counter is within the input strand while i is within
        the target strand in order to find correct positions and compare the values of the
        characters at that position
        */
        int i = 0;
        for (int counter = position2; (unsigned)i < target_strand.length() && (unsigned)counter < input_strand.length(); i++, counter++)
        {
            if (input_strand[counter] != target_strand[i])
            {
                cout << "Substitution at position " << counter + 1 << ": " << input_strand[counter] << " -> " << target_strand[i] << endl;
            }
        }
        int counter2 = input_strand.length(); // deletes input_strand letters that come after the length of target strand until the counter comes back to the end position of counter
        while ((unsigned)counter2 > input_strand.length() + position2 - 1)
        {
            cout << "Deletion at position " << counter2 << ": " << input_strand[counter2 - 1] << " is deleted in target strand" << endl;
            counter2--;
        }
    }
    else
    { // case for lengths being the same but letters at positions are different and substitution needs to be done
        int position2 = bestStrandMatch(input_strand, target_strand);
        cout << "Best alignment index: " << position2 << endl;
        for (int i = 0; (unsigned)i < input_strand.length(); i++)
        { // compares values of each index and does not need two counter variables like before
            // because of indexes lining up
            if (input_strand[i] != target_strand[i])
            {
                cout << "Substitution at position " << i + 1 << ": " << input_strand[i] << " -> " << target_strand[i] << endl;
            }
        }
    }
}

void transcribeDNAtoRNA(string strand)
{ // function to change all occurences of T -> U for RNA
    for (int i = 0; (unsigned)i < strand.length(); i++)
    { // for loop iterates through length of the given strand input
        if (strand[i] == 'T')
        {                    // if strand has a T at the index
            strand[i] = 'U'; // replace the T with a U(assigns U at that index)
        }
        cout << strand[i]; // print out the new strand
    }
}

void reverseComplement(string strand)
{
    for (int i = strand.length() - 1; i >= 0; i--)
    { // for loop that starts index at end of string and works its way to beginning
        // subtract 1 from the strand.length() for valid index
        // the for loop reverses the string index
        /*
        if/ if else statements below check for complimentary values and assigns that value to that position
        and at the end of the if else statements, within the for loop, it prints out the new index of the string
        with the complimentary value
        */
        if (strand[i] == 'A')
        {
            strand[i] = 'T';
        }
        else if (strand[i] == 'T')
        {
            strand[i] = 'A';
        }
        else if (strand[i] == 'C')
        {
            strand[i] = 'G';
        }
        else if (strand[i] == 'G')
        {
            strand[i] = 'C';
        }
        cout << strand[i];
    }
}

void getCodingFrames(string strand)
{
    int start = -1;     // declare and initialize start variable to -1
    int end = -1;       // declare variable end as an int and initialize it to -1
    string frame1 = ""; // string frame1 declared and initalized - this will be used to check for duplicates before printing
    /*
    start is used to find the start of a valid ORF
    end is used to find the end of the ORF(stop codon)
    */
    for (int i = 0; (unsigned)i < strand.length(); i++)
    { // loops through input strand to find instances of ATG
        if (strand.substr(i, 3) == "ATG")
        {              // locates the position of ATG using the substr function
            start = i; // assigns the start to the location of beginning of ATG codon
            for (int j = start + 3; (unsigned)j < strand.length(); j += 3)
            { // another loop is used this time to find ending codon based off the starting codon
                // starts at the position(end of starting ATG) and goes to the end of strand in increments of 3
                // increments of 3 check for codon parts described below
                if (strand.substr(j, 3) == "TAA" || strand.substr(j, 3) == "TAG" || strand.substr(j, 3) == "TGA")
                {
                    end = j; // if the substring of the strand at index j, 3 positions equals one of the ending codons
                    // it assigns the end to that position

                    if ((end - start) % 3 == 0)
                    {                                                   // checks if end-start are divisible by 3
                        frame1 = strand.substr(start, end + 3 - start); // extracts the frame we have found
                        cout << frame1 << endl;
                    }
                    i = j + 2; // if the substring of the strand at index j; 3 positions equals one of the ending codons
                    // assigns edn to position
                    break; // breaks out of code and returns to first for loop to find next starting codon and repeats the process.
                }
            }
        }
    }
    if (frame1 == "")
    {
        cout << "No reading frames found." << endl;
    }
}
void mainFunc(){/*
mainFunc()
this is a void helper function used to help main function
mainFunc() is called to make sure main function keeps repeating itself until
 the user would like to quit the program
*/
 
    int ans; // Variable to store user menu choice
    cout << "--- DNA Analysis Menu ---\n1. Calculate the similarity between two sequences of the same length\n2. Calculate the best similarity between two sequences of either equal or unequal length\n3. Identify mutations\n4. Transcribe DNA to RNA\n5. Find the reverse complement of a DNA sequence\n6. Extract coding frames\n7. Exit\nPlease enter your choice (1 - 7):" << endl;
    cin >> ans; // User selects an option
    while (ans > 7 || ans < 1)
    { // Input validation loop: ensures the user enters a valid choice between 1 and 7
        cout << "Invalid input. Please select a valid option." << endl;
        cout << "--- DNA Analysis Menu ---\n1. Calculate the similarity between two sequences of the same length\n2. Calculate the best similarity between two sequences of either equal or unequal length\n3. Identify mutations\n4. Transcribe DNA to RNA\n5. Find the reverse complement of a DNA sequence\n6. Extract coding frames\n7. Exit\nPlease enter your choice (1 - 7):" << endl;
        cin >> ans; // Retry input
    }
    if (ans == 7)
    { // Case 7: Exit the program
        cout << "Exiting program." << endl;
        // Case 1: Calculate similarity between two sequences of the same length
    }
    else if (ans == 1)
    {
        string dna1; // Variables to store DNA sequences
        string dna2;
        cout << "Enter the first DNA sequence: " << endl;
        cin >> dna1;
        while (isValidStrand(dna1) == false)
        {
            cout << "Invalid input. Please enter a valid sequence." << endl;
            cout << "Enter the first DNA sequence: " << endl;
            cin >> dna1;
        }
        cout << "Enter the second DNA sequence: " << endl;
        cin >> dna2;
        while (isValidStrand(dna2) == false)
        {
            cout << "Invalid input. Please enter a valid sequence." << endl;
            cout << "Enter the second DNA sequence: " << endl;
            cin >> dna2;
        }
        // Validate if sequences are of the same length
        if (dna1.length() != dna2.length())
        {
            cout << "Error: Input strands must be of the same length." << endl;
            // Validate if the sequence contains valid characters
        }else{
            // Call function to calculate similarity and print result
        double dnaSimilarity = strandSimilarity(dna1, dna2);
        cout << "Similarity score: " << dnaSimilarity << endl;
        }
        mainFunc();
        // Case 2: Calculate the best similarity between sequences of any length
    }
    else if (ans == 2)
    {
        string dna1;
        string dna2;
        cout << "Enter the first DNA sequence: " << endl;
        cin >> dna1;
        while (isValidStrand(dna1) == false)
        {
            cout << "Invalid input. Please enter a valid sequence." << endl;
            cout << "Enter the first DNA sequence: " << endl;
            cin >> dna1;
        }
        cout << "Enter the second DNA sequence: " << endl;
        cin >> dna2;
         while (isValidStrand(dna2) == false)
        {
            cout << "Invalid input. Please enter a valid sequence." << endl;
            cout << "Enter the second DNA sequence: " << endl;
            cin >> dna2;
        }
        // Call function to calculate the best similarity and print result
        int bestSimilarity = bestStrandMatch(dna1, dna2);
        int index = bestSimilarity; //so it doesn't output the position when from cout<<bestSimilarity
        index = index-1; //coderunner doesn't like when the index is not used
        mainFunc();
        // Case 3: Identify mutations between two DNA sequences
    }
    else if (ans == 3)
    {
        string dna1;
        string dna2;
        cout << "Enter the first DNA sequence: " << endl;
        cin >> dna1;
        cout << "Enter the second DNA sequence: " << endl;
        cin >> dna2;
        // Call function to identify mutations
        identifyMutations(dna1, dna2);
        mainFunc();
        // Case 4: Transcribe a DNA sequence to RNA
    }
    else if (ans == 4)
    {
        string dna1;
        cout << "Enter the DNA sequence to be transcribed: " << endl;
        cin >> dna1;
        while (isValidStrand(dna1) == false)
        {
            cout << "Invalid input. Please enter a valid sequence." << endl;
            cout << "Enter the DNA sequence to be transcribed: " << endl;
            cin >> dna1;
        }
        cout << "The transcribed DNA is: ";
        // Call function to transcribe DNA to RNA and display the result
        transcribeDNAtoRNA(dna1);
        cout<<endl; //spacing for correct format 
        mainFunc();
        // Case 5: Find the reverse complement of a DNA sequence
    }
    else if (ans == 5)
    {
        string dna1;
        cout << "Enter the DNA sequence: " << endl;
        cin >> dna1;
        while (isValidStrand(dna1) == false)
        {
            cout << "Invalid input. Please enter a valid sequence." << endl;
            cout << "Enter the DNA sequence: " << endl;
            cin >> dna1;
        }
        // Call function to get the reverse complement and display the result
        cout << "The reverse complement is: ";
        reverseComplement(dna1);
        cout<<endl;
        mainFunc();
        // Case 6: Extract reading frames from a DNA sequence
    }
    else if (ans == 6)
    {
        string dna1;
        cout << "Enter the DNA sequence: " << endl;
        cin >> dna1;
         while (isValidStrand(dna1) == false)
        {
            cout << "Invalid input. Please enter a valid sequence." << endl;
            cout << "Enter the DNA sequence: " << endl;
            cin >> dna1;
        }
        // Call function to extract and display the coding frames
        cout << "The extracted reading frames are: " << endl;
        ;
        getCodingFrames(dna1);
        mainFunc();
    }
}
int main()
{
    int ans; // Variable to store user menu choice
    cout << "--- DNA Analysis Menu ---\n1. Calculate the similarity between two sequences of the same length\n2. Calculate the best similarity between two sequences of either equal or unequal length\n3. Identify mutations\n4. Transcribe DNA to RNA\n5. Find the reverse complement of a DNA sequence\n6. Extract coding frames\n7. Exit\nPlease enter your choice (1 - 7):" << endl;
    cin >> ans; // User selects an option
    while (ans > 7 || ans < 1)
    { // Input validation loop: ensures the user enters a valid choice between 1 and 7
        cout << "Invalid input. Please select a valid option." << endl;
        cout << "--- DNA Analysis Menu ---\n1. Calculate the similarity between two sequences of the same length\n2. Calculate the best similarity between two sequences of either equal or unequal length\n3. Identify mutations\n4. Transcribe DNA to RNA\n5. Find the reverse complement of a DNA sequence\n6. Extract coding frames\n7. Exit\nPlease enter your choice (1 - 7):" << endl;
        cin >> ans; // Retry input
    }
    if (ans == 7)
    { // Case 7: Exit the program
        cout << "Exiting program." << endl;
        // Case 1: Calculate similarity between two sequences of the same length
    }
    else if (ans == 1)
    {
        string dna1; // Variables to store DNA sequences
        string dna2;
        cout << "Enter the first DNA sequence: " << endl;
        cin >> dna1;
        while (isValidStrand(dna1) == false)
        {
            cout << "Invalid input. Please enter a valid sequence." << endl;
            cout << "Enter the first DNA sequence: " << endl;
            cin >> dna1;
        }
        cout << "Enter the second DNA sequence: " << endl;
        cin >> dna2;
        while (isValidStrand(dna2) == false)
        {
            cout << "Invalid input. Please enter a valid sequence." << endl;
            cout << "Enter the second DNA sequence: " << endl;
            cin >> dna2;
        }
        // Validate if sequences are of the same length
        if (dna1.length() != dna2.length())
        {
            cout << "Error: Input strands must be of the same length." << endl;
            // Validate if the sequence contains valid characters
        }else{
            // Call function to calculate similarity and print result
        double dnaSimilarity = strandSimilarity(dna1, dna2);
        cout << "Similarity score: " << dnaSimilarity << endl;
        }
        mainFunc();
        // Case 2: Calculate the best similarity between sequences of any length
    }
    else if (ans == 2)
    {
        string dna1;
        string dna2;
        cout << "Enter the first DNA sequence: " << endl;
        cin >> dna1;
        while (isValidStrand(dna1) == false)
        {
            cout << "Invalid input. Please enter a valid sequence." << endl;
            cout << "Enter the first DNA sequence: " << endl;
            cin >> dna1;
        }
        cout << "Enter the second DNA sequence: " << endl;
        cin >> dna2;
         while (isValidStrand(dna2) == false)
        {
            cout << "Invalid input. Please enter a valid sequence." << endl;
            cout << "Enter the second DNA sequence: " << endl;
            cin >> dna2;
        }
        // Call function to calculate the best similarity and print result
        int bestSimilarity = bestStrandMatch(dna1, dna2);
        int index = bestSimilarity; //so it doesn't output the position when from cout<<bestSimilarity
        index = index-1; //coderunner doesn't like when the index is not used
        mainFunc();
        // Case 3: Identify mutations between two DNA sequences
    }
    else if (ans == 3)
    {
        string dna1;
        string dna2;
        cout << "Enter the first DNA sequence: " << endl;
        cin >> dna1;
        cout << "Enter the second DNA sequence: " << endl;
        cin >> dna2;
        // Call function to identify mutations
        identifyMutations(dna1, dna2);
        mainFunc();
        // Case 4: Transcribe a DNA sequence to RNA
    }
    else if (ans == 4)
    {
        string dna1;
        cout << "Enter the DNA sequence to be transcribed: " << endl;
        cin >> dna1;
        while (isValidStrand(dna1) == false)
        {
            cout << "Invalid input. Please enter a valid sequence." << endl;
            cout << "Enter the DNA sequence to be transcribed: " << endl;
            cin >> dna1;
        }
        cout << "The transcribed DNA is: ";
        // Call function to transcribe DNA to RNA and display the result
        transcribeDNAtoRNA(dna1);
        cout<<endl; //spacing for format
        mainFunc();
        // Case 5: Find the reverse complement of a DNA sequence
    }
    else if (ans == 5)
    {
        string dna1;
        cout << "Enter the DNA sequence: " << endl;
        cin >> dna1;
        while (isValidStrand(dna1) == false)
        {
            cout << "Invalid input. Please enter a valid sequence." << endl;
            cout << "Enter the DNA sequence: " << endl;
            cin >> dna1;
        }
        // Call function to get the reverse complement and display the result
        cout << "The reverse complement is: ";
        reverseComplement(dna1);
        cout<<endl; //spacing for format
        mainFunc();
        // Case 6: Extract reading frames from a DNA sequence
    }
    else if (ans == 6)
    {
        string dna1;
        cout << "Enter the DNA sequence: " << endl;
        cin >> dna1;
         while (isValidStrand(dna1) == false)
        {
            cout << "Invalid input. Please enter a valid sequence." << endl;
            cout << "Enter the DNA sequence: " << endl;
            cin >> dna1;
        }
        // Call function to extract and display the coding frames
        cout << "The extracted reading frames are: " << endl;
        ;
        getCodingFrames(dna1);
        mainFunc();
    }

    return 0;
}
//more comments for CSCI 1000 class - adding 