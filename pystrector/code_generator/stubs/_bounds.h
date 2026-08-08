/* Stub for the macOS SDK header of the same name.
 *
 * A Homebrew gcc ships its own fixed copy of <_stdio.h>, taken from a
 * newer SDK than the one installed, and that copy includes <_bounds.h>
 * with the bounds-safety annotations below. When the header is missing
 * the preprocessor stops before it reaches a single CPython struct.
 *
 * The annotations say nothing about layout, so defining them away is
 * safe; this file only has to come first on the include path.
 */
#define _LIBC_COUNT(...)
#define _LIBC_COUNT_OR_NULL(...)
#define _LIBC_CSTR
#define _LIBC_PTRCHECK_REPLACED(...)
#define _LIBC_SINGLE_BY_DEFAULT(...)
#define _LIBC_SIZE(...)
#define _LIBC_UNSAFE_INDEXABLE
