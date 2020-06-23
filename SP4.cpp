#include <iostream>
#include <fstream>
using namespace std;

//Membuat File
int main()
{
    ofstream mhsFile;

    mhsFile.open("datamhs.txt");
    

    //menulis sesuatu kedalam file
    mhsFile << "Zahrizhal Ali\n";
    mhsFile << "A2\n";
    mhsFile << "13020190086\n";

    mhsFile.close();
    

}
