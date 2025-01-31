#ifndef BD_UTILS
#define BD_UTILS

#include "sizes.h"
#include "exec.h"
#include "extra_arg.h"
#include "dev_utils.h"
#include "module.h"
#include "dbus.h"
#include "logging.h"

#if !defined(HAVE_STRERROR_L)
#define strerror_l(errnum, locale)      strerror(errnum)
#endif

/**
 * SECTION: utils
 * @short_description: library providing utility functions used by the blockdev library and its plugins
 * @title: Utils
 * @include: utils.h
 */

#endif  /* BD_UTILS */
