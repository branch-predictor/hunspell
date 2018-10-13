#ifndef HUNSPELL_VISIBILITY_H_
#define HUNSPELL_VISIBILITY_H_

#if defined(HUNSPELL_STATIC)
#  define LIBHUNSPELL_DLL_EXPORTED
#elif defined(_WIN32)
#  if defined(BUILDING_LIBHUNSPELL)
#    define LIBHUNSPELL_DLL_EXPORTED __declspec(dllexport)
#  else
#    define LIBHUNSPELL_DLL_EXPORTED __declspec(dllimport)
#  endif
#elif defined(BUILDING_LIBHUNSPELL) && 1
#  define LIBHUNSPELL_DLL_EXPORTED __attribute__((__visibility__("default")))
#else
#  define LIBHUNSPELL_DLL_EXPORTED
#endif

/*
add one or more of following if you need them:

#define HUNSPELL_EXPORT_CLASS
#define HUNSPELL_EXPORT_FUNC
*/

#ifdef HUNSPELL_EXPORT_CLASS
#define LIBHUNSPELL_DLL_CLASS_EXPORTED LIBHUNSPELL_DLL_EXPORTED 
#else
#define LIBHUNSPELL_DLL_CLASS_EXPORTED  
#endif

#ifdef HUNSPELL_EXPORT_FUNC
#define LIBHUNSPELL_DLL_FUNC_EXPORTED LIBHUNSPELL_DLL_EXPORTED 
#else
#define LIBHUNSPELL_DLL_FUNC_EXPORTED  
#endif

#endif
