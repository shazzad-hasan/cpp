/* Program illustrating the use of 2-D array */ 

/* Write a program that akes in a two dimensional array of data 
and creates a csv file with the name specified in the parameter.*/

#include <iostream>
#include <fstream>
using namespace std;

void csv_export(string data[][10], int records, int columns, string filename) {
    ofstream myFile;
    myFile.open(filename);

    if (!myFile){
      cout << "Unable to open file" << endl;
      exit(0);
    }

    for (int i = 0; i < records; i++) {
      for (int j = 0; j < columns; j++) {
        myFile << data[i][j];
        if (j < columns - 1) {
            myFile << ",";
        }
      }
      myFile << endl;
    }
    myFile.close();
}

int main() {
  string data[10][10] = {
    {"aspen", "olmsted", "aspen@pleasedonotemail.com"},
    {"sally", "jones", "sally@gmail.com"},
    {"fred", "smith", "fsmith@aol.com"}
  };

  csv_export(data, 3, 3, "customers.csv");

  return 0;
}
