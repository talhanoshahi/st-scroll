/*
 * Define ESC sequences to use for scroll events.
 * Use "cat -v" to figure out favorite key combination.
 *
 * lines is the number of lines scrolled up or down.
 * If lines is negative, it's the fraction of the terminal size.
 */

struct rule rules[] = {
	/* sequence     event        lines */
	{"\033[5~",   SCROLL_UP,   -1},	/* [Shift] + [PageUP] */
	{"\033[6~",   SCROLL_DOWN,   -1},	/* [Shift] + [PageDOWN] */
	{"\033k",   SCROLL_UP, 3},	/* [Alt] + [K] */
	{"\033j",   SCROLL_DOWN, 3},	/* [Alt] + [J] */
	/* mouse binding shadows ^E and ^Y, so it's disabled by default */
	//{"\031",        SCROLL_UP,    1},	/* mouse wheel up */
	//{"\005",        SCROLL_DOWN,  1},	/* mouse wheel Down */
};
