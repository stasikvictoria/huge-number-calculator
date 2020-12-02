/*****************************************************************//**
 * \file   HugeIntOperator.h
 * \brief  Header of the library allowing operation on HugeInt.
 *
 * \author Jean-Aymeric DIET jeanaymeric@gmail.com
 * \date   September 2020
 *********************************************************************/
#ifndef OPERATOR_HUGE_INT
#define OPERATOR_HUGE_INT

#include "../Type/HugeInt.h"
#include "HugeUnsignedIntOperator.h"

/**
 * \brief Function to add two HugeInt.
 * \param operand1 the first HugeInt's pointer to add.
 * \param operand2 the second HugeInt's pointer to add.
 * \return a HugeInt's pointer, result of the addition, if the addition could be carried out successfully.
 * \return \c NULL, if the addition could not be carried out successfully.
 */
extern HugeInt* addHugeInt       (const HugeInt* operand1, const HugeInt* operand2);

/**
 * \brief Function to subtract two HugeInt.
 * \param operand1 the first HugeInt's pointer to subtract.
 * \param operand2 the second HugeInt's pointer to subtract.
 * \return a HugeInt's pointer, result of the substraction, if the substraction could be carried out successfully.
 * \return \c NULL, if the substraction could not be carried out successfully.
 */
extern HugeInt* substractHugeInt (const HugeInt* operand1, const HugeInt* operand2);

/**
 * \brief Function to multiply two HugeInt.
 * \param operand1 the first HugeInt's pointer to multiply.
 * \param operand2 the second HugeInt's pointer to multiply.
 * \return a HugeInt's pointer, result of the multiplication, if the multiplication could be carried out successfully.
 * \return \c NULL, if the multiplication could not be carried out successfully.
 */
extern HugeInt* multiplyHugeInt  (const HugeInt* operand1, const HugeInt* operand2);

/**
 * \brief Function to divide two HugeInt.
 * \param operand1 the first HugeInt's pointer to divide.
 * \param operand2 the second HugeInt's pointer to divide.
 * \return a HugeInt's pointer, result of the division, if the division could be carried out successfully.
 * \return \c NULL, if the division could not be carried out successfully.
 */
extern HugeInt* divideHugeInt    (const HugeInt* operand1, const HugeInt* operand2);

#endif // !OPERATOR_HUGE_INT
