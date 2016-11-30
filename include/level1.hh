#pragma once

#include "tools.h"

void tracee(int argc, char **argv);
void tracer(pid_t pid);
void enter_exit_syscall(pid_t pid)
