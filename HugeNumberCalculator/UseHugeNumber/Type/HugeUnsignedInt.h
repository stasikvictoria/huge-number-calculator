/*****************************************************************//**
 * \file   HugeUnsignedInt.h
 * \brief  Header of the library allowing the management of HugeUnsignedInt.
 *
 * \author Jean-Aymeric DIET jeanaymeric@gmail.com
 * \date   September 2020
 *********************************************************************/
#ifndef HUGE_UNSIGNED_INT
#define HUGE_UNSIGNED_INT

#include "../../DataTypes/DoublyLinkedList.h"

/**
 * \typedef DoublyLinkedList HugeUnsignedInt
 * \brief a simple typedef to facilitate the use of HugeUnsignedInt.
 *        Yes it is not really essential but it will allow future evolutions more easily.
 */
typedef DoublyLinkedList HugeUnsignedInt;

/**
 * \brief Function to create an empty HugeUnsignedInt.
 * \return the HugeUnsignedInt's pointer, if the HugeUnsignedInt is created.
 * \return \c NULL, if the HugeUnsignedInt could not be created.
 */
extern HugeUnsignedInt* createHugeUnsignedInt                    (void);

/**
 * \brief Function to create an initialized HugeUnsignedInt.
 *        \n Example :
 *         \code{.c}
 *         HugeUnsignedInt* hugeUnsignedInt = createHugeUnsignedIntFromString("12345678901234567890");
 *         \endcode
 * \param digitString a string wtih the integer used to initialized the HugeUnsignedInt.
 * \return the HugeUnsignedInt's pointer, if the HugeUnsignedInt is created.
 * \return \c NULL, if the HugeUnsignedInt could not be created.
 */
extern HugeUnsignedInt* createHugeUnsignedIntFromString          (const char* digitString);

/**
 * \brief Function to create a HugeUnsignedInt initialized with the \c size initial values of another HugeUnsignedInt.
 *        \n Example :
 *         \code{.c}
 *         // Copy all the values of hugeUnsignedIntSource in the new hugeUnsignedIntDest
 *         HugeUnsignedInt* hugeUnsignedIntDest = createHugeUnsignedIntFromHugeUnsignedInt(hugeUnsignedIntSource, -1);
 *
 *         // Copy just the first 5 values of hugeUnsignedIntSource in the new hugeUnsignedIntDest
 *         HugeUnsignedInt* hugeUnsignedIntDest = createHugeUnsignedIntFromHugeUnsignedInt(hugeUnsignedIntSource, 5);
 *         \endcode
 * \param hugeUnsignedInt the HugeUnsignedInt to copy.
 * \param size the number of values to copy, enter \c -1 to copy all the values.
 * \return the HugeUnsignedInt's pointer, if the HugeUnsignedInt is created.
 * \return \c NULL, if the HugeUnsignedInt could not be created.
 */
extern HugeUnsignedInt* createHugeUnsignedIntFromHugeUnsignedInt (const HugeUnsignedInt* hugeUnsignedInt, const unsigned int size);

/**
 * \brief Function to delete a HugeUnsignedInt and free its memory.
 * \param hugeUnsignedInt a pointer to the HugeUnsignedInt to delete.
 */
extern void             deleteHugeUnsignedInt                    (HugeUnsignedInt* hugeUnsignedInt);

/**
 * \brief Function to know the length of a HugeUnsignedInt.
 * \param hugeUnsignedInt a pointer to the HugeUnsignedInt to query.
 * \return an int that represents the length of the HugeUnsignedInt.
 */
extern int              getHugeUnsignedIntLength                 (const HugeUnsignedInt* hugeUnsignedInt);

/**
 * \brief Function to simplify a HugeUnsignedInt.
 *        \n By simplify i mean delete the \c 0 before the real value of the HugeUnsignedInt.
 * \param hugeUnsignedInt a pointer to the HugeUnsignedInt to simplify.
 * \return the HugeUnsignedInt's pointer, if the HugeUnsignedInt simplified.
 * \return \c NULL, if an error occurs.
*/
extern HugeUnsignedInt* simplifyHugeUnsignedInt                  (HugeUnsignedInt* hugeUnsignedInt);

#endif // !HUGE_UNSIGNED_INT
