#ifndef DRV_AAA_H
#define DRV_AAA_H

#include "hal_bbb.h"

#define AAA 10

__STATIC_INLINE int get_aaa(void)
{
    return AAA + get_bbb();
}

#endif
