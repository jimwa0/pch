# pch - Perfect Clear Helper CLI Tools

# installation and build

# commands
## pcn - **p**erfect **c**lear **n**umber finder
determines current PC number (and class) based on piece count and queue
```
Usage:
  pcn <piece_count> [options]

Options:
  -Q, --queue <queue>       Input a queue in order (e.g. IJLOSTZ). Also outputs PC class.
  -r, --brief               Minimal human readable output.
  -q, --quiet               Suppress output; sets exit code: 0 = success, 1 = fail.
  -v, --version             Show version information.
  -h, --help                Show this help message.<
<!-- maybe verbose with more stats like pc chance -->
```


## msg - **m**inimal **s**etup **g**enerator
generates a fumen code or ascii drawing of a setup
```
Usage:
  msg <name> [options]

Options:
  -w, --width <number>      Width of setup (default is normally accepted length).
  -m, --mirror              Mirrors given setup (default on the right).
  -c, --center              Positions Centers setup.
  -f, --fumen               Outputs fumen code of the given setup.
  -d, --display             Outputs ASCII setup drawing in the terminal.
  -C, --color               Displays setup with color (general setup build).
  -a, --alternatives        Displays ALL possible builds.
  -r, --brief               Minimal human readable output.
  -q, --quiet               Suppress output; sets exit code: 0 = success, 1 = fail.
  -v, --version             Show version information.
  -h, --help                Show this help message.
<!-- maybe queue input shows possible setups -->
```


## ftd - **f**umen **t**erminal **d**isplay
displays fumen codes as terminal text images


## pcx - **PC** e**x**aminer
determines whether a 1st is an 8th or a 2nd is a 9th or if something is a dupe


## qxp - **q**ueue e**x**pression **p**rinter
generates all possible queues from a queue regex (like sfinder or wirelyre)

## qrs - **q**ueue **r**e**s**orter
sorts an input queue into a specific order (knewjade order or any other)

<!-- ddep, determine dependancies -->
<!-- kbh, konbini helper? -->
