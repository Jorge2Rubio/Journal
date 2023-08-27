#include <iostream>
#include <string>
#include <fstream>
#include <direct.h>

//create date filter --> soon.
//create duplicate file --> soon.

int main(){
  std::string date, input_filePath, message, input_fileName;
  try {

    mkdir("Journal_Messages");
    std::string filePath;
    std::cout<<"Date today: ";
    std::getline(std::cin, date);

    std::cout<<"Message: ";
    std::getline(std::cin, message);

    std::cout<<"Filename: ";
    std::getline(std::cin, input_fileName);

    filePath.append("Journal_Messages\\" + input_fileName + ".txt");
    std::ofstream fileJournal (filePath);
    fileJournal << message;
    fileJournal.close();



  }catch(...){
    std::cout<<"Invalid, try again!";
  }
}