#!/bin/csh

java SortPerf select 5 175 200 select.dat
java SortPerf insert 5 175 200 insert.dat
java SortPerf merge 5 175 200 merge.dat
java SortPerf quick 5 175 200 quick.dat
java SortPerf best 5 175 200 best.dat



plot "select.dat" with linesp, "merge.dat" with linesp, "insert.dat" with linesp, "quick.dat" with linesp,  "best.dat" with linesp