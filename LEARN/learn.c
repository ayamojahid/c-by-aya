#include <stdio.h>
#include <string.h>
// String Length
// For example, to get the length of a string, you can use the strlen() function:
int main() {
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
printf("%zu", strlen(alphabet));
//In the Strings chapter, we used sizeof to get the size of a string/array. 
// Note that sizeof and strlen behaves differently, as sizeof also includes the \0 character when counting:  // 26
printf("\n%zu\n", sizeof(alphabet));   // 27
// It is also important that you know that sizeof will always return the memory size (in bytes), 
// and not the actual string length:
char alphabet1[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
printf("\n%zu\n", strlen(alphabet1));   // 26
printf("%zu\n", sizeof(alphabet1));   // 50
//Concatenate Strings
//To concatenate (combine) two strings, you can use the strcat() function:
char str1[20] = "Hello ";
char str2[] = "World!";
// Concatenate str2 to str1 (result is stored in str1)
strcat(str1, str2);
// Print str1
printf("\n%s", str1);
//Copy Strings
//To copy the value of one string to another, you can use the strcpy() function:
char st1[20] = "Hello World!";
char st2[20];
// Copy str1 to str2
strcpy(st2, st1);
// Print str2
printf("\n%s", st2);
// Compare Strings
// To compare two strings, you can use the strcmp() function.
// It returns 0 if the two strings are equal, otherwise a value that is not 0:   
char str01[] = "Hello";
char str02[] = "Hello";
char str03[] = "Hi";
// Compare str1 and str2, and print the result
printf("\n%d\n", strcmp(str01, str02));  // Returns 0 (the strings are equal)
// Compare str1 and str3, and print the result
printf("\t%d\n", strcmp(str01, str03));  // Returns -4 (the strings are not equal)
}



    //Strings
// #include <stdio.h>
// int main() {
// char greetings[] = "Hello World!";
// printf("%s", greetings);

// char greetings1[] = "Hello World!";
// printf("\n%c", greetings1[0]);

// char greetings2[] = "Hello World!";
// greetings2[0] = 'J';
// printf("\n%s", greetings2);
// // Outputs Jello World! instead of Hello World!}
// char carName[] = "Volvo";
// int i;

// printf("\n");
// for (i = 0; i < 5; ++i) {
//   printf("%c  ", carName[i]);
// }

// char carName1[] = "Volvo";
// int length = sizeof(carName1) / sizeof(carName1[0]);
// int j;
// printf("\n");
// for (j = 0; j < length; ++j) {
//   printf("%c  ", carName1[j]);
// }
// printf("greetings3\n");
// char greetings3[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
// printf("%s", greetings3);

// // Why do we include the \0 character at the end? This is known as the "null terminating character",
// //  and must be included when creating strings using this method. 
// //  It tells C that this is the end of the string.}

// char greetings4[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
// char greetings5[] = "Hello World!";

// printf("\n%zu", sizeof(greetings4));   // Outputs 13
// printf("\t%zu\n", sizeof(greetings5));  // Outputs 13
// printf("\n");
//  char txt[] = "We are the so-called \"Vikings\" from the north.";
//   printf("%s", txt);

// //The sequence \'  inserts a single quote in a string:
// printf("\n");
//   char txt1[] = "It\'s alright.";
//   printf("%s", txt1);


// printf("\n");
// char txt2[] = "The character \\ is called backslash.";
//   printf("%s", txt2);
//   return 0;
// }




// #include <stdio.h>
// int main() {
// int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

// printf("%d\n", matrix[0][2]);  // Outputs 2

// //affiche tout les valeurs d'une matrice
// int matrix1[2][3] = { {1, 4, 2}, {3, 6, 8} };

// int i, j;
// for (i = 0; i < 2; i++) {
//   for (j = 0; j < 3; j++) {
//     printf("%d\n", matrix1[i][j]);
//   }
// }
// }



// #include <stdio.h>
// int main() {
// int myNumbers[] = {3, -1, 7, 0, 9};
// int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
// int i;

// for (i = 0; i < length; i++) {
//   if (myNumbers[i] < 0) {
//     continue; // skip negative numbers
//   }
//   if (myNumbers[i] == 0) {
//     break; // stop loop when zero is found
//   }
//   printf("%d\n", myNumbers[i]);
// }
//   }








// #include <stdio.h>
// int main() {
//     // An array storing different ages
// int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

// float avg, sum = 0;
// int i;

// // Get the length of the array
// int length = sizeof(ages) / sizeof(ages[0]);

// // Loop through the elements of the array
// for (i = 0; i < length; i++) {
//   sum += ages[i];
// }

// // Calculate the average by dividing the sum by the length
// avg = sum / length;

// // Print the average
// printf("The average age is: sum=%.2f, avg=%.2f",sum, avg);
// }
    
    
    // Summary: Always use the sizeof formula when looping through arrays. 
// It makes your loops adapt to the array size automatically.
// #include <stdio.h>
// int main() {
//     int myNumbers[] = {25, 50, 75, 100};

// int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
// int i;

// for (i = 0; i < length; i++) {
//   printf("%d\n", myNumbers[i]);
// }}


// #include <stdio.h>
// int main() {
//     int myNumbers[] = {10, 25, 50, 75, 100};
// //En mémoire, chaque int occupe généralement 4 octets.
// // Donc le tableau total = 5 × 4 = 20 octets.
// printf("%zu", sizeof(myNumbers));  // Prints 20

// }

// #include <stdio.h>
// int main() {
//     // 🔹 Déclaration d'un tableau d'entiers contenant 5 valeurs
//     int myNumbers1[] = {10, 25, 50, 75, 100};

//     // 🔹 Calcul de la longueur du tableau :
//     // sizeof(myNumbers1) → donne la taille totale du tableau en octets
//     // sizeof(myNumbers1[0]) → donne la taille d'un seul élément (ici un int)
//     // En divisant les deux, on obtient le nombre d'éléments dans le tableau.
//     int length = sizeof(myNumbers1) / sizeof(myNumbers1[0]);

//     // 🔹 Affiche la longueur du tableau
//     printf("%d", length);  // Résultat : 5

//     return 0;
// }


// // #include <stdio.h>
// // int main() {
// // int i;

// // for (i = 0; i < 6; i++) {
// //   if (i == 2) {
// //     continue;
// //   }
// //   if (i == 4) {
// //     break;
// //   }
// //   printf("%d\n", i);
// // }
// // }








// break = stop the loop completely.
// continue = skip this round, but keep looping.
// #include <stdio.h>
// int main() {
//     int i;

// for (i = 0; i < 10; i++) {
//   if (i == 4) {
//     break;
//   }
//   printf("i=%d\n", i);
// }

// int j;

// for (j = 0; j < 10; j++) {
//   if (j == 4) {
//     continue;
//   }
//   printf("\nj=%d\n", j);
// }
// }



// #include <stdio.h>
// int main() {
// int number = 2;
// int i;

// // Print the multiplication table for the number 2
// for (i = 1; i <= 10; i++) {
//   printf("%d x %d = %d\n", number, i, number * i);
// }

// return 0;

// }

// #include <stdio.h>
//  int main() {
//     int i, j;

// // Outer loop
// for (i = 1; i <= 2; ++i) {
//   printf("Outer: %d\n", i);  // Executes 2 times

//   // Inner loop
//   for (j = 1; j <= 3; ++j) {
//     printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
//   }
// }

// for (int k = 0; k <= 100; k += 10) {
//   printf("%d\n", k);
// }
// for (int e = 2; e <= 512; e *= 2) {
//   printf("\ne=%d\n", e);
// }}



// #include <stdio.h>

// int main() {
//     // 🔹 1️⃣ Boucle for : initialisation, condition, et mise à jour
//     for (int e = 2; e <= 512; e *= 2) {
//         // Étape 1 : e commence à 2 (initialisation faite au début)

//         // Étape 2 : la condition (e <= 512) est testée
//         // Si elle est vraie, on entre dans la boucle

//         // Étape 3 : afficher la valeur actuelle de e
//         printf("e = %d\n", e);
//         // 👉 Ce printf s’exécute AVANT que e soit multiplié par 2
//         // Donc au premier tour, e = 2 est affiché

//         // Étape 4 : à la fin du tour, la mise à jour e *= 2 est exécutée
//         // e = e * 2 → on double la valeur pour le prochain tour
//         // (Cette mise à jour n’est pas visible ici, car elle est dans la partie "for")
//     }

//     // Quand e devient supérieur à 512, la condition e <= 512 devient fausse
//     // → La boucle s’arrête et le programme se termine
//     return 0;
// }




// #include <stdio.h>
//  int main() {
// int sum = 0;
// int i;

// for (i = 1; i <= 5; i++) {
//   sum = sum + i;
// }

// printf("Sum is %d", sum);


// int j;

// for (j = 5; j > 0; j--) {
//   printf("%d\n", j);
// }}



// #include <stdio.h>
//  int main() {
//     int i;

// for (i = 0; i <= 10; i = i + 2) {
//   printf("%d\n", i);
// }}



// #include <stdio.h>
//  int main() {
//     int i;
// for (i = 0; i < 5; i++) {
//   printf("%d\n", i);
// }
//  }






// #include <stdio.h>
//  int main() {
// int dice = 1;

// while (dice <= 6) {
//   if (dice < 6) {
//     printf("No Yatzy\n");
//   } else {
//     printf("Yatzy!\n");
//   }
//   dice = dice + 1;
// }
//  }


// #include <stdio.h>
//  int main() {
//     int i = 0;

// while (i <= 10) {
//   printf("%d\n", i);
//   i += 2;
// }
//  }



// #include <stdio.h>
//  int main() {
//     int number;
// do {
//   printf("Enter a positive number: ");
//   scanf("%d", &number);
// } while (number > 0);
//  }







// #include <stdio.h>
//  int main() {
//     int i = 10;

// do {
//   printf("i is %d\n", i);
//   i++;
// } while (i < 5);
//  }


// #include <stdio.h>
//  int main() {
// int i = 10;
  
// while (i < 5) {
//   printf("This will never be printed\n");
//   i++;
// }
//  }




// #include <stdio.h>
//  int main() {
//     int countdown = 3;

// while (countdown > 0) {
//   printf("%d\n", countdown);
//   countdown--;
// }
// printf("Happy New Year!!\n");
//  }




// #include <stdio.h>
//  int main() {
//     int i = 0;

// while (i < 5) {
//   printf("%d\n", i);
//   i++;
// } }





// #include <stdio.h>
//  int main() {
//     int day;
//     printf("Veuillez entrer le nombre de jour de 1 a 7 : ");
//     scanf("%d" , &day);

// switch (day) {
//   case 1:
//     printf("Monday");
//     break;
//   case 2:
//     printf("Tuesday");
//     break;
//   case 3:
//     printf("Wednesday");
//     break;
//   case 4:
//     printf("Thursday");
//     break;
//   case 5:
//     printf("Friday");
//     break;
//   case 6:
//     printf("Saturday");
//     break;
//   case 7:
//     printf("Sunday");
//     break;
// }
//  }
// Outputs "Thursday" (day 4)










// #include <stdio.h>
//  int main() {
// //Test if a is greater than b, and if c is greater than a:
// int a = 200;
// int b = 33;
// int c = 500;

// if (a > b && c > a) {
//   printf("Both conditions are true\n");
// }

// //Test if a is greater than b, or if a is greater than c:
// int d = 200;
// int e = 33;
// int f = 500;

// if (d > e || d > f) {
//   printf("At least one condition is true\n");
// }

// //Test if a is not greater than b:
// int g = 33;
// int h = 200;

// if (!(g > h)) { 
//   printf("a is NOT greater than b\n");
// }
//  }




// #include <stdio.h>
//  int main() {
// int x = 15;
// int y = 25;

// if (x > 10) {
//   printf("x is greater than 10\n");

//   // Nested if
//   if (y > 20) {
//     printf("y is also greater than 20\n");
//   }
// } 
//  }




// #include <stdio.h>
//  int main() {
// int time = 20;
// (time < 18) ? printf("Good day.") : printf("Good evening.");
//  }





// #include <stdio.h>
//  int main() {
// int time = 22;
// if (time < 10) {
//   printf("Good morning.");
// } else if (time < 20) {
//   printf("Good day.");
// } else {
//   printf("Good evening.");
// }
// // Outputs "Good evening."
//  }




// #include <stdio.h>
//  int main() {
// int x = 20;
// int y = 18;
// if (x > y) {
//   printf("x is greater than y");
// } }



// #include <stdio.h>

// int main() {
//     int a = 5;
//     int b = 8;

//     // Vérifie si a est plus petit que b
//     printf("a < b  : %d\n", a < b);    // vrai → affiche 1

//     // Vérifie si a est plus petit ou égal à b
//     printf("a <= b : %d\n", a <= b);   // vrai → affiche 1

//     // Vérifie si a est plus grand que b
//     printf("a > b  : %d\n", a > b);    // faux → affiche 0

//     // Vérifie si a est plus grand ou égal à b
//     printf("a >= b : %d\n", a >= b);   // faux → affiche 0

//     // Vérifie si a est égal à b
//     printf("a == b : %d\n", a == b);   // faux → affiche 0

//     // Vérifie si a est différent de b
//     printf("a != b : %d\n", a != b);   // vrai → affiche 1

//     return 0;
// }


// #include <stdio.h>
// int main() {
//     printf("=== ORDRE DES PRIORITES EN C ===\n");
//     printf("1. () - Parentheses\n");
//     printf("2. *, /, %% - Multiplication, Division, Modulo\n");
//     printf("3. +, - - Addition, Soustraction\n");
//     printf("4. >, <, >=, <= - Comparaisons\n");
//     printf("5. ==, != - Egalite\n");
//     printf("6. && - ET logique\n");
//     printf("7. || - OU logique\n");
//     printf("8. = - Affectation\n\n");
    
//     // Démonstration visuelle
//     int x = 5, y = 3, z = 2;
    
//     printf("Exemple: x = %d, y = %d, z = %d\n", x, y, z);
//     printf("x + y * z     = %d (multiplication d'abord)\n", x + y * z);
//     printf("(x + y) * z   = %d (parentheses d'abord)\n", (x + y) * z);
//     printf("x > y + z     = %d (addition avant comparaison)\n", x > y + z);
    
//     return 0;
// }













/* #include <stdio.h>    // inclusion de la bibliothèque standard pour printf
#include <stdbool.h>  // inclusion pour utiliser le type bool (true/false)

int main() {
    // Déclaration de variables logiques (booléennes)
    bool isLoggedIn = true;   // vrai si l'utilisateur est connecté
    bool isAdmin = false;     // vrai si l'utilisateur est administrateur

    // Vérifie si l'utilisateur est un utilisateur régulier (connecté mais pas admin)
    // (isLoggedIn && !isAdmin) :
    // - isLoggedIn = true
    // - !isAdmin = !false = true
    // - true && true = true
    // Le ? : est un opérateur ternaire, il renvoie "true" si la condition est vraie, "false" sinon
    printf("Regular user: %s\n", (isLoggedIn && !isAdmin) ? "true" : "false");
    // Résultat affiché : Regular user: true

    // Vérifie si l'utilisateur a accès (soit connecté, soit admin)
    // (isLoggedIn || isAdmin) :
    // - true || false = true
    printf("Has access: %s\n", (isLoggedIn || isAdmin) ? "true" : "false");
    // Résultat affiché : Has access: true

    // Vérifie si l'utilisateur n'est pas connecté
    // !isLoggedIn = !true = false
    printf("Not logged in: %s\n", (!isLoggedIn) ? "true" : "false");
    // Résultat affiché : Not logged in: false

    return 0; // fin du programme
}
 */


// #include <stdio.h>
// int main() {
//     int age = 18;

// printf("%d\n", age >= 18); // 1 (true), old enough to vote
// printf("%d\n", age < 18);  // 0 (false), not old enough

// }

// #include <stdio.h>

// int main() {
//     int x = 10;
//     int y = 5;

//     // ==  (égal à)
//     // Vérifie si x est égal à y
//     if (x == y) {
//         printf("x == y  --> VRAI (1)\n");
//     } else {
//         printf("x == y  --> FAUX (0)\n");
//     }

//     // !=  (différent de)
//     // Vérifie si x est différent de y
//     if (x != y) {
//         printf("x != y  --> VRAI (1)\n");
//     } else {
//         printf("x != y  --> FAUX (0)\n");
//     }

//     // >  (plus grand que)
//     // Vérifie si x est supérieur à y
//     if (x > y) {
//         printf("x > y   --> VRAI (1)\n");
//     } else {
//         printf("x > y   --> FAUX (0)\n");
//     }

//     // <  (plus petit que)
//     // Vérifie si x est inférieur à y
//     if (x < y) {
//         printf("x < y   --> VRAI (1)\n");
//     } else {
//         printf("x < y   --> FAUX (0)\n");
//     }

//     // >=  (plus grand ou égal à)
//     // Vérifie si x est supérieur OU égal à y
//     if (x >= y) {
//         printf("x >= y  --> VRAI (1)\n");
//     } else {
//         printf("x >= y  --> FAUX (0)\n");
//     }

//     // <=  (plus petit ou égal à)
//     // Vérifie si x est inférieur OU égal à y
//     if (x <= y) {
//         printf("x <= y  --> VRAI (1)\n");
//     } else {
//         printf("x <= y  --> FAUX (0)\n");
//     }

//     return 0;
// }




// #include <stdio.h>

// int main() {
//     int x;  // variable qu'on va modifier

//     // = : affectation simple
//     x = 5;
//     printf("x = 5  --> %d\n", x);

//     // += : addition et affectation
//     x += 3; // x = x + 3
//     printf("x += 3 --> %d\n", x);

//     // -= : soustraction et affectation
//     x -= 3; // x = x - 3
//     printf("x -= 3 --> %d\n", x);

//     // *= : multiplication et affectation
//     x *= 3; // x = x * 3
//     printf("x *= 3 --> %d\n", x);

//     // /= : division et affectation
//     x /= 3; // x = x / 3
//     printf("x /= 3 --> %d\n", x);

//     // %= : modulo et affectation
//     x %= 3; // x = x % 3
//     printf("x %%= 3 --> %d\n", x);

//     // &= : ET bit à bit et affectation
//     x = 5;      // on réinitialise à 5
//     x &= 3;     // x = x & 3
//     printf("x &= 3 --> %d\n", x);

//     // |= : OU bit à bit et affectation
//     x = 5;
//     x |= 3;     // x = x | 3
//     printf("x |= 3 --> %d\n", x);

//     // ^= : XOR bit à bit et affectation
//     x = 5;
//     x ^= 3;     // x = x ^ 3
//     printf("x ^= 3 --> %d\n", x);

//     // >>= : décalage à droite
//     x = 8;
//     x >>= 2;    // x = x >> 2 (divise par 2 deux fois)
//     printf("x >>= 2 --> %d\n", x);

//     // <<= : décalage à gauche
//     x = 2;
//     x <<= 3;    // x = x << 3 (multiplie par 2 trois fois)
//     printf("x <<= 3 --> %d\n", x);

//     return 0;
// }







// #include<stdio.h>
// int main(){
// int peopleInRoom = 0;

// // 3 people enter
// peopleInRoom++;
// peopleInRoom++;
// peopleInRoom++;

// printf("%d\n", peopleInRoom); // 3

// // 1 person leaves
// peopleInRoom--;

// printf("%d\n", peopleInRoom); // 2
// }




// int x = 10;
// int y = 3;

// printf("%d\n", x + y); // 13
// printf("%d\n", x - y); // 7
// printf("%d\n", x * y); // 30
// printf("%d\n", x / y); // 3
// printf("%d\n", x % y); // 1

// int z = 5;
// ++z;
// printf("%d\n", z); // 6
// --z;
// printf("%d\n", z); // 5



// const int myNum = 15;  // myNum will always be 15
// //myNum = 10;  // error: assignment of read-only variable 'myNum'
// printf("%d" , myNum);

// Create variables of different data types
// #include<stdio.h>
// int main() {
// int normalInt = 1000;                       // standard int 
// double normalDouble = 3.14;                 // standard double
// short int small = -100;                     // smaller int
// unsigned int count = 25;                    // only positive int
// long int big = 1234567890;                  // larger int
// long long int veryBig = 9223372036854775807; // very large int
// unsigned long long int huge = 18446744073709551615U; // very large, only positive
// long double precise = 3.141592653589793238L; // extended precision

// printf("Normal int: %d\n", normalInt);
// printf("Normal double: %lf\n", normalDouble);
// printf("Small: %hd\n", small);
// printf("Count: %u\n", count);
// printf("Big: %ld\n", big);
// printf("Very Big: %lld\n", veryBig);
// printf("Huge: %llu\n", huge);
// printf("Precise: %Lf\n", precise);
// printf("\n");
// printf("Size of int: %zu bytes\n", sizeof(int));
// printf("Size of double: %zu bytes\n", sizeof(double));
// printf("Size of short int: %zu bytes\n", sizeof(short int));
// printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));
// printf("Size of long int: %zu bytes\n", sizeof(long int));
// printf("Size of long long int: %zu bytes\n", sizeof(long long int));
// printf("Size of unsigned long long int: %zu bytes\n", sizeof(unsigned long long int));
// printf("Size of long double: %zu bytes\n", sizeof(long double));
// }

// #include<stdio.h>
// int main() {
// int num1 = 5;
// int num2 = 2;
// float sum = (float) num1 / num2;

// printf("%.1f", sum); // 2.5
// }
// #include<stdio.h>
// int main() {
// int items = 50;
// float cost_per_item = 9.99;
// float total_cost = items * cost_per_item;
// char currency = '$';

// // Print variables
// printf("Number of items: %d\n", items);
// printf("Cost per item: %.2f %c\n", cost_per_item, currency);
// printf("Total cost = %.2f %c\n", total_cost, currency);
// }



// #include<stdio.h>
// int main() {
// int myInt;
// float myFloat;
// double myDouble;
// char myChar;

// printf("%zu\n", sizeof(myInt));
// printf("%zu\n", sizeof(myFloat));
// printf("%zu\n", sizeof(myDouble));
// printf("%zu\n", sizeof(myChar));
// }







// #include<stdio.h>
// int main() {
// float myFloatNum = 3.5;
// double myDoubleNum = 19.99;

// printf("%f\n", myFloatNum); // Outputs 3.500000
// printf("%lf\n", myDoubleNum); // Outputs 19.990000
// printf("%.2f" , myFloatNum); //Outputs 3.50 2 valeur apres la virgule 
// }

