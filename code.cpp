#include <iostream>
#include <string>

struct note{
	std::string name;
	std::string tele;
	int bday[3];
};

int main(){
	int sizeq = 2;
	std::cout << "Enter size of blocknote: ";
	std::cin >> sizeq;
	note blocknote[sizeq];
	std::string searchTele;
	bool isHere = false; 
	std::cout << "Enter name, tele, d, m, year by space" << std::endl;
	for(int i = 0; i < sizeq; i++){
		std::cout << i + 1 << ". ";                                                                                                                                                          
    	std::cin >> blocknote[i].name >> blocknote[i].tele >> blocknote[i].bday[0] >> blocknote[i].bday[1] >> blocknote[i].bday[2];
 	}
	do{
	std::cout << "Enter number tele: ";
	std::cin >> searchTele;
	for	(int i = 0; i < sizeq; i++) {
		if(searchTele == blocknote[i].tele){
			isHere = true;
			std::cout << blocknote[i].name << " " <<  blocknote[i].tele << " " <<  blocknote[i].bday[0] << "." << blocknote[i].bday[1] <<  "." << blocknote[i].bday[2] << std::endl;   

		}
	}			
	if(!isHere)
		std::cout << "Type another one" << std::endl;	
	}while(!isHere);
	return 0;
}
