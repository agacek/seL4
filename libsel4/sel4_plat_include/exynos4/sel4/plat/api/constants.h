/*
 * Copyright 2016, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(D61_BSD)
 */

#ifndef __LIBSEL4_SEL4_PLAT_API_CONSTANTS_H_
#define __LIBSEL4_SEL4_PLAT_API_CONSTANTS_H_

#ifdef HAVE_AUTOCONF
#include <autoconf.h>
#endif

#ifdef CONFIG_HARDWARE_DEBUG_API
/* Cortex a9 manual, section 10.1.2 */
#define seL4_NumHWBreakpoints (10)
#define seL4_NumExclusiveBreakpoints (6)
#define seL4_FirstWatchpoint (6)
#define seL4_NumExclusiveWatchpoints (4)
#define seL4_NumDualFunctionMonitors (0)
#endif

#endif /* __LIBSEL4_SEL4_PLAT_API_CONSTANTS_H_ */
