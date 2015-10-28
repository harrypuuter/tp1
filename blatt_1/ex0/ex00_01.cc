/***************************************************************************
 * Experimentelle Teilchenphysik II
 * -------------------------------------------------------------------------
 * Exercise 0.1
 * -> Run "Hello World!" program
 ***************************************************************************/

/* This is C++ source code that should be dealt with by a C++ compiler. 
   So to avoid the compiler stumble over explanations meant for human
   beings you need a way to mark paragraphs of text as comment.
   In C++ there are two ways to mark text as "to be ignored" by the
   compiler, one you see demonstrated here:
   All text is treated as comment that is found inbetween
   pairs of /* and */

// A second possibility is to use // 
// All text after // until the end of line is treated as comment.

/* Now let's start with a very basic C++ program that prints just
   one line of output on your terminal screen ... */

// Include the standard library to facilitate input and output
#include<iostream>
#include<stdlib.h>

/* Every C++ (or C) program must have a function called "main".
   This function is called by the operating system when you start
   any program. The return value given back to the operating system
   after completion of the task is defined to be of integer value ("int").
   No return statement or a value of 0 means successful completion, a value
   different from 0 indicates a failure to perform the task. */
int main() {

  /* We are working in the standard namespace "std::" and use the standard
     output stream std::cout, that is defined in the library included above,
     to put our line of output "Hello World!" onto it.
     std::endl represents the so-called newline character ending a line. */
  std::cout << "Hello World!" << std::endl;
  
  // Integer return value, no return statement at all means a value of 0.
  return 0;

  /* "return" means return to the calling program, in this case the
     operating system. To return to the operating system directly 
     from anywhere in a program use exit. Usually, this is used
     for error treatment. */
  //exit(27);
}
// End of program
