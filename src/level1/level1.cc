#include "level1.hh"

void tracee(int argc, char **argv)
{
  

  ptrace(PTRACE_TRACEME, 0, 0, 0);
  kill();
  execve();
}

void tracer(pid_t pid)
{
  int status;

  waitpid(pid, &status, 0);

  ptrace(PTRACE_SETOPTIONS, pid, 0, PTRACE_O_TRACESYSGOOD);

  while (1)
  {
  
  }
}
