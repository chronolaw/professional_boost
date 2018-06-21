#!/bin/bash

dirs="common functional generic
      intrusive iostream iterator
      meta mordencpp mpl
      multi_index practice practice2
      preprocessor ptr_container
      range type_traits utility
      "

for d in $dirs
do
    echo "-------$d-------"
    cd ${d}
    #b2 clean
    #b2 > build.log 2>&1 || (cat build.log && exit 1)
    #b2 clean > build.log 2>&1 || (cat build.log && exit 1)
    #rm build.log
    cd ..
done
