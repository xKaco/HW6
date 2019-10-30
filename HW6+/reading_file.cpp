/** Simple On-board LED flashing program - written in C++ by Derek Molloy
*    simple functional struture for the Exploring BeagleBone book
*
*    This program uses USR LED 3 and can be executed in three ways:
*         makeLED on
*         makeLED off
*         makeLED flash  (flash at 100ms intervals - on 50ms/off 50ms)
*         makeLED status (get the trigger status)
*
* * Written by Derek Molloy for the book "Exploring BeagleBone: Tools and 
* Techniques for Building with Embedded Linux" by John Wiley & Sons, 2014
* ISBN 9781118935125. Please see the file README.md in the repository root 
* directory for copyright and GNU GPLv3 license information.            */

#include<iostream>
#include<fstream>
#include<string>
using namespace std;


#define FILE_PATH "/home/debian/HW6"


int main(int argc, char* argv[]){
   if(argc!=2){
	cout << "Usage is for reading file sample_read.txt: " << endl;
        return 2;
   }


   string cmd(argv[1]);// argument after command 
   cout << "Starting the reading_file program" << endl;
   cout << "The current reading_file Path is: " << FILE_PATH << endl;
   
	// display the current trigger details
        std::fstream fs;  //needed
	string cmd_path = "/" + cmd;
	fs.open( FILE_PATH + cmd_path, std::fstream::in);
	string line;
	while(getline(fs,line)) cout << line << endl;
	fs.close();
	
   cout << "Finished the reading_file Program" << endl;
   return 0;
}
