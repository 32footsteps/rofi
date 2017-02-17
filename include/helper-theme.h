#ifndef ROFI_HELPER_THEME_H
#define ROFI_HELPER_THEME_H
#include <pango/pango.h>
#include "theme.h"
/**
 * @defgroup HELPERS Helpers
 * @{
 */
/**
 * @param th The ThemeHighlight
 * @param tokens Array of regexes used for matching
 * @param input The input string to find the matches on
 * @param retv The Attribute list to update with matches
 *
 * Creates a set of pango attributes highlighting the matches found in the input string.
 *
 * @returns the updated retv list.
 */
PangoAttrList *helper_token_match_get_pango_attr ( ThemeHighlight th, GRegex **tokens, const char *input, PangoAttrList *retv );

/**
 * @param pfd Pango font description to validate.
 * @param font The name of the font to check.
 *
 * @returns true if font is valid.
 */
gboolean helper_validate_font ( PangoFontDescription *pfd, const char *font );
/* @} */
#endif // ROFI_HELPER_THEME_H
