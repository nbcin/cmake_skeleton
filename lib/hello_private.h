#ifndef _HELLO_PRIVATE_H_
#define _HELLO_PRIVATE_H_

/**
 * @defgroup private Private API
 * @brief These are some private symbols
 * @{
 */

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

