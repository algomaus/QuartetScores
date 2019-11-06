QuartetScores
=========================

Code for computing various support scores for internodes.

See http://www.biorxiv.org/content/early/2017/07/27/168526 for the preprint.

EDIT: The paper has now been published in Systematic Biology: https://academic.oup.com/sysbio/advance-article/doi/10.1093/sysbio/syz058/5556115

If you cannot find our supplementary text, please download it from here:
https://github.com/lutteropp/QuartetScores/issues/4

Download
-------------------------------

We currently provide binaries for Linux and Mac systems,
which are available at the [Releases Page](https://github.com/algomaus/QuartetScores/releases).

Please try those first. If they do not work, you find detailed build instructions in the
[BUILD.md](https://github.com/algomaus/QuartetScores/blob/master/BUILD.md) document.

Command Line Options
-------------------------------

The command line options of the program are:

    ./QuartetScores  [-s] [-v] [-t <number>] -r <file_path> -e <file_path> -o <file_path> [--version] [-h]

Where:

`-r <file_path>`,  `--ref <file_path>`: (required)  Path to the reference tree

`-e <file_path>`,  `--eval <file_path>`: (required)  Path to the evaluation trees

`-o <file_path>`,  `--output <file_path>`: (required)  Path to the annotated newick output file (for LQIC/QPIC/EQPIC scores)

`-q <file_path>`,  `--qic <file_path>`: (optinal) Path to the file where to write the raw QIC scores for each quartet

`-s`, `--savemem`: Consume less memory, but with the cost of increased runtime (~50% more)

`-v`,  `--verbose`: Verbose mode

`-t <number>`,  `--threads <number>`: Maximum number of threads to use

`--version`: Displays version information and exits.

`-h`,  `--help`: Displays usage information and exits.
