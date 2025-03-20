/*
 * This file is written by Node.js,
 * and the original code of the libffi library does not include this file.
 */
#ifndef LIBFFI_TARGET_FIXED_H
#define LIBFFI_TARGET_FIXED_H

#ifndef LIBFFI_H
#error "Please do not include ffitarget.h directly into your source.  Use ffi.h instead."
#endif

#if defined _M_X64_ || defined __x86_64__
# define X86_64
# if defined _WIN32
#  define X86_WIN64
# elif defined __APPLE__
#  define X86_DARWIN
# endif
# include "../src/x86/ffitarget.h"
#elif defined _M_IX86 || defined __i386__
# define X86
# if defined _WIN32
#  define X86_WIN32
# elif defined __APPLE__
#  define X86_DARWIN
# endif
# include "../src/x86/ffitarget.h"
#elif defined _M_ARM64 || defined __aarch64__
# include "../src/aarch64/ffitarget.h"
#elif defined _M_ARM || defined __arm__
# include "../src/arm/ffitarget.h"
#elif defined __powerpc64__
# define POWERPC
# define POWERPC64
# if defined __APPLE__
#  define POWERPC_DARWIN64
# endif
# include "../src/powerpc/ffitarget.h"
#elif defined __powerpc__
# define POWERPC
# include "../src/powerpc/ffitarget.h"
#endif

#endif
