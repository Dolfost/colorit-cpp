#include <iostream>
#include "../../colorit.hpp"

int main(void) {
	std::cout << "Colors:\n" <<
	             Fore.BLK<< "Black \t" <<Fore.RED<< "Red \t\t" <<Fore.GRN<< "Green \t" <<Fore.YEL<< "Yellow \n"
	             <<Fore.BLU<< "Blue \t" <<Fore.MAG<< "Magneta \t" <<Fore.CYN<< "Cyan \t" <<Fore.WHT<< "White" <<Style.RST<< "\n\n"
		     << "Bright Colors:\n" <<
	             Bright.Fore.BLK<< "Black \t" <<Bright.Fore.RED<< "Red \t\t" <<Bright.Fore.GRN<< "Green \t" <<Bright.Fore.YEL<< "Yellow \n"
	             <<Bright.Fore.BLU<< "Blue \t" <<Bright.Fore.MAG<< "Magneta \t" <<Bright.Fore.CYN<< "Cyan \t" <<Bright.Fore.WHT<< "White" <<Style.RST<< "\n\n"
                     "Backgrounds:\n"
	             <<Back.BLK<< "Black" <<Style.RST<< " \t" <<Back.RED<< "Red" <<Style.RST<< " \t\t" <<Back.GREEN<< "Green" <<Style.RST<< " \t" <<Back.YEL<< "Yellow" <<Style.RST<< "\n"
	             <<Back.BLU<< "Blue" <<Style.RST<< " \t" <<Back.MAG<< "Magneta" <<Style.RST<< " \t" <<Back.CYN<< "Cyan" <<Style.RST<< " \t" <<Back.WHT<< "White" <<Style.RST<< "\n\n"
		     "Bright backgrounds:\n"
	             <<Bright.Back.BLK<< "Black" <<Style.RST<< " \t" <<Bright.Back.RED<< "Red" <<Style.RST<< " \t\t" <<Bright.Back.GREEN<< "Green" <<Style.RST<< " \t" <<Bright.Back.YEL<< "Yellow" <<Style.RST<< "\n"
	             <<Bright.Back.BLU<< "Blue" <<Style.RST<< " \t" <<Bright.Back.MAG<< "Magneta" <<Style.RST<< " \t" <<Bright.Back.CYN<< "Cyan" <<Style.RST<< " \t" <<Bright.Back.WHT<< "White" <<Style.RST<< "\n\n"
		    "Modes:\n"
		     <<Style.BOLD<< "Bold \t\t\t" <<Style.RST<< Style.DIM<< "Dim/faint \t" <<Style.RST<< Style.ITALIC << "Italic \t\t" <<Style.RST<< Style.UNDERLINE << "Underline" <<Style.RST<< "\n"
		     << Style.DBL_UNDRLN << "Double Underline" << Style.RST << "\t" << Style.OVERLINED << "Overlined" << Style.RST << "\t" << Style.BLINK<< "Blinking \t" <<Style.RST<<Style.INVERT<< "Invert/Reverse \t" <<Style.RST<< "\n" 
		     <<Style.HIDE<< "Invisible \t\t" <<Style.RST<<Style.STRIKE << "Strikethrough" << Style.RST << "\n"
		     "^   ^   ^\n"
		     "Invisible\n";
	return 0;
}
