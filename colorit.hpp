// colorit.hpp -- colors based on ANSI Escape Sequences
// v3.1.2

#ifndef COLORIT_H
#define COLORIT_H

#include <iostream>
#include <cstring>

const struct Colorit_data_ {
	// foreground
	const char *Black_fg           {"\e[30m"};
	const char *Red_fg             {"\e[31m"};
	const char *Green_fg           {"\e[32m"};
	const char *Yellow_fg          {"\e[33m"};
	const char *Blue_fg            {"\e[34m"};
	const char *Magneta_fg         {"\e[35m"};
	const char *Cyan_fg            {"\e[36m"};
	const char *White_fg           {"\e[37m"};
	// high intensty foreground
	const char *h_Black_fg         {"\e[90m"};
	const char *h_Red_fg           {"\e[91m"};
	const char *h_Green_fg         {"\e[92m"};
	const char *h_Yellow_fg        {"\e[93m"};
	const char *h_Blue_fg          {"\e[94m"};
	const char *h_Magneta_fg       {"\e[95m"};
	const char *h_Cyan_fg          {"\e[96m"};
	const char *h_White_fg         {"\e[97m"};
	// background
	const char *Black_bg           {"\e[40m"};
	const char *Red_bg             {"\e[41m"};
	const char *Green_bg           {"\e[42m"};
	const char *Yellow_bg          {"\e[43m"};
	const char *Blue_bg            {"\e[44m"};
	const char *Magneta_bg         {"\e[45m"};
	const char *Cyan_bg            {"\e[46m"};
	const char *White_bg           {"\e[47m"};
	// high intensty background
	const char *h_Black_bg         {"\e[100m"};
	const char *h_Red_bg           {"\e[101m"};
	const char *h_Green_bg         {"\e[102m"};
	const char *h_Yellow_bg        {"\e[103m"};
	const char *h_Blue_bg          {"\e[104m"};
	const char *h_Magneta_bg       {"\e[105m"};
	const char *h_Cyan_bg          {"\e[106m"};
	const char *h_White_bg         {"\e[107m"};
	// style
	const char *Reset              {"\e[0m"};
	const char *Bold               {"\e[1m"};
	const char *Dim                {"\e[2m"};
//	const char *Faint              {"\e[2m"};
	const char *Italic             {"\e[3m"};
	const char *Underline          {"\e[4m"};
	const char *Slow_Blinking      {"\e[5m"};
	const char *Rapid_Blinking     {"\e[6m"}; //
	const char *Invert             {"\e[7m"};
//	const char *Reverse            {"\e[7m"};
	const char *Hide               {"\e[8m"};
	const char *Strike             {"\e[9m"}; //
	const char *Primary	       {"\e[10m"};
	const char *Double_Underline   {"\e[21m"};
	const char *Normal_Intensity   {"\e[22m"};
	const char *Not_Underlined     {"\e[24m"};
	const char *Not_Blinking       {"\e[25m"};
	const char *Not_Reversed       {"\e[27m"};
	const char *Not_Crossed_Out    {"\e[29m"};
	const char *Default_Background {"\e[49m"};
	const char *Overlined          {"\e[53m"};
	const char *Not_Overlined      {"\e[55m"};
} Colorit_data;

const struct Colorit_fore_ {
	const char *BLACK   {Colorit_data.Black_fg};
	const char *RED     {Colorit_data.Red_fg};
	const char *GREEN   {Colorit_data.Green_fg};
	const char *YELLOW  {Colorit_data.Yellow_fg};
	const char *BLUE    {Colorit_data.Blue_fg};
	const char *MAGNETA {Colorit_data.Magneta_fg};
	const char *CYAN    {Colorit_data.Cyan_fg};
	const char *WHITE   {Colorit_data.White_fg};
	// aliases
	const char *BLK     {Colorit_data.Black_fg};
//	const char *RED     {Colorit_data.Red_fg};
	const char *GRN     {Colorit_data.Green_fg};
	const char *YEL     {Colorit_data.Yellow_fg};
	const char *BLU     {Colorit_data.Blue_fg};
	const char *MAG     {Colorit_data.Magneta_fg};
	const char *CYN     {Colorit_data.Cyan_fg};
	const char *WHT     {Colorit_data.White_fg};
} Fore, F;

