#include <iostream>
#include "../../ansicolors.hpp"

int main(void) {
	std::cout << "Colors:\n"
	             BLK "Black \t" RED "Red \t\t" GREEN "Green \t" YEL "Yellow \n"
	             BLU "Blue \t" MAG "Magneta \t" CYN "Cyan \t" WHT "White" sRST "\n\n"
		     "High intensty colors:\n"
	             BLKh "Black \t" REDh "Red \t\t" GREENh "Green \t" YELh "Yellow \n"
	             BLU "Blue \t" MAGh "Magneta \t" CYNh "Cyan \t" WHTh "White" sRST "\n\n"
                     "Backgrounds:\n"
	             bBLK "Black" sRST " \t" bRED "Red" sRST " \t\t" bGREEN "Green" sRST " \t" bYEL "Yellow" sRST "\n"
	             bBLU "Blue" sRST " \t" bMAG "Magneta" sRST " \t" bCYN "Cyan" sRST " \t" bWHT "White" sRST "\n\n"
		     "High intensty backgrounds:\n"
	             bBLKh "Black" sRST " \t" bREDh "Red" sRST " \t\t" bGREENh "Green" sRST " \t" bYELh "Yellow" sRST "\n"
	             bBLU "Blue" sRST " \t" bMAGh "Magneta" sRST " \t" bCYNh "Cyan" sRST " \t" bWHTh "White" sRST "\n\n"

		    "Modes:\n"
		     mBOLD "Bold \t\t" sRST mDM "Dim \t" sRST mFAINT "Faint \t\t" sRST mITALIC "Italic \t\t" sRST mUNDERLINE "Underline" sRST "\n"
		     mBLINKING "Blinking \t" sRST mINVERT "Invert \t" mREVERSE "Reverse \t" sRST mINVSBL "Invisible \t" sRST mSTRIKETHROUGH "Strikethrough" sRST "\n"
		     "                 \t\t        ^   ^   ^\n"
		     "                 \t\t        Invisible\n";
	return 0;
}
