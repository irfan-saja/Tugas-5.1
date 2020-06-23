#include <iostream>
#include <fstream>
using namespace std;

//Membuat File
int main()
{
    ofstream datamhs;

    datamhs.open("datamhs.txt");
    

    //menulis sesuatu kedalam file
    datamhs << "Zahrizhal Ali\n";
    datamhs << "A2\n";
    datamhs << "13020190086\n";
    datamhs << "4.00\n";

    datamhs.close();
    

}
