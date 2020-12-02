/*****************************************************************//**
 * \file   HugeFloatOperator.h
 * \brief  Header of the library allowing operation on HugeFloat.
 *
 * \author Jean-Aymeric DIET jeanaymeric@gmail.com
 * \date   September 2020
 *********************************************************************/
#ifndef OPERATOR_HUGE_FLOAT
#define OPERATOR_HUGE_FLOAT

#include "HugeIntOperator.h"
#include "HugeUnsignedIntOperator.h"
#include "../Type/HugeFloat.h"

/**
 * \brief Function to add two HugeFloat.
 * \param operand1 the first HugeFloat's pointer to add.
 * \param operand2 the second HugeFloat's pointer to add.
 * \return a HugeFloat's pointer, result of the addition, if the addition could be carried out successfully.
 * \return \c NULL, if the addition could not be carried out successfully.
 */
extern HugeFloat* addHugeFloat       (const HugeFloat* operand1, const HugeFloat* operand2);

/**
 * \brief Function to subtract two HugeFloat.
 * \param operand1 the first HugeFloat's pointer to subtract.
 * \param operand2 the second HugeFloat's pointer to subtract.
 * \return a HugeFloat's pointer, result of the substraction, if the substraction could be carried out successfully.
 * \return \c NULL, if the substraction could not be carried out successfully.
 */
extern HugeFloat* substractHugeFloat (const HugeFloat* operand1, const HugeFloat* operand2);

/**
 * \brief Function to multiply two HugeFloat.
 * \param operand1 the first HugeFloat's pointer to multiply.
 * \param operand2 the second HugeFloat's pointer to multiply.
 * \return a HugeFloat's pointer, result of the multiplication, if the multiplication could be carried out successfully.
 * \return \c NULL, if the multiplication could not be carried out successfully.
 */
extern HugeFloat* multiplyHugeFloat  (const HugeFloat* operand1, const HugeFloat* operand2);

/**
 * \brief Function to simplify a HugeFloat.
 *        \n By simplify i mean delete the \c 0 before the real value and the exponent of the HugeFloat.
 * \param hugeFloat a pointer to the HugeFloat to simplify.
 * \return the HugeFloat's pointer, if the HugeFloat simplified.
 * \return \c NULL, if an error occurs.
*/
extern HugeFloat* simplifyHugeFloat  (HugeFloat* hugeFloat);

#endif // !OPERATOR_HUGE_FLOAT