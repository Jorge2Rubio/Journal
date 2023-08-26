#include <iostream>
#include <string>
#include <fstream>
#include <direct.h>

//create date filter --> soon.
//create duplicate file --> soon.

int main(){
  std::string date, input_filePath, message;
  try {

    mkdir("Journal_Messages");
    std::string filePath;
    std::cout<<"Date today: ";
    std::getline(std::cin, date);

    filePath.append("Journal_Messages\\" + date + ".txt");
    std::ofstream fileJournal (filePath);

    std::cout<<"Message: ";
    std::getline(std::cin, message);

    fileJournal << message;
    fileJournal.close();

  }catch(...){
    std::cout<<"Invalid, try again!";
  }
}