/*****************************************************************//**
 * \file   HugeInt.h
 * \brief  Header of the library allowing the management of HugeInt.
 *
 * \author Jean-Aymeric DIET jeanaymeric@gmail.com
 * \date   September 2020
 *********************************************************************/
#ifndef HUGE_INT
#define HUGE_INT

#include "HugeUnsignedInt.h"

/**
 * \enum Sign
 * \brief a simply enum to manage the sign of a HugeUnsignedInt.
 */
typedef enum Sign {
    PLUS, /**< the value that represents the plus sign*/
    MINUS /**< the value that represents the minus sign */
}Sign;

/**
 * \typedef struct HugeInt
 * \brief a HugeInt is a HugeUnsignedInt with a sign.
 */
typedef struct HugeInt {
    HugeUnsignedInt* absoluteValue; /**< the absolute value of the HugeInt */
    Sign sign; /**< the Sign of the HugeInt */
}HugeInt;

/**
 * \brief Function to create an empty HugeInt.
 * \return the HugeInt's pointer, if the HugeInt is created.
 * \return \c NULL, if the HugeInt could not be created.
 */
extern HugeInt* createHugeInt            (void);

/**
 * \brief Function to create an initialized HugeInt.
 *        \n Example :
 *         \code{.c}
 *         HugeInt* hugeInt = createHugeIntFromString("+12345678901234567890");
 *         \endcode
 * \param digitString a string wtih the sign and the integer used to initialized the HugeInt.
 * \return the HugeInt's pointer, if the HugeInt is created.
 * \return \c NULL, if the HugeInt could not be created.
 */
extern HugeInt* createHugeIntFromString  (const char* digitString);

/**
 * \brief Function to create a HugeInt initialized with the \c size initial values of another HugeInt.
 *        The sign is always copied.
 *        \n Example :
 *         \code{.c}
 *         // Copy the sign and all the values of hugeIntSource in the new hugeIntDest
 *         HugeInt* hugeIntDest = createHugeIntFromHugeInt(hugeIntSource, -1);
 *
 *         // Copy the sign and just the first 5 values of hugeIntSource in the new hugeIntDest
 *         HugeInt* hugeIntDest = createHugeIntFromHugeInt(hugeIntSource, 5);
 *         \endcode
 * \param hugeInt the HugeInt to copy.
 * \param size the number of values to copy, enter \c -1 to copy all the values.
 * \return the HugeInt's pointer, if the HugeInt is created.
 * \return \c NULL, if the HugeInt could not be created.
 */
extern HugeInt* createHugeIntFromHugeInt (const HugeInt* hugeInt, const unsigned int size);

/**
 * \brief Function to delete a HugeInt and free its memory.
 * \param hugeInt a pointer to the HugeInt to delete.
 */
extern void     deleteHugeInt            (HugeInt* hugeInt);

/**
 * \brief Function to know the length of a HugeInt.
 * \param hugeInt a pointer to the HugeInt to query.
 * \return an int that represents the length of the HugeInt.
 */
extern int      getHugeIntLength         (const HugeInt* hugeInt);

/**
 * \brief Function to simplify a HugeInt.
 *        \n By simplify i mean delete the \c 0 before the real value of the HugeInt.
 * \param hugeInt a pointer to the HugeInt to simplify.
 * \return the HugeInt's pointer, if the HugeInt simplified.
 * \return \c NULL, if an error occurs.
*/
extern HugeInt* simplifyHugeInt          (HugeInt* hugeInt);

#endif // !HUGE_INT

