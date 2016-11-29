#pragma once

/**
 *  Syscall number from /usr/include/asm/unistd_64.h
 */
enum
{
  SC_MMAP       = 9,
  SC_MPROTECT   = 10,
  SC_MUNMAP     = 11,
  SC_BRK        = 12,
  SC_MREMAP     = 25,
  SC_CLONE      = 56,
  SC_FORK       = 57,
  SC_VFORK      = 58,
  SC_EXECVE     = 59,
  SC_EXIT       = 60,
  SC_EXITGROUP  = 231
};

#include <link.h>
#include <sys/ptrace.h>
#include <sys/reg.h>
#include <sys/user.h>
#include <sys/types.h>
#include <unistd.h>

#include "level1.hh"
#include "checker.hh"
#include "display.hh"
