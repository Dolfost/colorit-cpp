# colorit
> ![demo](https://github.com/Dolfost/colorit-cpp/blob/update/readme/demo.gif)

This C++ the library simplifies changing the appearance of the terminal text output.  
Independently of each other you can change the style and color of the text, the background color.

## Usage

### Functions
>`char* setBack(short arg)`,   
>`char* setFore(short arg)`;  
Arguments:  
> `short arg`: 1 of 256 color format. *range*: [0 - 255];  
Return:  
`char*`: ansicode. See [showall.cpp](https://github.com/Dolfost/colorit-cpp/blob/main/readme/run/showall.cpp) for example.  

>`char* setBack(short r, short g, short b)`,   
>`char* setFore(short r, short g, short b)`;  
Arguments:  
> `short r, g, b`: RGB color format. *range of each varriable*: [0 - 255];   
Return:  
`char*`: ansicode. See [showall.cpp](https://github.com/Dolfost/colorit-cpp/blob/main/readme/run/showall.cpp) for example.  

#### Terminal colors

> ![Colors](https://github.com/Dolfost/colorit-cpp/blob/main/readme/terminal_colors.png)
#### More about functions: [libinfo.txt](https://github.com/Dolfost/colorit-cpp/blob/main/readme/libinfo.txt).

### Constants

#### Text modes:
Style.           | Name
---------------|-------------------------
BOLD 		     | bold mode
DIM  		     | dim/faint mode
FAINT 		     | dim/faint mode 
ITALIC 	     | italic mode 
UNDERLINE	   | underline mode 
OVERLINE     | overline mode
BLINKING	     | blinking mode 
INVERT		     | invert/reverse mode  
REVERSE       |	invert/reverse mode  
HIDE      	   | invisible mode  
STRIKE         |	strikethrough mode
               
#### Foreground colors:
Fore.        | Name
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
Back.       | Name
-----------|--------------------------------
BLACK		 |    black
RED		   |    red 
GREEN	   |   	green
YELLOW		 |    yellow
BLUE		   |    blue 
MAGNETA	 |    magneta
CYAN		   |    cyan
WHITE		 |    white

#### Reset
Style.      | Name
----------|---------------------------------
RST		  |     style reset, resets all changes

### Example:
```C++
#include <iostream>
#include "colorit/colorit.hpp"

int main(void) {
  std::cout << Fore.RED <<  Style.ITALIC << "Hello!" << Style.RST << "\n"; // prints red text in italic style (mode)
  return 0;
}
```

### That's not all, the rest of constants, aliases, modes and other libinfo: [libinfo.txt](https://github.com/Dolfost/colorit-cpp/blob/main/readme/libinfo.txt). 
-------------------------------------------
‎  
## License: LGPL-3.0
[GNU General Public License v3.0](https://github.com/Dolfost/colorit-cpp/blob/main/COPYING)  




##### *Coffe...?* [PayPal](https://www.paypal.com/donate?hosted_button_id=BZ6DNYKFPBWNA)  
