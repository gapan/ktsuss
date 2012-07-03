#!/bin/sh
#
# Run this script when you modify translatable scripts in the source
# files (ktsuss.c and errors.h).
# This will update the ktsuss.pot file with the modified strings and
# also update all .po files accordingly

# Create fresh ktsuss.pot file
xgettext -L C -o po/ktsuss.pot src/ktsuss.c
xgettext -L C -kgettext_noop -j -o po/ktsuss.pot src/errors.h

# Update existing po files for the new ktsuss.pot
for LANG in `ls po/*.po| sed "s|po/\(.*\)\.po|\1|"`; do
	msgmerge -U po/$LANG.po po/ktsuss.pot
done
