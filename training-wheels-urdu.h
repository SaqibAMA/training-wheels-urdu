#pragma once

#include <iostream>     // For IO
#include <string>       // For String Input

using namespace std;

#define shuroo int main() {                             // Start of program
#define khatam return 0; }                              // End of program

#define dikhao(x) cout << x                             // Standard output
#define agli_line cout << "\n"                          // Next line

#define num_rakho long long int                         // Using long long int to provide flexibility
#define letter_rakho char                               // Single char storage
#define text_rakho string                               // For convenient string manipulation

#define agar(condition) if(condition)                   // Branching
#define warna else
#define warna_agar(condition) else if (condition)

#define repeat(n) for (int i = 0; i < n; i++)           // Repetition
#define jab_tak(condition) while(condition)