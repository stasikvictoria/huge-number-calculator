/*****************************************************************//**
 * \file   DoublyLinkedList.h
 * \brief  Header of the library allowing the management of double-linked list on unsigned short.
 *
 * \author Jean-Aymeric DIET jeanaymeric@gmail.com
 * \date   September 2020
 *********************************************************************/
#ifndef DOUBLY_LINKED_LIST
#define DOUBLY_LINKED_LIST

/**
 * \typedef unsigned short Digit
 * \brief a simple typedef to facilitate the use of unsigned short.
 */
typedef unsigned short Digit;

/**
 * \typedef struct Node
 * \brief node of the double-linked list, it owns two pointers : next and previous.
 */
typedef struct Node {
    Digit digit; /**< the Digit contains by the Node */
    struct Node* next; /**< the next Node */
    struct Node* previous; /**< the previous Node */
} Node;

/**
 * \typedef struct DoublyLinkedList
 * \brief the double-linked list with two pointers : start and end.
 */
typedef struct DoublyLinkedList {
    Node* start; /**< the first Node of the DoublyLinkedList */
    Node* end; /**< the last Node of the DoublyLinkedList */
} DoublyLinkedList;

/**
 * \brief Function to add a digit at the start af a double-linked list.
 * \param doublyLinkedList a pointer to the DoublyLinkedList to modifiy.
 * \param digit the digit to add.
 * \return \c 1, if it's a success.
 * \return \c 0, if an error occurs.
 */
extern int               addDigitAtStart (DoublyLinkedList* doublyLinkedList, const Digit digit);

/**
 * \brief Function to add a digit at the end af a DoublyLinkedList.
 * \param doublyLinkedList a pointer to the DoublyLinkedList to modifiy.
 * \param digit the digit to add.
 * \return \c 1, if it's a success.
 * \return \c 0, if an error occurs.
 */
extern int               addDigitAtEnd (DoublyLinkedList* doublyLinkedList, const Digit digit);

/**
 * \brief Function to know if a node is empty, empty means it points to NULL.
 * \param node a pointer to the Node to query.
 * \return \c 1, if the node is empty.
 * \return \c 0, if the node is not empty.
 */
extern int               isNodeEmpty (const Node* node);

/**
 * \brief Function to create an empty DoublyLinkedList.
 * \return the DoublyLinkedList's pointer, if the DoublyLinkedList is created.
 * \return \c NULL, if the DoublyLinkedList could not be created.
 */
extern DoublyLinkedList* createDoublyLinkedList (void);

/**
 * \brief Function to create an initialized DoublyLinkedList.
 *        \n Example :
 *         \code{.c}
 *         DoublyLinkedList* doublyLinkedList = createDoublyLinkedListFromString("12345678901234567890");
 *         \endcode
 * \param digitString a string wtih the integer used to initialized the DoublyLinkedList.
 * \return the DoublyLinkedList's pointer, if the DoublyLinkedList is created.
 * \return \c NULL, if the DoublyLinkedList could not be created.
 */
extern DoublyLinkedList* createDoublyLinkedListFromString (const char* digitString);

/**
 * \brief Function to convert a char to a Digit.
 * \param digit a Digit to convert.
 * \return the \c Digit converted to char.
 */
extern char              digitToChar (const Digit digit);

/**
 * \brief Function to delete a DoublyLinkedList and free its memory and all its nodes.
 * \param doublyLinkedList a pointer to the DoublyLinkedList to delete.
 */
extern void              deleteDoublyLinkedList (DoublyLinkedList* doublyLinkedList);

/**
 * \brief Function to know the length of a DoublyLinkedList.
 * \param doublyLinkedList a pointer to the DoublyLinkedList to query.
 * \return an int that represents the length of the DoublyLinkedList.
 */
extern int               getDoublyLinkedListLength (const DoublyLinkedList* doublyLinkedList);

/**
 * \brief Function to delete the first Node of a DoublyLinkedList.
 * \param doublyLinkedList a pointer to the DoublyLinkedList to modify.
 */
extern void              removeStartFromDoublyLinkedList (DoublyLinkedList* doublyLinkedList);

/**
 * \brief Function to delete the last Node of a DoublyLinkedList.
 * \param doublyLinkedList a pointer to the DoublyLinkedList to modify.
 */
extern void              removeEndFromDoublyLinkedList (DoublyLinkedList* doublyLinkedList);

/**
 * \brief Function to obtain the Digit contained in a DoublyLinkedList by its place number.
 * \param doublyLinkedList a pointer to the DoublyLinkedList to query.
 * \param place an \c unsigned \c int that represents the place number of the desired Digit.
 * \return the Digit contained at the place \c place.
 * \return \c -1, if an error occurs.
 */
extern Digit             getDigitByPlaceFromStart (const DoublyLinkedList* doublyLinkedList, const unsigned int place);

#endif // !DOUBLY_LINKED_LIST
