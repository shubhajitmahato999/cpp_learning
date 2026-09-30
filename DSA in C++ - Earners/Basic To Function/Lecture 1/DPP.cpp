/*
Q1. State True or False for each statement below.


(i) In C++, a double variable can store 3.14, while an int would truncate it
to 3.
  [T]
. . . . . . . . . . .
(ii) The modulus operator % works with double operands just like with int
operands.
[T]X
[F]
. . . . . . . . . . .
(iii) Blank spaces are allowed inside a variable name in C++ (e.g., my variable
is valid).
[F]
. . . . . . . . . . .
(iv) The post-increment operator (x++) first uses the current value in the expression, then increments it.
[T]



Q2. Identify whether each of the following is a valid or invalid C++ variable name. For every
invalid name, write a brief reason.
Variable Name Valid / Invalid
Reason (if invalid)

(i) totalMarks . . . . . . . . . . .[T]

(ii) _counter . . . . . . . . . . . [T]

(iii) 2ndPlayer . . . . . . . . . . .[F]

(iv) player#score . . . . . . . . . . .[F]

(v) int . . . . . . . . . . .  . .. . .[F]

(vi) Hello World . . . . . . . . . . . .[F]

(vii) MAX_SIZE . . . . . . . . . . . .[T]

(viii)my,var . . . . . . . . . . . .[F]

(ix) __x1 . . . . . . . . . . . .[T]

(x) Float . . . . . . . . . . . .[T]



Q3. Choose the correct answer for each part.


(i) What is the result of 17 % 5 in C++?
[B : 2]

(ii) Which declaration correctly stores 3.14159?
[D. double pi = 3.14159;]

(iii) If int a = 5, b = 2;, what does a / b give?
[D. 2]



*/

//Q4.
 # include<iostream>
    using namespace std ;
       int main () {
              int x = 10;
              cout << x ++ << endl ;
              cout << x << endl ;
           return 0;
       }