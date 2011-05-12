#!/bin/sh
# use this to convert a png image to u-boot compatible bmp
# width of the image must be multiple of 32 (or 8? haven't really tested)
pngtopnm multi_u_boot.png | ppmquant 256 | ppmtobmp -bpp 8 > multi_u_boot.bmp
