/*
 * File: RemoveComments.cpp
 */

#include <iostream>
#include <fstream>
#include "console.h"
#include "filelib.h"     // promptUserForFile
using namespace std;

/* Function prototypes */

void removeComments(istream & is, ostream & os);

/* Main program */

/*int main() {
   ifstream infile;
   promptUserForFile(infile, "Input file: ");
   removeComments(infile, cout);
   infile.close();
   return 0;
}*/

/*
 * Function: removeComments
 * Usage: removeComments(is, os);
 * ------------------------------
 * This program eliminates both the
 * /* and // comment forms but does not check to see if those characters
 * are embedded within strings.
 */

void removeComments(istream & is, ostream & os) {
  
}
