#include <iostream>

#include "../../ansicolors.hpp"

int main(){
	
	std::cout << mBLD RED "Bold red!" sRST "\n";
	std::cout << mSTRIKETHROUGH RED "C" BLU "o" YEL "l" GRN "o" CYN "r" MAG "f" WHT "u" BLK "l" sRST "\n"; 
	std::cout << mITALIC RED "C" BLU "o" YEL "l" GRN "o" CYN "r" MAG "f" WHT "u" BLK "l" sRST "\n"; 
	std::cout << mUNDERLINE RED "C" BLU "o" YEL "l" GRN "o" CYN "r" MAG "f" WHT "u" BLK "l" sRST "\n";

	std::cout << mITLC "Enter a terminal color code <char[10]> <0-255> " sRST;
	char code[10];
	std::cin.get(code, 10).get();
setFOREGROUND(code);
	std::cout << "\nThis text in color #" << code << "!" sRST "\n"
		     "But this sentence not colorful...\n";
	return 0;
}