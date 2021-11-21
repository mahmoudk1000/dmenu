/* See LICENSE file for copyright and license details. */
/* These settings can be overriden by command line. */

static int topbar = 1;                     /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                   /* -c option; centers dmenu on screen */
static int min_width = 500;                /* minimum width when centered */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = { "Iosevka Curly Slab:pixelsize=12.2:style=bold" };
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                  fg         bg     */
	[SchemeNorm] = { "#fdf9f7", "#121213" },
	[SchemeSel]  = { "#121213", "#9dacde" },
	[SchemeOut]  = { "#000000", "#00ffff" },
	[SchemeSelHighlight]  = { "#fdf9f7", "#9dacde" },
	[SchemeNormHighlight] = { "#da9dac", "#121213" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 36;
static unsigned int min_lineheight = 8;
static unsigned int columns    = 2;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
