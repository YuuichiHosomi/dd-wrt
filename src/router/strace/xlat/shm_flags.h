/* Generated by ./xlat/gen.sh from ./xlat/shm_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(SHM_RDONLY) || (defined(HAVE_DECL_SHM_RDONLY) && HAVE_DECL_SHM_RDONLY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SHM_RDONLY) == (010000), "SHM_RDONLY != 010000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SHM_RDONLY 010000
#endif
#if defined(SHM_RND) || (defined(HAVE_DECL_SHM_RND) && HAVE_DECL_SHM_RND)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SHM_RND) == (020000), "SHM_RND != 020000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SHM_RND 020000
#endif
#if defined(SHM_REMAP) || (defined(HAVE_DECL_SHM_REMAP) && HAVE_DECL_SHM_REMAP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SHM_REMAP) == (040000), "SHM_REMAP != 040000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SHM_REMAP 040000
#endif
#if defined(SHM_EXEC) || (defined(HAVE_DECL_SHM_EXEC) && HAVE_DECL_SHM_EXEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SHM_EXEC) == (0100000), "SHM_EXEC != 0100000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SHM_EXEC 0100000
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat shm_flags in mpers mode

# else

static const struct xlat_data shm_flags_xdata[] = {
 XLAT(SHM_RDONLY),
 XLAT(SHM_RND),
 XLAT(SHM_REMAP),
 XLAT(SHM_EXEC),
};
static
const struct xlat shm_flags[1] = { {
 .data = shm_flags_xdata,
 .size = ARRAY_SIZE(shm_flags_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
