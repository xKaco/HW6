#include<iostream>
#include<fstream>
#include<string>
using namespace std;


#define FILE_PATH "/home/debian/HW6"


int main(int argc, char* argv[]){
   if(argc!=2){
	cout << "Usage is for writing file sample_write.txt: " << endl;
        return 2;
   }


   string cmd(argv[1]);// argument after command 
   cout << "Starting the writing_file program" << endl;
   cout << "The current writing_file Path is: " << FILE_PATH << endl;
   
	// display the current trigger details
        std::fstream fs;  //needed
	string cmd_path = "/" + cmd;
	fs.open( FILE_PATH + cmd_path, std::fstream::out);//changed in to out to write to a file
		fs <<"I watched the movie Star Wars I."<<endl;
		fs <<"I watched the movie Star Trek."<<endl; 
	fs.close();
	
   cout << "Finished the writing_file Program" << endl;
   return 0;
}
