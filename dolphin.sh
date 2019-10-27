#!/bin/bash

function help()
{
    echo "THIS IS HELP"
}

#OPT=`getopt "SIRU:h" $@` || usage 
#set -- $OPT

set -- `getopt "SIRUh" $@` || usage 

while [ -- != "$1" ]; do
    case $1 in
	-S)
	    S_FLAG=1
	    ;;
	-I)
	    I_FLAG=1
	    ;;
	-R)
	    R_FLAG=1
	    ;;
	-U)
	    U_FLAG=1
	    ;;
	-h)
	    help
	    ;;
    esac
    shift 
done

exec dolphin-bin $S_FLAG,$I_FLAG,$R_FLAG,$U_FLAG
