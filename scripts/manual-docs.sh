#!/bin/bash

for i in "$@"
do
case $i in
    -fn=*|--filename=*)
    FILENAME="${i#*=}"

    ;;
    -desc=*|--description=*)
    DESCRIPTION="${i#*=}"
    ;;
    -n=*|--num=*)
    INDEX="${i#*=}"
    ;;
    -t=*|--type=*)
    TYPE="${i#*=}"
    ;;
    -o=*|--options=*)
    OPTIONS="${i#*=}"
    ;;

    --help)
    help=""
    ;;
    *)
    ;;
esac
done
echo FILENAME = ${FILENAME}
echo DESCRIPTION = ${DESCRIPTION}
echo INDEX = ${INDEX}
echo TYPE = ${TYPE}
echo OPTIONS= ${OPTIONS}

# Create file

echo ".\\\" Manpage for" ${FILENAME} >> ${FILENAME}
echo ".\" Contact tapaswenipathak@gmail.com to correct errors or typos." >> ${FILENAME}
echo ".TH man" ${INDEX} "\"April '19\" \"1.0\" "  ${FILENAME}  " man page" >> ${FILENAME}
echo ".SH NAME" >> ${FILENAME}
echo ${FILENAME}   "\-"  ${TYPE} >> ${FILENAME}
echo ".SH SYNOPSIS" >> ${FILENAME}
echo ${FILENAME}  "- continue" >> ${FILENAME}
echo ".SH DESCRIPTION" >> ${FILENAME}
echo ${DESCRIPTION} >> ${FILENAME}
echo ".SH OPTIONS" >> ${FILENAME}
echo "This has function parameters."  ${OPTIONS} >> ${FILENAME}
echo ".SH SEE ALSO" >> ${FILENAME}
echo ${FILENAME} + "*" >> ${FILENAME}
echo ".SH BUGS" >> ${FILENAME}
echo "No known bugs." >> ${FILENAME}
echo ".SH AUTHOR" >> ${FILENAME}
echo "Tapasweni Pathak (tapaswenipathak@gmail.com)" >> ${FILENAME}
© 2019 GitHub, Inc.