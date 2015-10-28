/***************************************************************************
 * Experimentelle Teilchenphysik II
 * -------------------------------------------------------------------------
 * Exercise 0.2
 * -> Count letters in a file
 ***************************************************************************/

// Include headers for use of input, output and file stream standard libs
#include<iostream>
#include<fstream>
// Include headers for use of char, string and map type standard libs
#include<cctype>
#include<map>
#include<string>

int main() {
  // Define std:: namespace to be used by default here
  using namespace std;
  
  // Request filename from user at terminal
  cout << "Enter input filename:" << endl;
  
  // Write filename into string variable infile
  string infile;
  cin >> infile;
  cout << endl << "Your input file is:" << endl << infile << endl;

  // Attach C-type strings from infile to ifstream is
  ifstream is(infile.c_str());

  // Define character c and keyed array (map) my_count
  char c;
  map<char,int> my_count;

  // Loop over ifstream until eof
  while ( is >> c ) {
    // c contains alphanumeric character?
    if ( isalpha(c) ) {
      // c is upper case letter?
      if ( isupper(c) ) {
	// Change to lower case
	c = tolower(c);
      }
      // Increase corresponding map entry
      my_count[c]++;
    }
    else {
      // Count every other character as '0'
      my_count['0']++;
    }
  }

  cout << endl << "Finished counting letters in file " << infile << ":" <<endl;

  // Iterate over whole map for output
  for ( map<char,int>::const_iterator i = my_count.begin();
	i != my_count.end(); ++i)
    cout << i->first << ": " << i->second << endl;
  
  return 0;
}
