// Created by: @PySaqib -- Saqib Ali
// 06th Aug, 2020
// MIT License

// Including the library for functionality.
// UR: Saare functions ke kaam karne keliye ham library use karenge.

#include "training-wheels-urdu.h"

// shuroo signifies the start of program.
// UR: shuroo ka matlab program ka start.
shuroo


    // To show anything on screen.
    // IR: Screen par kuch bhi dikhaane keliye yeh command use karein.
    dikhao("Hello, World");     // text
    dikhao(123456);             // number
    
    // To go to the next line.
    // UR: Screen par agli line par jaane keliye.
    agli_line;

    // To store numbers.
    // UR: Numbers store karne keliye.
    num_rakho a = 123456789;
    
    dikhao(a);
    agli_line;

    // num_rakho tells program that we need space for a number.
    // 'a' is the name of the number.
    // = 123456789 tells program to put this number at a.

    // UR:
    // num_rakho program ko yeh batata hai ke hame number store karna hai.
    // 'a' uss number ka naam hai.
    // = 123456789 se number a ke andar store hojaata hai.


    letter_rakho c = 'c';

    dikhao(c);
    agli_line;

    // Just like num_rakho, letter_rakho stores a single letter at c.
    // UR: num_rakho ki tarah, letter_rakho sirf aik letter ko c mein rakh dega.

    text_rakho name = "Saqib Ali";

    dikhao(name);
    agli_line;

    // text_rakho helps you to store complete words and texts.
    // UR: text_rakho se aap complete texts rakh sakte ho.



    // agar(condition) {} warna {} can be used for decision making
    // UR: agar(condition) {} warna {} se aap computer se faisla karwa sakte ho

    // If the condition in the brackets is true, then the code is executed.
    // Else, the code in warna block will be executed.

    // UR: agar(condition) me di gayi condition theek honay par {} ke andar waala code run hoga.
    // UR: condition ghalat honay par warna waala block chalega.

    // In this example, the code prints "naam saqib hai" if the name is "Saqib Ali".
    // UR: iss example mein, agar naam "Saqib Ali" hoga tou program "naam saqib hai" dikhaayega.

    agar(name == "Saqib Ali") {
        
        dikhao("naam saqib hai");
        agli_line;

    } warna {

        dikhao("naam saqib nahi hai");
        agli_line;

    }

    // agar (condition) {} warna_agar(condition) {} warna {} can be used for multiple decision making/
    // UR: agar (condition) {} warna_agar(condition) {} warna {} kaafi ziada decisions ko sambhaalne keliye
    // istemaal hosakti hai.


    // In this example, we can build a name recognizer.
    // UR: iss example me ham aik naam pehchaan'ne waala program bana sakte hein.

    agar (name == "Saqib Ali") {

        dikhao("naam saqib ali");
        agli_line;

    } warna_agar (name == "Ahmed") {

        dikhao("naam ahmed hai");
        agli_line;

    } warna {

        dikhao("me naam nahi jaanta");
        agli_line;

    }

    // In the example above we can see that the program will check for
    // two conditions. If the name is Saqib Ali, the program will tell us.
    // If it is Ahmed, program will tell us. Lastly, if it is neither of those,
    // program will say that "me naam nahi jaanta".

    // UR: upar example me program 2 cheezen check karraha hai.
    // UR: agar naam Saqib hua tou program hame bata dega.
    // UR: agar naam Ahmed hua tou program hame bata dega.
    // UR: lekin agar naam in dono me se koi bhi na hua tou program keh dega ke
    // UR: "me naam nahi jaanta"





    // repeat(n) {} can be used to repeat things.
    // UR: repeat(n) {} se ham koi bhi cheez n times repeat karwa sakte hein.

    // In this example, we will print my name 5 times.
    // UR: iss example mein ham "Saqib" 5 dafa print karwayenge.

    repeat(5) {

        dikhao("Saqib");
        agli_line;
    
    }


    // jab_tak(condition) {} can be used to repeat something until the condition is true.
    // UR: jab_tak(condition) {} ko ham tab use karsakte hein jab hame koi condition sahi rehne tak cheez repeat
    // UR: karwaani ho.

    // num_rakho k = 0;

    // jab_tak(k < 5) {

    //     dikhao(k);
    //     agli_line;

    // }

    // The issue with this program is that k never becomes more than 5. This means that the loop never stops.
    // UR: iss program me masla yeh hai ke 'k' kabhi 5 se bara hi nahi hota. issi liye ye hamesha keliye chalta rahega.

    // There is an easy way to fix this.
    // UR: iss ko theek karne ka asaan tareeqa hai.

    num_rakho k = 0;

    jab_tak (k < 5) {

        dikhao(k);
        agli_line;

        // This line will increment k by 1 every iteration.

        // UR: Iss line se har baar 'k' mein 1 add hojayega.
        // UR: Issi liye 'k' 1, 2, 3, 4 ... ke sequence me barhta jayega.

        k = k + 1;

    }


    // We can do cool things with jab_tak(condition) {}.
    // UR: Ham jab_tak(condition) {} ke saath kaafi achi cheezen karsakte hein.

    // In this example, we will print even numbers less than 10.
    // UR: iss example mein ham 10 se kam even numbers dikhayenge.

    num_rakho evenNumber = 0;

    jab_tak(evenNumber < 10) {

        dikhao(evenNumber);
        agli_line;

        // We increment by 2 because even numbers are spaced by 2.
        // UR: ham har baar 2 add karenge kiunke even numbers 2 ke faasle par hote hein.

        // 0, 2, 4, 6, 8 

        evenNumber = evenNumber + 2;

    }


khatam
// khatam signifies the end of program.
// UR: khatam ka matlab program ka ikhtetaam.


/*

Note to developers: This is a hobby project of mine and I know there are various things that can be improved.
I would appreciate any feedback on this script. This script and idea are free to use under MIT License.

*/