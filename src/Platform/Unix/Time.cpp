/*
 Copyright (c) 2008 TrueCrypt Foundation. All rights reserved.

 Governed by the TrueCrypt License 2.8 the full text of which is contained
 in the file License.txt included in TrueCrypt binary and source code
 distribution packages.
*/

#include "Platform/Time.h"
#include <sys/time.h>
#include <time.h>

namespace TrueCrypt
{
	uint64 Time::GetCurrent ()
	{
		struct timeval tv;
		gettimeofday (&tv, NULL);

		// Unix time => Windows file time
		return  ((uint64) tv.tv_sec + 134774LL * 24 * 3600) * 1000LL * 1000 * 10;
	}
}