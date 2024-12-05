/** @file stdio.h
    @brief brief place holder

    @note Work in progress
 */

#ifndef KSTDIO_H_
#define KSTDIO_H_ 1

#include <limine.h>

/**************************************************************//**  
 * @fn void ssfn_init(char* bitmap, struct limine_framebuffer *fb)
 * @brief This function initializes the SSF simpler renderer
 * @param bitmap this is the bitmap of the font we are using
 * @param fb this is the framebuffer that we pass to the function
 *
 * @version 0.0.1
 * @author Sable Ayala
 * @date 05/12/2024
 *****************************************************************/
void ssfn_init(char* bitmap, struct limine_framebuffer *fb);

#endif