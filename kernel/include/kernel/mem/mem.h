/**************************************************************************//** 
 * @file mem.h
 * @brief File holding the signatures of special memory function
 *
 * @note GCC and Clang reserve the right to generate calls to the following 4 functions even if they are not directly called. Implement them as the C specification mandates. DO NOT remove or rename these functions, or stuff will eventually break!

 * @warning These functions should not be modified within the kernel. The only time they will be redefined is in @e libc for users to use and will use paging.

 * Functions outside of `memcmp`, `memmove`, `memcopy` and `memset` still abide by the warning but are used for the allocator, and should be considered temporary
 ******************************************************************************/
#ifndef KMEM_H_
#define KMEM_H_ 1

#include <stddef.h>
#include <stdint.h>

/***********************************************************//**
 * @fn void *memcpy(void *dest, const void *src, size_t n)
 * @brief Copies memory from one location to another
 * @param dest The destination to move memory values (pointer)
 * @param src The source location to move memory from (pointer)
 * @param n The size of the memory to move
 *
 * @version 0.0.1
 * @author Sable Ayala
 * @date 05/12/2024
 *************************************************************/
void *memcpy(void *dest, const void *src, size_t n);

/*****************************************************************************//**
 * @fn void *memset(void *s, int c, size_t n)
 * @brief Fill a block of memory with a particular value
 * @param s The starting address of memory to be filled
 * @param c The value to be filled
 * @param n The number of bytes to be filled starting from \f$s\f$ to be filled
 *
 * @version 0.0.1
 * @author Sable Ayala
 * @date 05/12/2024
 ******************************************************************************/
void *memset(void *s, int c, size_t n);
/** @fn void *memmove(void *dest, const void *src, size_t n)
    @brief Copy a block of memory from a location to another
    @param dest Destination of memory block
    @param src Memory block to move
    @param n Size of the memory block

    @version 0.0.1
 */
void *memmove(void *dest, const void *src, size_t n);
/** @fn int memcmp(const void *s1, const void *s2, size_t n) 
    @brief Compate two blocks of memory
    @param s1 Pointer to LHS block of memory
    @param s2 Pointer to RHS block of memory
    @param n The number of bytes to be compared

    @return This function returns @e <0 if @e s1 is less than @e s2, @e >0 @e s2 is less than @e s1 and @e ==0 if @e s1 is equivalent to @e s2

    @version 0.0.1

    Example usage:
    @snippet snippets/mem.example.c memcmp
 */
int memcmp(const void *s1, const void *s2, size_t n);

#endif