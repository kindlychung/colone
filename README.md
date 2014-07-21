# Description

This is a simple c++ program for printing out the first column of a whitespace seperated text file.

# Things to remember

* Whitespaces at the beginning of line will be ignored.
* Trailing whitespaces at the end of a file will also be ignored, which is a good thing.
* Combining this with the `read.table(pipe("..."))` function in R will be much faster than `read.table(filename, colClasses=...)`

# Todo

* Extend into arbitrary column selection, or even multiple columns.
