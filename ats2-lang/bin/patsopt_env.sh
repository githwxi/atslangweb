#!/bin/sh

#
# Author: Likai Liu (likai AT cs DOT bu DOT edu)
#
# Author2: Hongwei Xi (gmhwxi AT gmail DOT com) // September, 2013
#

PACKAGE_TARNAME=ats2-postiats
PACKAGE_VERSION=0.1.2
prefix=/usr/local

if [ ! "$PATSHOME" ] ; then
  export PATSHOME="$prefix/lib/${PACKAGE_TARNAME}-${PACKAGE_VERSION}"
fi

if [ ! -d "$PATSHOME" ] ; then
  echo "ATS-Postiats should have been available at '${PATSHOME}'"; exit 1
fi

prog=`basename $0`

case $prog in
  patsopt)
    exec "$PATSHOME/bin/$prog" "$@"
    ;;
  *)
    echo "This is a script for patsopt."
    echo "The script should be symbolically named as [patsopt]."
    exit 1
    ;;
esac

#
# end of [patsopt_env.sh.in]
#
