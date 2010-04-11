/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _IP6T_MH_H
#define _IP6T_MH_H

struct ip6t_mh {
 u_int8_t types[2];
 u_int8_t invflags;
};

#define IP6T_MH_INV_TYPE 0x01  
#define IP6T_MH_INV_MASK 0x01  

#endif
