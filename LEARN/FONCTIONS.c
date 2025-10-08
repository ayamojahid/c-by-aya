/* #include<stdio.h>
! myFunction() is the name of the function
void means that the function does not have a return value. 
You will learn more about return values later in the next chapter
Inside the function (the body), add code that defines what the function should do

void myFunction() {
  printf("I just got executed!");
}
  void myFunction1() {
  printf("I just got executed!");
}
void calculateSum() {
  int x = 5;
  int y = 10;
  int sum = x + y;
  printf("The sum of x + y is: %d", sum);
}
int main() {
A function is a block of code which only runs when it is called.
Create a function
  myFunction(); // call the function

  myFunction1();
  myFunction1();
  myFunction1();
  calculateSum();
  return 0;
}
Outputs "I just got executed! */

/*  //! C Function Parameters
#include<stdio.h>
void myFunction(char name[]) {
  printf("Hello %s\n", name);
}

int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}
Hello Liam
Hello Jenny
Hello Anja  */


/*// !#include<stdio.h>
void myFunction(char name[], int age) {
  printf("Hello %s. You are %d years old.\n", name, age);
}
void calculateSum(int x , int y){
int sum=x+y;
printf("\nla somme est %d+%d=%d", x,y,sum); }

int main() {
  myFunction("Liam", 3);
  myFunction("Jenny", 14);
  myFunction("Anja", 30);

  calculateSum(5,7);
  return 0;
}
// Hello Liam. You are 3 years old.
// Hello Jenny. You are 14 years old.
// Hello Anja. You are 30 years old. */

/* The void keyword, used in the previous examples, indicates that the function should not return a value. 
If you want the function to return a value, you can use a data type (such as int or float, etc.)
 instead of void, and use the return keyword inside the function: */
/*//! #include<stdio.h>
int myfonction(int x) {
return x+5; }
//This example returns the sum of a function with two parameters:
int fonctions(int x ,int y) {
    return x+y;
}
int main(){
printf("Result is: %d \n" , myfonction(5));

printf("les sommes est %d" , fonctions(3,8));
return 0;
} */

 /*//! You can also store the result in a variable:
If we consider the "Calculate the Sum of Numbers" example one more time, 
we can use return instead and store the results in different variables. 
This will make the program even more flexible and easier to control: 


#include<stdio.h>
int calculateSum(int x, int y) {
  return x + y;
}

int main() {
  int result1 = calculateSum(5, 3);
  int result2 = calculateSum(8, 2);
  int result3 = calculateSum(15, 15);

  printf("Result1 is: %d\n", result1);
  printf("Result2 is: %d\n", result2);
  printf("Result3 is: %d\n", result3);

  return 0;
} */

/* //! Tip: If you have many "result variables", it is better to store the results in an array:
#include<stdio.h>
int calculateSum(int x, int y) {
  return x + y;
}

int main() {
  // Create an array
  int resultArr[6];

  // Call the function with different arguments and store the results in the array
  resultArr[0] = calculateSum(5, 3);
  resultArr[1] = calculateSum(8, 2);
  resultArr[2] = calculateSum(15, 15);
  resultArr[3] = calculateSum(9, 1);
  resultArr[4] = calculateSum(7, 7);
  resultArr[5] = calculateSum(1, 1);

  for (int i = 0; i < 6; i++) {
    printf("Result %d is = %d\n", i + 1, resultArr[i]);
  }
  return 0;
} */


/* // Global variable
!Exemple 1 — Variable locale (scope limité)

#include <stdio.h>
void myFunction() {
    int x = 10; // x est une variable locale à myFunction
    printf("x = %d\n", x);
}

int main() {
    myFunction();
    // printf("%d", x); ❌ Erreur : x n’existe pas ici
    return 0;
} */

/* //! Exemple 2 — Variable globale (scope total)
#include <stdio.h>

int y = 5; // Variable globale

void myFunction() {
    printf("y = %d\n", y); // ✅ Accessible ici
}

int main() {
    printf("y = %d\n", y); // ✅ Accessible ici aussi
    myFunction();
    return 0;
} */


/* //!Exemple 3 — Deux variables avec le même nom
#include <stdio.h>

int num = 10; // Variable globale

void myFunction() {
    int num = 5; // Variable locale (masque la globale)
    printf("num (dans myFunction) = %d\n", num);
}

int main() {
    myFunction();
    printf("num (dans main) = %d\n", num);
    return 0;
} */





/* #include <stdio.h>
// ! Global variable
int x = 5;

void myFunction() {
  printf("%d\n", ++x); // Increment the value of x by 1 and print it
}

int main() {
  myFunction();

  printf("%d\n", x); // Print the global variable x
  return 0;
}

 The value of x is now 6 (no longer 5) */


/*  // !Function declaration
int myFunction(int x, int y);

// The main method
int main() {
  int result = myFunction(5, 3); // call the function
  printf("Result is = %d", result);
  return 0;
}

// Function definition
int myFunction(int x, int y) {
  return x + y;
} */

/* #include <stdio.h>

int sum(int k);

int main() {
  int result = sum(10);
  printf("%d", result);
  return 0;
}
int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
} */



/* #include <stdio.h>

void countdown(int n);

int main() {
  countdown(5);
  return 0;
}

void countdown(int n) {
  if (n > 0) {
    printf("%d ", n);
    countdown(n - 1);
  }
} */


/* //!Calculate Factorial with Recursion
This example uses a recursive function to calculate the factorial of 5:
#include <stdio.h>
int factorial(int n);

int main() {
  printf("Factorial of 5 is %d", factorial(5));
  return 0;
}

int factorial(int n) {
  if (n > 1) {
    return n * factorial(n - 1);
  } else {
    return 1;
  }
} */



//!Math Functions
#include <stdio.h>
#include<math.h>
int main() {
  printf("sqrt=%f\n", sqrt(16));
  printf("sqrt=%f\n", sqrt(36));
  printf("ceil=%f\n", ceil(1.4));
  printf("floor=%f\n", floor(1.4));
  printf("pow=%f\n", pow(4, 3)); }



