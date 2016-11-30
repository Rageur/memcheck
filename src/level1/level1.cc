#include "level1.hh"

void tracee(int argc, char **argv)
{
  char *tab = new int[argc + 1];

  for (int i = 0; i < argc; i++)
    tab[i] = argv[i]
  tab[argc] = nullptr;

  ptrace(PTRACE_TRACEME, 0, 0, 0);
  kill(getpid(), SIGSTOP);
  execve(tab[0], tab, nullptr);
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
