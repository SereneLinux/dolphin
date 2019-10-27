#!/bin/bash

function help()
{
    echo "THIS IS HELP"
}

export S_FLAG=0
export I_FLAG=0
export R_FLAG=0
export U_FLAG=0

#OPT=`getopt "SIRU:h" $@` || usage 
#set -- $OPT

set -- `getopt "SsIiRrUuHh" $@` || usage 

while [ -- != "$1" ]; do
    case $1 in
	-S)
	    S_FLAG=1
	    ;;
        -s)
            S_FLAG=1
            ;;
	-I)
	    I_FLAG=1
	    ;;
        -i)
            I_FLAG=1
            ;;
	-R)
	    R_FLAG=1
	    ;;
        -r)
            R_FLAG=1
            ;;
	-U)
	    U_FLAG=1
	    ;;
        -u)
            U_FLAG=1
            ;;
    esac
    shift 
done

exec echo $S_FLAG,$I_FLAG,$R_FLAG,$U_FLAG
