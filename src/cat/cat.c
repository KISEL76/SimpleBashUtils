// +-------------------------------------------------+
// |        Code Authored by Vladimir Kiselev        |
// |                Year: 2023                       |
// |      > Syntax: Approved | Logic: Verified       |
// +-------------------------------------------------+

#include "parsing.h"
#include "printer.h"

int main(int argc, char* argv[]) {
  struct option long_options[] = {{"number-nonblank", no_argument, NULL, 'b'},
                                  {"number", no_argument, NULL, 'n'},
                                  {"squeeze-blank", no_argument, NULL, 's'}};
  flags flgs = {0};
  char* short_options = "+beEnstTv";

  int error = parse_params(argc, argv, short_options, long_options, &flgs);

  if (error == 0) {
    cat(argc, argv, flgs);
  }

  return error;
}
