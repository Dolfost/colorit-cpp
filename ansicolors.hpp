// ansicolors.hpp -- <lib> ANSI Sequences constants of colors and styles

#ifndef ANSICOLORS_H
#define ANSICOLORS_H

#include <iostream>
#include <cstring>

// style reset
#define sRST		"\e[0m"

// styles
#define mBOLD 		"\e[1m"
#define mDIM  		"\e[2m"
#define mFAINT 		"\e[2m"
#define mITALIC 	"\e[3m"
#define mUNDERLINE	"\e[4m"
#define mBLINKING	"\e[5m"
#define mINVERT		"\e[7m"
#define mREVERSE	"\e[7m"
#define mINVISIBLE	"\e[8m"
#define mSTRIKETHROUGH	"\e[9m"

#define mBLD 		"\e[1m"
#define mDM  		"\e[2m"
#define mFNT 		"\e[2m"
#define mITLC 		"\e[3m"
#define mUNDRLN		"\e[4m"
#define mBLNK		"\e[5m"
#define mINVRT		"\e[7m"
#define mRVRS		"\e[7m"
#define mINVSBL		"\e[8m"
#define mSTRKTHRGH	"\e[9m"


// colors
// foreground colors

#define BLACK		"\e[30m"
#define RED		"\e[31m"
#define GREEN		"\e[32m"
#define YELLOW		"\e[33m"
#define BLUE		"\e[34m"
#define MAGNETA		"\e[35m"
#define CYAN		"\e[36m"
#define WHITE		"\e[37m"

#define BLK		"\e[30m"
#define RED		"\e[31m"
#define GRN		"\e[32m"
#define YEL		"\e[33m"
#define BLU		"\e[34m"
#define MAG		"\e[35m"
#define CYN		"\e[36m"
#define WHT		"\e[37m"

// high intensty foreground colors
#define BLACKh		"\e[90m"
#define REDh		"\e[91m"
#define GREENh		"\e[92m"
#define YELLOWh		"\e[93m"
#define BLUEh		"\e[94m"
#define MAGNETAh	"\e[95m"
#define CYANh		"\e[96m"
#define WHITEh		"\e[97m"

#define BLKh		"\e[90m"
#define REDh		"\e[91m"
#define GRNh		"\e[92m"
#define YELh		"\e[93m"
#define BLUh		"\e[94m"
#define MAGh		"\e[95m"
#define CYNh		"\e[96m"
#define WHTh		"\e[97m"


// background colors
#define bBLACK		"\e[40m"
#define bRED		"\e[41m"
#define bGREEN		"\e[42m"
#define bYELLOW		"\e[43m"
#define bBLUE		"\e[44m"
#define bMAGNETA	"\e[45m"
#define bCYAN		"\e[46m"
#define bWHITE		"\e[47m"

#define bBLK		"\e[40m"
#define bRED		"\e[41m"
#define bGRN		"\e[42m"
#define bYEL		"\e[43m"
#define bBLU		"\e[44m"
#define bMAG		"\e[45m"
#define bCYN		"\e[46m"
#define bWHT		"\e[47m"

// high intensty background colors
#define bBLACKh		"\e[100m"
#define bREDh		"\e[101m"
#define bGREENh		"\e[102m"
#define bYELLOWh	"\e[103m"
#define bBLUEh		"\e[104m"
#define bMAGNETAh	"\e[105m"
#define bCYANh		"\e[106m"
#define bWHITEh		"\e[107m"

#define bBLKh		"\e[100m"
#define bREDh		"\e[101m"
#define bGRNh		"\e[102m"
#define bYELh		"\e[103m"
#define bBLUh		"\e[104m"
#define bMAGh		"\e[105m"
#define bCYNh		"\e[106m"
#define bWHTh		"\e[107m"

// fuctions for set a foreground 
// and background color <0-255>

#define setFOREGROUND setFRGRND
#define setBACKGROUND setBKGRND

void setFRGRND(const char *code) {
	char ansicode[12] = "\e[38;5;";
	strncat(ansicode, code, 3);
	strcat(ansicode, "m");
	std::cout << ansicode; }

void setFRGRND(const unsigned short arg) {
	char ansicode[12] = "\e[38;5;";
	char code[4];
	snprintf(code, 4, "%d", arg);
	strncat(ansicode, code, 3);
	strcat(ansicode, "m");
	std::cout << ansicode; }


void setBKGRND(const char *code) {
	char ansicode[12] = "\e[48;5;";
	strncat(ansicode, code, 3);
	strcat(ansicode, "m");
	std::cout << ansicode; }

void setBKGRND(const unsigned short arg) {
	char ansicode[12] = "\e[48;5;";
	char code[4];
	snprintf(code, 4, "%d", arg);
	strncat(ansicode, code, 3);
	strcat(ansicode, "m");
	std::cout << ansicode; }

#endif

// last edit: 12/08/2021
// developed by https://github.com/Dolfost
// license : https://github.com/Dolfost/ansicolors-cpp/blob/main/COPYING
