#include <stdlib.h>
#include <stdio.h>

#include <ctype.h>
#include <stdint.h>

/**
 * Number value in Calculator
 */
typedef int number_t;

const static char *HELP
  = "SimpleCaculator :: <mode>? <flags> <file>\n"
    "  where <mode> (default eval) is one of:\n"
    "    eval, dump, check\n"
    "  where <flags> (default none) is flag in:\n"
    "    -q, --quiet: Be quiet\n"
    "    -v, --verbose: Be verbose\n"
    "  if <file> is \"-\", then input file is speficied as <stdin>"
    "  <file> is by default <stdin>";
const static char *WELCOME = "Entering Calculator REPL";
const static char *PROMPT = ">";

const static char
  *FLAG_VERBOSE = "-v",
  *FLAG_VERBOSE1 = "--verbose",
  *FLAG_QUIET = "-q",
  *FLAG_QUIET1 = "--quiet";

/**
 * Structure for command line arguments
 * - Mode: eval, dump, check
 * - Flags: -q -v (input is stdin?)
 * - input path, "-" if stdin
 */
typedef struct CmdlineArgs {
  enum Mode { EvalDo, DumpDo, CheckDo } mode;
  uint8_t flags;
  char *input;
} CmdlineArgs;

/**
 * Run REPL session
 */
int repl(FILE *in, FILE *out, FILE *err);
CmdlineArgs parseCmdLine(int argc, char *argv[]);

int main(int argc, char *argv[])
{
  switch (argc) {
    case 1:
      puts(WELCOME);
      return repl(stdin, stdout, stderr);
    case 2:
    default:
        break;
  }
}

CmdlineArgs parseCmdLine(int argc, char *argv[]){}
