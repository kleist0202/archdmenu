/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 600;                 /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"noto:size=12",
    "FiraCode Nerd Font:size=12"
};

static char normfgcolor[] = "#cccccc";
static char normbgcolor[] = "#111111";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#112555";
static char outfgcolor[]  = "#000000";
static char outbgcolor[]  = "#00ffff";
static char hlfgcolor[]  = "#f1fa8c";
static char hlbgcolor[]  = "#3E485B";
static char schemehoverfg[]  = "#ffffff";
static char schemehoverbg[]  = "#112555";

static char schemebluefg[]  = "#ffffff";
static char schemebluebg[]  = "#5301e0";

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][10] = {
	/*     fg         bg       */
	[SchemeNorm] = { normfgcolor, normbgcolor, normbgcolor },
	[SchemeSel] = { selfgcolor, selbgcolor, selbgcolor },
	[SchemeOut] = { outfgcolor, outbgcolor, outbgcolor },
    [SchemeHighlight] = { hlfgcolor, hlbgcolor, hlbgcolor },
    [SchemeHover] = { schemehoverfg, schemehoverbg, schemehoverbg },
    [SchemeGreen] = {"#ffffff", "#52E067", "#41b252"},
    [SchemeRed] = {"#ffffff", "#e05252", "#c24343"},
    [SchemeYellow] = {"#ffffff", "#e0c452", "#bca33f"},
    [SchemeBlue] = { schemebluefg, schemebluebg, schemebluebg },
    [SchemePurple] = {"#ffffff", "#9952e0", "#7439b0"},
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 24;
static unsigned int min_lineheight = 8;
static int sely = 0;
static int commented = 0;
static int animated = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "color15", STRING, &normfgcolor },
	{ "color0", STRING, &normbgcolor },
	{ "color15",  STRING, &selfgcolor },
	{ "color5",  STRING, &selbgcolor },
	{ "color15",  STRING, &outfgcolor },
	{ "color14",  STRING, &outbgcolor },
	{ "foreground",  STRING, &hlfgcolor },
	{ "background",  STRING, &hlbgcolor },
	{ "foreground",  STRING, &schemehoverfg },
	{ "color5",  STRING, &schemehoverbg },
	{ "foreground",  STRING, &schemebluefg },
	{ "color13",  STRING, &schemebluebg },
};

/* Size of the window border */
static unsigned int border_width = 0;
