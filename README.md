# ansicolors

## Description: 
This C++ the library simplifies changing the appearance of the terminal text output.  
Independently of each other you can change the style and color of the text, the background color.

## Usage:

### Functions:
>`setBACKGROUND(*char)`, `setBACKGROUND(short)`,   
>`setFOREGROUND(*char)`, `setFOREGROUND(short)`;  
##### Arguments:  
> `short`: *range*: [0 - 255],  
>`*char`: array (adress of first element of array). 
 
To avoid buffer overflow, do not pass pointers to the first elements of arrays that are larger than 4 bytes.
Namely, `char str1[4] {"120"}` is suitable, and `char srt2[5] {"1203"}` is not. The number 3 from `str2` falls outside the array in the function.
*The zero character (`'\0'`) is one of 4.*

#### Terminal colors:

> ![Colors](https://github.com/Dolfost/ansicolors/blob/main/readme/terminal_colors.png)
#### More about functions: [libinfo.txt](https://github.com/Dolfost/ansicolors/blob/main/readme/libinfo.txt).

### Constants:

#### Text modes:
mXXX           | Name
---------------|----------------------------
mBOLD 		     | bold mode
mDIM  		     | dim/faint mode
mFAINT 		     | dim/faint mode 
mITALIC 	     | italic mode 
mUNDERLINE	   | underline mode 
mBLINKING	     | blinking mode 
mINVERT		     | invert/reverse mode  
mREVERSE       |	invert/reverse mode  
mINVISIBLE	   | invisible mode  
mSTRIKETHROUGH |	strikethrough mode
                
#### Foreground colors:
XXX        | Name
-----------|--------------------------------
BLACK		   |    black 
RED		     |    red
GREEN		   |    green
YELLOW	   |    yellow
BLUE		   |    blue
MAGNETA		 |    magneta
CYAN		   |    cyan
WHITE		   |     white
                
#### Backgroud colors:
bXXX       | Name
-----------|--------------------------------
bBLACK		 |    black
bRED		   |    red 
bGREEN	   |   	green
bYELLOW		 |    yellow
bBLUE		   |    blue 
bMAGNETA	 |    magneta
bCYAN		   |    cyan
bWHITE		 |    white

#### Reset:
sXXX      | Name
----------|---------------------------------
sRST		  |     style reset, resets all changes;

### Example:
```C++
#include <iostream>
#include "ascicolor/ascicolors.hpp"

int main(void) {
  std::cout << RED mITALIC "Hello!" sRST "\n"; // prints red text in italic style (mode)
  return 0;
}
```

### That's not all, the rest of constants and other libinfo: [libinfo.txt](https://github.com/Dolfost/ansicolors/blob/main/readme/libinfo.txt). 

‎  
## License: LGPL-3.0
[GNU General Public License v3.0](https://github.com/Dolfost/ansicolors/blob/main/COPYING)  
‎  
‎  
‎  
‎
‎
‎
##### *Coffe...?* [PayPal](https://www.paypal.com/donate?hosted_button_id=BZ6DNYKFPBWNA)  
