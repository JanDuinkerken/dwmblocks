//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"CPU: ", "sh $HOME/Projects/dwm/dwmblocks/scripts/cpu-freq.sh", 5, 0},

	{"Mem: ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"Updates: ", "sh $HOME/Projects/dwm/dwmblocks/scripts/updates.sh", 350, 0},
	
	{"", "sh $HOME/Projects/dwm/dwmblocks/scripts/system-bluetooth.sh", 10, 0},

	{"Bat: ", "sh $HOME/Projects/dwm/dwmblocks/scripts/battery.sh", 10, 0},

	{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