const struct Colorit_back_ {
	const char *BLACK   {Colorit_data.Black_bg};
	const char *RED     {Colorit_data.Red_bg};
	const char *GREEN   {Colorit_data.Green_bg};
	const char *YELLOW  {Colorit_data.Yellow_bg};
	const char *BLUE    {Colorit_data.Blue_bg};
	const char *MAGNETA {Colorit_data.Magneta_bg};
	const char *CYAN    {Colorit_data.Cyan_bg};
	const char *WHITE   {Colorit_data.White_bg};
	// aliases
	const char *BLK     {Colorit_data.Black_bg};
//	const char *RED     {Colorit_data.Red_bg};
	const char *GRN     {Colorit_data.Green_bg};
	const char *YEL     {Colorit_data.Yellow_bg};
	const char *BLU     {Colorit_data.Blue_bg};
	const char *MAG     {Colorit_data.Magneta_bg};
	const char *CYN     {Colorit_data.Cyan_bg};
	const char *WHT     {Colorit_data.White_bg};	
} Back, B;

const struct Colorit_bright_ {
	struct Colorit_h_Fore {
		const char *BLACK   {Colorit_data.h_Black_fg};
		const char *RED     {Colorit_data.h_Red_fg};
		const char *GREEN   {Colorit_data.h_Green_fg};
		const char *YELLOW  {Colorit_data.h_Yellow_fg};
		const char *BLUE    {Colorit_data.h_Blue_fg};
		const char *MAGNETA {Colorit_data.h_Magneta_fg};
		const char *CYAN    {Colorit_data.h_Cyan_fg};
		const char *WHITE   {Colorit_data.h_White_fg};
		// aliases
		const char *BLK     {Colorit_data.h_Black_fg};
//		const char *RED     {Colorit_data.h_Red_fg};
		const char *GRN     {Colorit_data.h_Green_fg};
		const char *YEL     {Colorit_data.h_Yellow_fg};
		const char *BLU     {Colorit_data.h_Blue_fg};
		const char *MAG     {Colorit_data.h_Magneta_fg};
		const char *CYN     {Colorit_data.h_Cyan_fg};
		const char *WHT     {Colorit_data.h_White_fg};
	} Fore, F;
	struct Colorit_h_Back {
		const char *BLACK   {Colorit_data.h_Black_bg};
		const char *RED     {Colorit_data.h_Red_bg};
		const char *GREEN   {Colorit_data.h_Green_bg};
		const char *YELLOW  {Colorit_data.h_Yellow_bg};
		const char *BLUE    {Colorit_data.h_Blue_bg};
		const char *MAGNETA {Colorit_data.h_Magneta_bg};
		const char *CYAN    {Colorit_data.h_Cyan_bg};
		const char *WHITE   {Colorit_data.h_White_bg};
		// aliases
		const char *BLK     {Colorit_data.h_Black_bg};
//		const char *RED     {Colorit_data.h_Red_bg};
		const char *GRN     {Colorit_data.h_Green_bg};
		const char *YEL     {Colorit_data.h_Yellow_bg};
		const char *BLU     {Colorit_data.h_Blue_bg};
		const char *MAG     {Colorit_data.h_Magneta_bg};
		const char *CYN     {Colorit_data.h_Cyan_bg};
		const char *WHT     {Colorit_data.h_White_bg};
	} Back, B;
} Bright, H;

