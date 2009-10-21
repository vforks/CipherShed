/*
 Copyright (c) 2008 TrueCrypt Foundation. All rights reserved.

 Governed by the TrueCrypt License 2.8 the full text of which is contained
 in the file License.txt included in TrueCrypt binary and source code
 distribution packages.
*/

#ifndef TC_HEADER_Core_Core
#define TC_HEADER_Core_Core

#include "CoreBase.h"

namespace TrueCrypt
{
	extern auto_ptr <CoreBase> Core;
	extern auto_ptr <CoreBase> CoreDirect;
}

#endif // TC_HEADER_Core_Core