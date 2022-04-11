#ifndef _RPMDIGEST_H
#define _RPMDIGEST_H

#include <rpm/rpmpgp.h>

#ifdef HAVE_OPENSSL
#  include "digest_openssl.h"
#endif
#ifdef HAVE_LIBGCRYPT
#  include "digest_libgcrypt.h"
#endif

#endif /* _RPMDIGEST_H */