const struct Colorit_style_ {
	const char *RESET            {Colorit_data.Reset};
	const char *BOLD             {Colorit_data.Bold};
	const char *DIM              {Colorit_data.Dim};
	const char *FAINT            {Colorit_data.Dim};
	const char *ITALIC           {Colorit_data.Italic};
	const char *UNDERLINE        {Colorit_data.Underline};
	const char *BLINK	     {Colorit_data.Slow_Blinking};
	const char *SLOW_BLINK       {Colorit_data.Slow_Blinking};
	const char *RAPID_BLINK      {Colorit_data.Rapid_Blinking};
	const char *INVERT           {Colorit_data.Invert};
	const char *REVERSE          {Colorit_data.Invert};
	const char *HIDE             {Colorit_data.Hide};
	const char *STRIKE           {Colorit_data.Strike};
	const char *PRIMARY	     {Colorit_data.Primary};
	const char *DBL_UNDERLINE    {Colorit_data.Double_Underline};
	const char *DEF_INTENSITY    {Colorit_data.Normal_Intensity};
	const char *NOT_UNDERLINED   {Colorit_data.Not_Underlined};
	const char *NOT_BLINK	     {Colorit_data.Not_Blinking};
	const char *NOT_REVERSED     {Colorit_data.Not_Reversed};
	const char *NOT_INVERSED     {Colorit_data.Not_Reversed};
	const char *NOT_CROSSED_OUT  {Colorit_data.Not_Crossed_Out};
	const char *DEF_BACKGROUND   {Colorit_data.Default_Background};
	const char *OVERLINED	     {Colorit_data.Overlined};
	const char *NOT_OVERLINED    {Colorit_data.Not_Overlined};
	// aliases
	const char *RST              {Colorit_data.Reset};
	const char *BLD              {Colorit_data.Bold};
//	const char *DIM              {Colorit_data.Dim};
	const char *FNT              {Colorit_data.Dim};
	const char *ITLC             {Colorit_data.Italic};
	const char *UNDRLN           {Colorit_data.Underline};
	const char *BLNK	     {Colorit_data.Slow_Blinking};
	const char *SLW_BLNK         {Colorit_data.Slow_Blinking};
	const char *RPD_BLNK	     {Colorit_data.Rapid_Blinking};
	const char *INVRT            {Colorit_data.Invert};
	const char *RVRS             {Colorit_data.Invert};
//	const char *HIDE             {Colorit_data.Hide};
	const char *STRK             {Colorit_data.Strike};
	const char *PRMR	     {Colorit_data.Primary};
	const char *DBL_UNDRLN       {Colorit_data.Double_Underline};
	const char *DEF_INTNST       {Colorit_data.Normal_Intensity};
	const char *NOT_UNDRLND      {Colorit_data.Not_Underlined};
	const char *NOT_BLNK	     {Colorit_data.Not_Blinking};
	const char *NOT_RVRSD        {Colorit_data.Not_Reversed};
	const char *NOT_INVRSD       {Colorit_data.Not_Reversed};
	const char *NOT_CRSSD_OUT    {Colorit_data.Not_Crossed_Out};
	const char *DEF_BKGRND       {Colorit_data.Default_Background};
	const char *OVRLND	     {Colorit_data.Overlined};
	const char *NOT_OVRLND       {Colorit_data.Not_Overlined};
} Style, S;

char colorit_ansicode_[20] {"\e["};

char* setFore(const short arg) {
	colorit_ansicode_[2] = '\0';
	strcat(colorit_ansicode_, "38;5;");
	char code[4];
	snprintf(code, 4, "%d", arg);
	strcat(colorit_ansicode_, code);
	strcat(colorit_ansicode_, "m");
	return colorit_ansicode_; }


char* setBack(const short arg) {
	colorit_ansicode_[2] = '\0';
	strcat(colorit_ansicode_, "48;5;");
	char code[4];
	snprintf(code, 4, "%d", arg);
	strcat(colorit_ansicode_, code);
	strcat(colorit_ansicode_, "m");
	return colorit_ansicode_; }

char* setFore(short r, short g, short b) {
	char red[4];
	char green[4];
	char blue[4];

	colorit_ansicode_[2] = '\0';

	snprintf(red, 4, "%d", r);
	snprintf(green, 4, "%d", g);
	snprintf(blue, 4, "%d", b);

	strcat(colorit_ansicode_, "38;2;");

	strcat(colorit_ansicode_, red);
	strcat(colorit_ansicode_, ";");
	strcat(colorit_ansicode_, green);
	strcat(colorit_ansicode_, ";");
	strcat(colorit_ansicode_, blue);
	strcat(colorit_ansicode_, "m");

	return colorit_ansicode_; }


char* setBack(short r, short g, short b) {
	char red[4];
	char green[4];
	char blue[4];

	colorit_ansicode_[2] = '\0';

	snprintf(red, 4, "%d", r);
	snprintf(green, 4, "%d", g);
	snprintf(blue, 4, "%d", b);

	strcat(colorit_ansicode_, "48;2;");

	strcat(colorit_ansicode_, red);
	strcat(colorit_ansicode_, ";");
	strcat(colorit_ansicode_, green);
	strcat(colorit_ansicode_, ";");
	strcat(colorit_ansicode_, blue);
	strcat(colorit_ansicode_, "m");

	return colorit_ansicode_; }
#endif

// last edit: 20/08/2021
// developed by https://github.com/Dolfost
// license : https://github.com/Dolfost/colorit-cpp/blob/main/COPYING
