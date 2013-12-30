#!/bin/sh
# Needed for systems without gettext
<<<<<<< HEAD
$* -x c -o /dev/null - > /dev/null 2>&1 << EOF
=======
$* -xc -o /dev/null - > /dev/null 2>&1 << EOF
>>>>>>> 7175f4b... Truncated history
#include <libintl.h>
int main()
{
	gettext("");
	return 0;
}
EOF
if [ ! "$?" -eq "0"  ]; then
	echo -DKBUILD_NO_NLS;
fi

