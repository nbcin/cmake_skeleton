#ifndef _HELLO_PRIVATE_H_
#define _HELLO_PRIVATE_H_

/**
 * @file hello_private.h
 * @brief Libhello private header
 * @author Jean Guyomarc'h
 * @defgroup private Private API
 * @brief Private API for the library developers only.
 * @{
 */

#include "hello_config.h"

#ifdef EAPI
# undef EAPI
#endif

#ifdef __GNUC__
# if __GNUC__ >= 4
#  define EAPI __attribute__ ((visibility("default")))
# else
#  define EAPI
# endif
#else
/**
 * @def EAPI
 * @brief Used to export functions by changing visibility.
 */
# define EAPI
#endif

/** @} */


#endif /* ! _HELLO_PRIVATE_H_ */

