#include "tools.hh"
#include "checker.hh"

void display_usage()
{
  std::cerr << "Usage: ./mem_strace PROG [ARGS]" << std::endl;
  exit(1);
}

void check_binary(char *bin)
{
  if (access(bin, X_OK) != 0)
  {
    std::cerr << "./mem_strace: Can't stat '"
              << bin
              << "': No such file or directory"
              << std::endl;
  }
}
