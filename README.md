# Description

This is a simple c++ program for printing out one arbitrary column of a whitespace seperated text file.

# Things to remember

* Whitespaces at the beginning of line will be ignored.
* Trailing whitespaces at the end of a file will also be ignored, which is a good thing.
* Combining this with the `read.table(pipe("..."))` function in R will be much faster than `read.table(filename, colClasses=...)`

# Todo

* Validate total number of columns.
* Extend into multiple columns.
