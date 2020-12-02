/*****************************************************************//**
 * \file   HugeFloat.h
 * \brief  Header of the library allowing the management of HugeFloat.
 *
 * \author Jean-Aymeric DIET jeanaymeric@gmail.com
 * \date   September 2020
 *********************************************************************/
#ifndef HUGE_FLOAT
#define HUGE_FLOAT

#include "HugeInt.h"

/**
 * \typedef struct HugeFloat
 * \brief a HugeFloat is composed by two HugeInt, one represents the significand and the other the exponent.
 */
typedef struct HugeFloat {
    HugeInt* significand;
    HugeInt* exponent;
} HugeFloat;

/**
 * \brief Function to create an empty HugeFloat.
 * \return the HugeFloat's pointer, if the HugeFloat is created.
 * \return \c NULL, if the HugeFloat could not be created.
 */
extern HugeFloat* createHugeFloat              (void);

/**
 * \brief Function to create an initialized HugeFloat.
 *        \n Example :
 *         \code{.c}
 *         HugeFloat* hugeFloat = createHugeFloatFromString("+12345678901234567890", "-12345678901234567890");
 *         // Create a HugeFloat equal to +12345678901234567890 x 10^-12345678901234567890
 *         \endcode
 * \param significandString a string wtih the sign and the integer used to initialized the HugeFloat's significand.
 * \param exponentString a string wtih the sign and the integer used to initialized the HugeFloat's exponent.
 * \return the HugeFloat's pointer, if the HugeFloat is created.
 * \return \c NULL, if the HugeFloat could not be created.
 */
extern HugeFloat* createHugeFloatFromString    (const char* significandString, const char* exponentString);

/**
 * \brief Function to create an initialized HugeFloat.
 * \param significandHugeInt a HugeInt's pointer used to initialized the HugeFloat's significand.
 * \param exponentSHugeInt a HugeInt's pointer used to initialized the HugeFloat's exponent.
 * \return the HugeFloat's pointer, if the HugeFloat is created.
 * \return \c NULL, if the HugeFloat could not be created.
 */
extern HugeFloat* createHugeFloatFromHugeInts  (const HugeInt* significandHugeInt, const HugeInt* exponentSHugeInt);

/**
 * \brief Function to create a HugeFloat initialized with the \c size initial values of another HugeFloat.
 *        The sign and the exponent are always copied.
 *        \n Example :
 *         \code{.c}
 *         // Copy the sign and all the values of hugeIntSource in the new hugeIntDest
 *         HugeFloat* hugeFloatDest = createHugeFloatFromHugeFloat(hugeFloatSource, -1);
 *
 *         // Copy the sign and just the first 5 values of hugeIntSource in the new hugeIntDest
 *         HugeFloat* hugeFloatDest = createHugeFloatFromHugeFloat(hugeFloatSource, 5);
 *         \endcode
 * \param hugeFloat the HugeFloat to copy.
 * \param size the number of values to copy, enter \c -1 to copy all the values.
 * \return the HugeFloat's pointer, if the HugeFloat is created.
 * \return \c NULL, if the HugeFloat could not be created.
 */
extern HugeFloat* createHugeFloatFromHugeFloat (const HugeFloat* hugeFloat, const unsigned int size);

/**
 * \brief Function to delete a HugeFloat and free its memory.
 * \param hugeFloat a pointer to the HugeFloat to delete.
 */
extern void       deleteHugeFloat              (HugeFloat* hugeFloat);

/**
 * \brief Function to know the length of a HugeFloat.
 * \param hugeFloat a pointer to the HugeFloat to query.
 * \return an int that represents the length of the HugeFloat.
 */
extern int        getHugeFloatLength           (const HugeFloat* hugeFloat);

#endif // !HUGE_FLOAT
