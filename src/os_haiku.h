/* vi:set ts=8 sts=4 sw=4:
 *
 * VIM - Vi IMproved	by Bram Moolenaar
 *	  Haiku port	by Siarzhuk Zharski
 *
 * Do ":help uganda"  in Vim to read copying and usage conditions.
 * Do ":help credits" in Vim to see a list of people who contributed.
 */

/*
 * os_haiku.h
 */

#define USE_TERM_CONSOLE

#define USR_VIM_DIR "$BE_USER_SETTINGS/evi"

#define USR_EXRC_FILE	USR_VIM_DIR "/exrc"
#define USR_EXRC_FILE2	USR_VIM_DIR "/evi/exrc"
#define USR_VIMRC_FILE	USR_VIM_DIR "/evirc"
#define USR_VIMRC_FILE2	USR_VIM_DIR "/evi/evirc"
#define USR_GVIMRC_FILE	USR_VIM_DIR "/gevirc"
#define USR_GVIMRC_FILE2	USR_VIM_DIR "/evi/gevirc"
#define VIMINFO_FILE	USR_VIM_DIR "/eviinfo"

#ifdef RUNTIME_GLOBAL
# ifdef RUNTIME_GLOBAL_AFTER
#  define DFLT_RUNTIMEPATH	USR_VIM_DIR "," RUNTIME_GLOBAL ",$VIMRUNTIME," RUNTIME_GLOBAL_AFTER "," USR_VIM_DIR "/after"
#  define CLEAN_RUNTIMEPATH	RUNTIME_GLOBAL ",$VIMRUNTIME," RUNTIME_GLOBAL_AFTER
# else
#  define DFLT_RUNTIMEPATH	USR_VIM_DIR "," RUNTIME_GLOBAL ",$VIMRUNTIME," RUNTIME_GLOBAL "/after," USR_VIM_DIR "/after"
#  define CLEAN_RUNTIMEPATH	RUNTIME_GLOBAL ",$VIMRUNTIME," RUNTIME_GLOBAL "/after"
# endif
#else
# define DFLT_RUNTIMEPATH	USR_VIM_DIR ",$VIM/evifiles,$VIMRUNTIME,$VIM/evifiles/after," USR_VIM_DIR "/after"
# define CLEAN_RUNTIMEPATH	"$VIM/evifiles,$VIMRUNTIME,$VIM/evifiles/after"
#endif
