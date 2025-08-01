# pch - Perfect Clear Helper CLI Tools

# installation and build

# commands
## pcn - **p**erfect **c**lear **n**umber finder
determines current PC number (and class) based on piece count and queue
```
Usage:
  pcn <piece_count> [options]

Options:
  -Q, --queue <queue>       Input a queue in order (e.g. IJLOSTZ). Also outputs PC class (including 8th, 9th, and dupe).
  -b, --brief               Minimal human readable output.
  -q, --quiet               Suppress output; sets exit code: 0 = success, 1 = fail.
  -v, --version             Show version information.
  -h, --help                Show this help message.<
```
<!-- maybe verbose with more stats like pc chance -->


## msg - **m**inimal **s**etup **g**enerator
generates a fumen code or ascii drawing of a setup
```
Usage:
  msg <name> [options]

Options:
  -w, --width <width>       Width of setup (default is normally accepted length).
  -m, --mirror              Mirrors given setup (default on the right).
  -f, --fumen               Outputs fumen code of the given setup.
  -d, --display             Outputs ASCII setup drawing in the terminal.
  -C, --color               Displays setup with color (general setup build).
  -a, --alternatives        Displays ALL possible builds.
  -b, --brief               Minimal human readable output.
  -q, --quiet               Suppress output; sets exit code: 0 = success, 1 = fail.
  -v, --version             Show version information.
  -h, --help                Show this help message.
```
<!-- maybe queue input shows possible setups -->
<!-- color and alternatives feels a bit iffy in implementaton. basic build is colored instead? -->


## ftd - **f**umen **t**erminal **d**isplay
displays fumen codes as terminal text images
```
Usage:
  ftd <fumen_code> [options]

Options:
  -h, --height <height>     The height of the output (bottom to top)        
  -w, --width <width>       The width of the output (left to right)
  --no-whitespace           Automatically sets height and width to remove all whitespace
  -p, --page <page_num>     
  -o, --once                
  -d, --duration <duration> How long one frame should last in seconds.
  --always-hide-queue       Always hides queue.
  --always-hide-hold        Always hides hold.
  --always-hide-pending     Always hides pending attack.
  --always-hide-comments    Always hides comments.
  --always-show-queue       Always displays queue.
  --always-show-hold        Always displays hold.
  --always-show-pending     Always displays pending attack.
  --always-show-comments    Always displays comments.
  -q, --quiet               Suppress output; sets exit code: 0 = success, 1 = fail.
  -v, --version             Show version information.
  -h, --help                Show this help message.<
```
<!-- have a way to change skin ? -->
<!-- grid? -->


## fmi - **f**u**m**en**i**ties
CLI port of fumenities
```
Usage:
  fmi <command> [<args>]
```


## qxp - **q**ueue e**x**pression **p**rinter
generates all possible queues from a queue regex (like sfinder or wirelyre)
```
Usage:
  qxp <queue-exp> [options]

Options:
  -n, --number              Outputs number of possibilities.
  -q, --quiet               Suppress output; sets exit code: 0 = success, 1 = fail.
  -v, --version             Show version information.
  -h, --help                Show this help message.
```
<!-- might need to rethink - if we're printing stuff it might be too much -->


## qrs - **q**ueue **r**e**s**orter
sorts an input queue into a specific order (knewjade order or any other). Useful for PC setup names.
```
Usage:
  qrs <queue> [options]

Options:
  -d, --dictate             Dictates the order which pieces are sorted (e.g. "TIOJLSZ") (default: "knewjade" or "TIJLSZO")
  -upper, --uppercase       Converts all pieces into uppercase letters.
  -lower, --lowercase       Converts all pieces into lowercase letters.
  -u, --unique              Removes duplicate pieces from the output.
  -q, --quiet               Suppress output; sets exit code: 0 = success, 1 = fail.
  -v, --version             Show version information.
  -h, --help                Show this help message.
```


<!-- ddep, determine dependancies -->
<!-- input to fumen -->
  <!-- -Q, --queue <queue> Outputs with order (e.g. IJLOSTZ)  -H, --hold <piece> Outputs with hold piece -->
<!-- kbh, konbini helper? -->
