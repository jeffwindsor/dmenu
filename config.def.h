/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

#include "colors_tender.h"      /* color scheme */

static int centered  = 0;           /* -c option; centers dmenu on screen */
static int fuzzy     = 1;           /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int min_width = 500;         /* minimum width when centered */
static int topbar    = 1;           /* -b  option; if 0, dmenu appears at bottom     */
static unsigned int border_width    = 0;
static unsigned int lineheight      = 0;
static unsigned int lines           = 20;   /* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int min_lineheight  = 8;    /* -h option; minimum height of a menu line */

static const char *fonts[]               = { "monospace:size=12" }; /* -fn option overrides fonts[0]; default X11 font or font set */
static const char *prompt                = NULL;                    /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                        fg            bg       */
	[SchemeNorm]          = { col_blue1,    col_bg },
	[SchemeSel]           = { col_blue1,    col_blue5 },
	[SchemeSelHighlight]  = { col_yellow1,  col_bg },
	[SchemeNormHighlight] = { col_yellow1,  col_blue5 },
	[SchemeOut]           = { col_red1,     col_red5 },
};

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

