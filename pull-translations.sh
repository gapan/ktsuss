#!/bin/sh

export LANG=en_US.utf8

tx pull -a

for i in `ls po/*.po`;do
	msgfmt --statistics $i 2>&1 | grep "^0 translated" > /dev/null && rm $i
done
rm -f messages.mo po/messages.mo

