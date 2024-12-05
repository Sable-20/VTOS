#define SSFN_CONSOLEBITMAP_TRUECOLOR
#include <kernel/ssfn/ssfn.h>

#include <kernel/stdio/stdio.h>

void ssfn_init(char* bitmap, struct limine_framebuffer *fb) {
  ssfn_src = bitmap;
  ssfn_dst.ptr = 0xE0000000;
  ssfn_dst.p = 4096;
  ssfn_dst.fg = 0xFFFFFFFF;
  ssfn_dst.bg = 0;
  ssfn_dst.x = 100;
  ssfn_dst.y = 200;
}