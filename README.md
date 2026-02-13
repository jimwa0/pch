> [!WARNING]
> This repository is UNDER CONSTRUCTION

# pch - Perfect Clear Helper CLI Tools

# installation and build
```sh

```

---

# Commands
## Perfect Clear Number Finder
determines current PC number (and class) based on piece count and queue
```
Usage:
  pch number <piece_count> [options]

Options:
  -q, --queue <queue>       Determines 8th and 9th based on queue.
  -c, --class               Given a queue, also determine its class ("2 TILO", "6 no L").
  -Q, --quiet               Suppress output; sets exit code: 0 = success, 1 = fail.
  -V, --version             Show version information.
  -h, --help                Show this help message.
```
<!-- maybe verbose with more stats like pc chance -->


## Fumen Terminal Display
displays fumen codes as terminal text images
```
Usage:
  pch fumen <fumen_code> [options]

Options:
  - , --page                Outputs a specific page as opposed to all pages.
  - , --less                Pipes output to less.
  - , --max                 Use full 20x10 size.
  - , --min                 Use minimal board size.
  - , --comment             Show comments.
  - , --queue               Show queue.
  - , --hold                Show hold piece.
  - , --pending             Show pending garbage.
  -Q, --quiet               Suppress output; sets exit code: 0 = success, 1 = fail.
  -V, --version             Show version information.
  -h, --help                Show this help message.
```

<!-- -h, --height <height>     The height of the output (bottom to top). -->
<!-- -w, --width <width>       The width of the output (left to right). -->
<!-- -m, --minimal             Automatically chooses the smallest width and height without cutoffs. -->
<!-- -r, --reactive            Automatically chosses the smallest width and height without cutoffs for each page. -->
<!-- -p, --page <page_num>     Outputs a specfic page number. (default = 1) -->
<!-- -l, --loop <loops>        Loops animation. (no argument loops forever) -->
<!-- -d, --duration <duration> How long one frame should last in a loop in seconds. (default = 1) (only valid with --loop) -->
<!-- -s, --show <num_pieces>   Determines number of pieces to show in queue. -->
<!-- --always-hide-queue       Always hides queue. -->
<!-- --always-hide-hold        Always hides hold. -->
<!-- --always-hide-pending     Always hides pending attack. -->
<!-- --always-hide-comments    Always hides comments. -->
<!-- --always-show-queue       Always displays queue. -->
<!-- --always-show-hold        Always displays hold. -->
<!-- --always-show-pending     Always displays pending attack. -->
<!-- --always-show-comments    Always displays comments. -->
<!-- have a way to change skin ? -->
<!-- grid? -->


## Minimal Setup Generator
generates an ascii drawing or fumen code of a setup
```
Usage:
  pch setup <name> [options]

Options:
  -d, --display             Outputs ASCII setup drawing in the terminal (default).
  -f, --fumen               Outputs fumen code of the given setup.
  -m, --mirror              Mirrors given setup (default on the right).
  -Q, --quiet               Suppress output; sets exit code: 0 = success, 1 = fail.
  -V, --version             Show version information.
  -h, --help                Show this help message.
```
<!-- maybe queue input shows possible setups -->
<!-- -C, --color               Displays setup with color (general setup build). -->
<!-- -a, --alternatives        Displays ALL possible builds. -->
<!-- skin? -->


## Queue Sorter
sorts an input queue into a specific order (knewjade order or any other). Useful for standardizing PC setup names.
```
Usage:
  pch sort <queue> [options]

Options:
  -o, --order               Dictates the order which pieces are sorted (e.g. "TJLIOSZ"). (default: "knewjade" or "TIJLSZO")
  -upper, --uppercase       Converts all pieces into uppercase letters.
  -lower, --lowercase       Converts all pieces into lowercase letters.
  -u, --unique              Removes duplicate pieces from the output.
  -Q, --quiet               Suppress output; sets exit code: 0 = success, 1 = fail.
  -V, --version             Show version information.
  -h, --help                Show this help message.
```
<!--anchor (num or piece)-->
<!--anchor dupe-->


## Queue Expression Output
generates possible queues from a queue regex (like sfinder or wirelyre)
```
Usage:
  pch qx <queue-exp> [options]

Options:
  -f, --format <format>     Chooses queue expression style "s-finder" (default) or "wirelyre" (DEFAULT).
  -n, --number              Outputs the number of possible queues instead.
  -l, --limit <num>         Outputs <num> of queues.
  -Q, --quiet               Suppress output; sets exit code: 0 = success, 1 = fail.
  -V, --version             Show version information.
  -h, --help                Show this help message.
```


<!-- ddep, determine dependancies -->
<!-- input to fumen -->
  <!-- -Q, --queue <queue> Outputs with order (e.g. IJLOSTZ)  -H, --hold <piece> Outputs with hold piece -->
<!-- kbh, konbini helper? -->
<!-- flh, four.lol helper? -->
<!-- sfinder? -->
<!-- tetrio font generator -->
