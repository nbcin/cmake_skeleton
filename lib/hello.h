#ifndef _HELLO_H_
#define _HELLO_H_

/**
 * @file hello.h
 * @brief libhello main header
 * @author Jean Guyomarc'h
 * @defgroup toplevel Top level functions
 * @brief Functions that are shared by all the submodules
 * @{
 */


#include <Eina.h>

/**
 * Initialize libhello.
 * @return How many times the library have been initialized.
 */
int hello_init(void);

/**
 * Shutdown libhello.
 * @return How many times the library have been initialized and not released.
 */
int hello_shutdown(void);

/**
 * @}
 *
 * @defgroup math Mathematics
 * @brief Mathematical functions
 * @{
 */

/**
 * Makes the sum of two integers.
 * @param a First integer
 * @param b Second integer
 * @return The sum of @e a and @e b
 */
int hello_plus(int a, int b);

/**
 * Makes the difference of two integers.
 * @param a First integer
 * @param b Second integer
 * @return The difference of @e a and @e b
 */
int hello_minus(int a, int b);


/** @} */

#endif /* ! _HELLO_H_ */

