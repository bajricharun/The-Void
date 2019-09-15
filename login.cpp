#include <iostream>
#include <string>
#include "help.cpp"
#include "exit.cpp"
#include "welcome.cpp"
#include "start.cpp"

int main() {
  welcome();
	while(true) {
		std::string c;
		std::cout<<"<< ";
		std::cin>>c;
		if (c == "help") {
			help();
		}
		if (c == "exit") {
      exit();
      return 0;       
   }
   if (c == "start") {
     start();   	
   }
     if (c == "gather") {
	std::cout<<"You have picked up an item: PIECE OF GLASS.\n";
     	step1();
     }
   
}


return 0;
}
