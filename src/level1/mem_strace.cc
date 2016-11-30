#include "tools.hh"
#include "checker.hh"
#include "level1.hh"

int main(int argc, char **argv)
{
  if (argc < 2)
    display_usage();

  check_binary(argv[1]);

  pid_t pid = fork();

  switch (pid)
  {
    case -1:

    case 0:
        tracee(argc - 1, argv + 1);
    default:
        tracer(pid);
  }

  return 0;
}
