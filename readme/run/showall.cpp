#include <iostream>

#include "../../colorit.hpp"

int main(){
	
	std::cout << Style.BOLD << Fore.RED << "Bold red!" << Style.RST << "\n";
	std::cout << Style.STRK << Fore.RED << "C" << Fore.BLU << "o" << Fore.YEL << "l" << Fore.GRN << "o" << Fore.CYN << "r" << Fore.MAG << "f" << Fore.WHT << "u" << Fore.BLK << "l" << Style.RST << "\n"; 
	std::cout << Style.ITLC << Fore.RED << "C" << Fore.BLU << "o" << Fore.YEL << "l" << Fore.GRN << "o" << Fore.CYN << "r" << Fore.MAG << "f" << Fore.WHT << "u" << Fore.BLK << "l" << Style.RST << "\n"; 
	std::cout << Style.UNDERLINE << Fore.RED << "C" << Fore.BLU << "o" << Fore.YEL << "l" << Fore.GRN << "o" << Fore.CYN << "r" << Fore.MAG << "f" << Fore.WHT << "u" << Fore.BLK << "l" << Style.RST << "\n"; 

	std::cout << Style.ITLC << "Enter a terminal color code <0-255> " << Style.RST;
	int code;
	std::cin >> code;
	setFore(code);
	std::cout << "\nThis text in color #" << code << "!" << Style.RST << "\n"
		     "But this sentence not colorful...\n";
	std::cout << Style.ITLC << "Enter a terminal rgb color code <0-255> " << Style.RST;
	int r, g, b;
	std::cin >> r >> g >> b;
	setFore(r,g,b);
	std::cout << "\nThis text in color r"<<r<<" g"<<g<<" b"<<b<< "!" << Style.RST << "\n"
		     "But this sentence not colorful...\n";
	return 0;
}

