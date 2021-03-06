/*
 * Copyright 2014, NICTA
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(NICTA_BSD)
 */

#ifndef __LIBSEL4_ARCH_TYPES_H
#define __LIBSEL4_ARCH_TYPES_H

#include <autoconf.h>
#include <sel4/simple_types.h>
#include <sel4/sel4_arch/types.h>

typedef seL4_CPtr seL4_X86_ASIDControl;
typedef seL4_CPtr seL4_X86_ASIDPool;
typedef seL4_CPtr seL4_X86_IOSpace;
typedef seL4_CPtr seL4_X86_IOPort;
typedef seL4_CPtr seL4_X86_Page;
typedef seL4_CPtr seL4_X86_PDPT;
typedef seL4_CPtr seL4_X86_PageDirectory;
typedef seL4_CPtr seL4_X86_PageTable;
typedef seL4_CPtr seL4_X86_IOPageTable;
typedef seL4_CPtr seL4_X86_EPTPML4;
typedef seL4_CPtr seL4_X86_EPTPDPT;
typedef seL4_CPtr seL4_X86_EPTPD;
typedef seL4_CPtr seL4_X86_EPTPT;
typedef seL4_CPtr seL4_X86_VCPU;

typedef enum {
    seL4_X86_Default_VMAttributes = 0,
    seL4_X86_WriteBack = 0,
    seL4_X86_WriteThrough = 1,
    seL4_X86_CacheDisabled = 2,
    seL4_X86_Uncacheable = 3,
    seL4_X86_WriteCombining = 4,
    SEL4_FORCE_LONG_ENUM(seL4_X86_VMAttributes),
} seL4_X86_VMAttributes;

typedef struct seL4_VCPUContext_ {
    seL4_Word eax, ebx, ecx, edx, esi, edi, ebp;
} seL4_VCPUContext;

#endif
