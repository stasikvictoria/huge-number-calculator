/*****************************************************************//**
 * \file   HugeUnsignedIntOperator.h
 * \brief  Header of the library allowing operation on HugeUnsignedInt.
 *
 * \author Jean-Aymeric DIET jeanaymeric@gmail.com
 * \date   September 2020
 *********************************************************************/
#ifndef OPERATOR_HUGE_UNSIGNED_INT
#define OPERATOR_HUGE_UNSIGNED_INT

#include "../Type/HugeUnsignedInt.h"
#include "../Type/HugeInt.h"

/**
 * \brief Function to add two HugeUnsignedInt.
 * \param operand1 the first HugeUnsignedInt's pointer to add.
 * \param operand2 the second HugeUnsignedInt's pointer to add.
 * \return a HugeUnSignedInt's pointer, result of the addition, if the addition could be carried out successfully.
 * \return \c NULL, if the addition could not be carried out successfully.
 */
extern HugeUnsignedInt* addHugeUnsignedInt                 (const HugeUnsignedInt* operand1, const HugeUnsignedInt* operand2);

/**
 * \brief Function to subtract two HugeUnsignedInt.
 * \param operand1 the first HugeUnsignedInt's pointer to subtract.
 * \param operand2 the second HugeUnsignedInt's pointer to subtract.
 * \return a HugeInt's pointer, result of the substraction, if the substraction could be carried out successfully.
 * \return \c NULL, if the substraction could not be carried out successfully.
 */
extern HugeInt*         substractHugeUnsignedInt           (const HugeUnsignedInt* operand1, const HugeUnsignedInt* operand2);

/**
 * \brief Function to multiply two HugeUnsignedInt.
 * \param operand1 the first HugeUnsignedInt's pointer to multiply.
 * \param operand2 the second HugeUnsignedInt's pointer to multiply.
 * \return a HugeUnSignedInt's pointer, result of the multiplication, if the multiplication could be carried out successfully.
 * \return \c NULL, if the multiplication could not be carried out successfully.
 */
extern HugeUnsignedInt* multiplyHugeUnsignedInt            (const HugeUnsignedInt* operand1, const HugeUnsignedInt* operand2);

/**
 * \brief Function to divide two HugeUnsignedInt.
 * \param operand1 the first HugeUnsignedInt's pointer to divide.
 * \param operand2 the second HugeUnsignedInt's pointer to divide.
 * \return a HugeUnSignedInt's pointer, result of the division, if the division could be carried out successfully.
 * \return \c NULL, if the division could not be carried out successfully.
 */
extern HugeUnsignedInt* divideHugeUnsignedInt              (const HugeUnsignedInt* operand1, const HugeUnsignedInt* operand2);

/**
 * \brief Function to know if a HugeUnsignedInt is strictly superior to another.
 * \param operand1 the first HugeUnsignedInt's pointer to compare.
 * \param operand2 the second HugeUnsignedInt's pointer to compare.
 * \return \c 1, if the operand1 is strictly superior to operand2.
 * \return \c 0, if the operand1 is not strictly superior to operand2.
 */
extern unsigned int     isHugeUnsignedIntStrictlySuperior  (const HugeUnsignedInt* operand1, const HugeUnsignedInt* operand2);

/**
 * \brief Function to know if a HugeUnsignedInt is superior or equal to another.
 * \param operand1 the first HugeUnsignedInt's pointer to compare.
 * \param operand2 the second HugeUnsignedInt's pointer to compare.
 * \return \c 1, if the operand1 is superior or equal to operand2.
 * \return \c 0, if the operand1 is not superior or equal to operand2.
 */
extern unsigned int     isHugeUnsignedIntSuperior          (const HugeUnsignedInt* operand1, const HugeUnsignedInt* operand2);

/**
 * \brief Function to know if a HugeUnsignedInt is equal to another.
 * \param operand1 the first HugeUnsignedInt's pointer to compare.
 * \param operand2 the second HugeUnsignedInt's pointer to compare.
 * \return \c 1, if the operand1 is equal to operand2.
 * \return \c 0, if the operand1 is not equal to operand2.
 */
extern unsigned int     isHugeUnsignedIntEqual             (const HugeUnsignedInt* operand1, const HugeUnsignedInt* operand2);

/**
 * \brief Function to know if a HugeUnsignedInt is strictly inferior to another.
 * \param operand1 the first HugeUnsignedInt's pointer to compare.
 * \param operand2 the second HugeUnsignedInt's pointer to compare.
 * \return \c 1, if the operand1 is strictly inferior to operand2.
 * \return \c 0, if the operand1 is not strictly inferior to operand2.
 */
extern unsigned int     isHugeUnsignedIntInferior          (const HugeUnsignedInt* operand1, const HugeUnsignedInt* operand2);

/**
 * \brief Function to know if a HugeUnsignedInt is inferior or equal to another.
 * \param operand1 the first HugeUnsignedInt's pointer to compare.
 * \param operand2 the second HugeUnsignedInt's pointer to compare.
 * \return \c 1, if the operand1 is inferior or equal to operand2.
 * \return \c 0, if the operand1 is not inferior or equal to operand2.
 */
extern unsigned int     isHugeUnsignedIntStrictlyInferior  (const HugeUnsignedInt* operand1, const HugeUnsignedInt* operand2);

/**
 * \brief Function to create an initialized HugeUnsignedInt frome a power of 10.
 *        \n Example :
 *         \code{.c}
 *         HugeUnsignedInt* hugeUnsignedInt_1 = createHugeUnsignedInt("12345678901234567890");
 *         HugeUnsignedInt* hugeUnsignedInt_2 = createHugeUnsignedIntFromPowerOf10(hugeUnsignedInt_1);
 *         \endcode
 * \param exponent a HugeUnsignedInt which indicates the exponent of the power of 10.
 * \return the HugeUnsignedInt's pointer, if the HugeUnsignedInt is created.
 * \return \c NULL, if the HugeUnsignedInt could not be created.
 */
extern HugeUnsignedInt* createHugeUnsignedIntFromPowerOf10 (const HugeUnsignedInt* exponent);

/**
 * \brief Function to add 1 to a HugeUnsignedInt.
 * \param hugeUnsignedInt the HugeUnsignedInt's pointer to increment.
 */
extern void             incrementHugeUnsignedInt           (HugeUnsignedInt** hugeUnsignedInt);

/**
 * \brief Function to subtract 1 to a HugeUnsignedInt.
 * \param hugeUnsignedInt the HugeUnsignedInt's pointer to decrement.
 */
extern void             decrementHugeUnsignedInt           (HugeUnsignedInt** hugeUnsignedInt);

#endif // !OPERATOR_HUGE_UNSIGNED_INT
