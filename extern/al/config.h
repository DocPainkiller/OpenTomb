/* Define to the library version */
#define ALSOFT_VERSION "1.16.0.SDL"


// #define HAVE_STDALIGN_H 1
// #define HAVE_C11_ALIGNAS 1

/* Define if we have the SDL audio backend */
#define HAVE_SDL 1

#define HAVE_C11_ATOMIC

/* Define if we have the C11 aligned_alloc function */
//#define HAVE_ALIGNED_ALLOC

/* Define if we have the posix_memalign function */
//#define HAVE_POSIX_MEMALIGN

/* Define if we have the _aligned_malloc function */
//#define HAVE__ALIGNED_MALLOC

#define HAVE_SSE
#define HAVE_SSE2

/* Define if we have ARM Neon CPU extensions */
//#cmakedefine HAVE_NEON

/* Define if we have the Wave Writer backend */
#define HAVE_WAVE 1

/* Define if we have the lrintf function */
#define HAVE_LRINTF 1

/* Define if we have the strtof function */
#define HAVE_STRTOF 1

/* Define if we have GCC's destructor attribute
 CHECK_C_SOURCE_COMPILES("int foo() __attribute__((destructor));
                             int main() {return 0;}" HAVE_GCC_DESTRUCTOR)*/
#define HAVE_GCC_DESTRUCTOR 1

/* Define if we have GCC's format attribute
 CHECK_C_SOURCE_COMPILES("int foo(const char *str, ...) __attribute__((format(printf, 1, 2)));
                         int main() {return 0;}" HAVE_GCC_FORMAT)*/
//#define HAVE_GCC_FORMAT 1

/* Define if we have pthread_np.h */
//#define HAVE_PTHREAD_NP_H 1

/* Define if we have arm_neon.h */
//#define HAVE_ARM_NEON_H 1

/* Define if we have malloc.h */
#define HAVE_MALLOC_H 1

//#define HAVE_ALLOCA_H 1

/* Define if we have cpuid.h */
#define HAVE_CPUID_H 1

/* Define if we have float.h */
#define HAVE_FLOAT_H 1

/* Define if we have fenv.h */
#define HAVE_FENV_H 1

/* Define if we have _controlfp() */
#define HAVE__CONTROLFP 1

/* Define if we have __control87_2() */
//#define HAVE___CONTROL87_2 1

#define HAVE_GCC_GET_CPUID 1

/* Define if we have pthread_setschedparam() */
#define HAVE_PTHREAD_SETSCHEDPARAM 1
