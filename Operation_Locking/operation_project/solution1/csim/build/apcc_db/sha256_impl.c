/* Provide Declarations */
#include <stdarg.h>
#include <setjmp.h>
#include <limits.h>
#ifdef NEED_CBEAPINT
#include <autopilot_cbe.h>
#else
#define aesl_fopen fopen
#define aesl_freopen freopen
#define aesl_tmpfile tmpfile
#endif
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#ifdef __STRICT_ANSI__
#define inline __inline__
#define typeof __typeof__ 
#endif
#define __isoc99_fscanf fscanf
#define __isoc99_sscanf sscanf
#undef ferror
#undef feof
/* get a declaration for alloca */
#if defined(__CYGWIN__) || defined(__MINGW32__)
#define  alloca(x) __builtin_alloca((x))
#define _alloca(x) __builtin_alloca((x))
#elif defined(__APPLE__)
extern void *__builtin_alloca(unsigned long);
#define alloca(x) __builtin_alloca(x)
#define longjmp _longjmp
#define setjmp _setjmp
#elif defined(__sun__)
#if defined(__sparcv9)
extern void *__builtin_alloca(unsigned long);
#else
extern void *__builtin_alloca(unsigned int);
#endif
#define alloca(x) __builtin_alloca(x)
#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__) || defined(__arm__)
#define alloca(x) __builtin_alloca(x)
#elif defined(_MSC_VER)
#define inline _inline
#define alloca(x) _alloca(x)
#else
#include <alloca.h>
#endif

#ifndef __GNUC__  /* Can only support "linkonce" vars with GCC */
#define __attribute__(X)
#endif

#if defined(__GNUC__) && defined(__APPLE_CC__)
#define __EXTERNAL_WEAK__ __attribute__((weak_import))
#elif defined(__GNUC__)
#define __EXTERNAL_WEAK__ __attribute__((weak))
#else
#define __EXTERNAL_WEAK__
#endif

#if defined(__GNUC__) && (defined(__APPLE_CC__) || defined(__CYGWIN__) || defined(__MINGW32__))
#define __ATTRIBUTE_WEAK__
#elif defined(__GNUC__)
#define __ATTRIBUTE_WEAK__ __attribute__((weak))
#else
#define __ATTRIBUTE_WEAK__
#endif

#if defined(__GNUC__)
#define __HIDDEN__ __attribute__((visibility("hidden")))
#endif

#ifdef __GNUC__
#define LLVM_NAN(NanStr)   __builtin_nan(NanStr)   /* Double */
#define LLVM_NANF(NanStr)  __builtin_nanf(NanStr)  /* Float */
#define LLVM_NANS(NanStr)  __builtin_nans(NanStr)  /* Double */
#define LLVM_NANSF(NanStr) __builtin_nansf(NanStr) /* Float */
#define LLVM_INF           __builtin_inf()         /* Double */
#define LLVM_INFF          __builtin_inff()        /* Float */
#define LLVM_PREFETCH(addr,rw,locality) __builtin_prefetch(addr,rw,locality)
#define __ATTRIBUTE_CTOR__ __attribute__((constructor))
#define __ATTRIBUTE_DTOR__ __attribute__((destructor))
#define LLVM_ASM           __asm__
#else
#define LLVM_NAN(NanStr)   ((double)0.0)           /* Double */
#define LLVM_NANF(NanStr)  0.0F                    /* Float */
#define LLVM_NANS(NanStr)  ((double)0.0)           /* Double */
#define LLVM_NANSF(NanStr) 0.0F                    /* Float */
#define LLVM_INF           ((double)0.0)           /* Double */
#define LLVM_INFF          0.0F                    /* Float */
#define LLVM_PREFETCH(addr,rw,locality)            /* PREFETCH */
#define __ATTRIBUTE_CTOR__
#define __ATTRIBUTE_DTOR__
#define LLVM_ASM(X)
#endif

#if __GNUC__ < 4 /* Old GCC's, or compilers not GCC */ 
#define __builtin_stack_save() 0   /* not implemented */
#define __builtin_stack_restore(X) /* noop */
#endif

#if __GNUC__ && __LP64__ /* 128-bit integer types */
typedef int __attribute__((mode(TI))) llvmInt128;
typedef unsigned __attribute__((mode(TI))) llvmUInt128;
#endif

#define CODE_FOR_MAIN() /* Any target-specific code for main()*/

#ifndef __cplusplus
typedef unsigned char bool;
#endif


/* Support for floating point constants */
typedef unsigned long long ConstantDoubleTy;
typedef unsigned int        ConstantFloatTy;
typedef struct { unsigned long long f1; unsigned short f2; unsigned short pad[3]; } ConstantFP80Ty;
typedef struct { unsigned long long f1; unsigned long long f2; } ConstantFP128Ty;


/* Global Declarations */
/* Helper union for bitcasts */
typedef union {
  unsigned int Int32;
  unsigned long long Int64;
  float Float;
  double Double;
} llvmBitCastUnion;
/* Structure forward decls */
typedef struct l_struct_OC_SHA256_CTX l_struct_OC_SHA256_CTX;

/* Structure contents */
struct l_struct_OC_SHA256_CTX {
   char field0[64];
  unsigned int field1;
  signed int field2[2];
  signed int field3[8];
};


/* External Global Variable Declarations */
extern unsigned int rtl_key;
extern signed int k[64];

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
void update_rtl_key(signed int llvm_cbe_kl);
void DBL_INT_ADD(signed int llvm_cbe_a, signed int llvm_cbe_b, signed int llvm_cbe_c);
signed int ROTRIGHT(signed int llvm_cbe_a, signed int llvm_cbe_b);
signed int CH(signed int llvm_cbe_x, signed int llvm_cbe_y, signed int llvm_cbe_z);
signed int MAJ(signed int llvm_cbe_x, signed int llvm_cbe_y, signed int llvm_cbe_z);
signed int EP0(signed int llvm_cbe_x);
signed int EP1(signed int llvm_cbe_x);
signed int SIG0(signed int llvm_cbe_x);
signed int SIG1(signed int llvm_cbe_x);
void sha256_transform(l_struct_OC_SHA256_CTX *llvm_cbe_ctx,  char *llvm_cbe_data);
void sha256_init(l_struct_OC_SHA256_CTX *llvm_cbe_ctx);
void sha256_update(l_struct_OC_SHA256_CTX *llvm_cbe_ctx,  char *llvm_cbe_data, signed int llvm_cbe_len);
void sha256_final(l_struct_OC_SHA256_CTX *llvm_cbe_ctx,  char *llvm_cbe_hash);


/* Global Variable Definitions and Initialization */
unsigned int rtl_key = 101u;
signed int k[64] = { 1116352408u, 1899447441u, 3049323471u, 3921009573u, 961987163u, 1508970993u, 2453635748u, 2870763221u, 3624381080u, 310598401u, 607225278u, 1426881987u, 1925078388u, 2162078206u, 2614888103u, 3248222580u, 3835390401u, 4022224774u, 264347078u, 604807628u, 770255983u, 1249150122u, 1555081692u, 1996064986u, 2554220882u, 2821834349u, 2952996808u, 3210313671u, 3336571891u, 3584528711u, 113926993u, 338241895u, 666307205u, 773529912u, 1294757372u, 1396182291u, 1695183700u, 1986661051u, 2177026350u, 2456956037u, 2730485921u, 2820302411u, 3259730800u, 3345764771u, 3516065817u, 3600352804u, 4094571909u, 275423344u, 430227734u, 506948616u, 659060556u, 883997877u, 958139571u, 1322822218u, 1537002063u, 1747873779u, 1955562222u, 2024104815u, 2227730452u, 2361852424u, 2428436474u, 2756734187u, 3204031479u, 3329325298u };


/* Function Bodies */
static inline int llvm_fcmp_ord(double X, double Y) { return X == X && Y == Y; }
static inline int llvm_fcmp_uno(double X, double Y) { return X != X || Y != Y; }
static inline int llvm_fcmp_ueq(double X, double Y) { return X == Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_une(double X, double Y) { return X != Y; }
static inline int llvm_fcmp_ult(double X, double Y) { return X <  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ugt(double X, double Y) { return X >  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ule(double X, double Y) { return X <= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_uge(double X, double Y) { return X >= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_oeq(double X, double Y) { return X == Y ; }
static inline int llvm_fcmp_one(double X, double Y) { return X != Y && llvm_fcmp_ord(X, Y); }
static inline int llvm_fcmp_olt(double X, double Y) { return X <  Y ; }
static inline int llvm_fcmp_ogt(double X, double Y) { return X >  Y ; }
static inline int llvm_fcmp_ole(double X, double Y) { return X <= Y ; }
static inline int llvm_fcmp_oge(double X, double Y) { return X >= Y ; }

void update_rtl_key(signed int llvm_cbe_kl) {
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @update_rtl_key\n");
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%kl, i32* @rtl_key, align 4, !dbg !10 for 0x%I64xth hint within @update_rtl_key  --> \n", ++aesl_llvm_cbe_3_count);
  *(&rtl_key) = llvm_cbe_kl;
if (AESL_DEBUG_TRACE)
printf("\nkl = 0x%X\n", llvm_cbe_kl);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @update_rtl_key}\n");
  return;
}


void DBL_INT_ADD(signed int llvm_cbe_a, signed int llvm_cbe_b, signed int llvm_cbe_c) {
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @DBL_INT_ADD\n");
  if (AESL_DEBUG_TRACE)
      printf("\nEND @DBL_INT_ADD}\n");
  return;
}


signed int ROTRIGHT(signed int llvm_cbe_a, signed int llvm_cbe_b) {
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  unsigned int llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  unsigned int llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  unsigned int llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  unsigned int llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  unsigned int llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  unsigned int llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  unsigned int llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  unsigned int llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  unsigned int llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  unsigned int llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge_count = 0;
  unsigned int llvm_cbe_storemerge;
  unsigned int llvm_cbe_storemerge__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @ROTRIGHT\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = load i32* @rtl_key, align 4, !dbg !11 for 0x%I64xth hint within @ROTRIGHT  --> \n", ++aesl_llvm_cbe_24_count);
  llvm_cbe_tmp__1 = (unsigned int )*(&rtl_key);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = and i32 %%1, 64, !dbg !11 for 0x%I64xth hint within @ROTRIGHT  --> \n", ++aesl_llvm_cbe_25_count);
  llvm_cbe_tmp__2 = (unsigned int )llvm_cbe_tmp__1 & 64u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__2);
  if (((llvm_cbe_tmp__2&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__11;
  } else {
    goto llvm_cbe_tmp__12;
  }

llvm_cbe_tmp__11:
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = shl i32 %%a, %%b, !dbg !10 for 0x%I64xth hint within @ROTRIGHT  --> \n", ++aesl_llvm_cbe_30_count);
  llvm_cbe_tmp__3 = (unsigned int )llvm_cbe_a << llvm_cbe_b;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = sub i32 32, %%b, !dbg !10 for 0x%I64xth hint within @ROTRIGHT  --> \n", ++aesl_llvm_cbe_31_count);
  llvm_cbe_tmp__4 = (unsigned int )((unsigned int )(32u&4294967295ull)) - ((unsigned int )(llvm_cbe_b&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__4&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = lshr i32 %%a, %%6, !dbg !10 for 0x%I64xth hint within @ROTRIGHT  --> \n", ++aesl_llvm_cbe_32_count);
  llvm_cbe_tmp__5 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_a&4294967295ull)) >> ((unsigned int )(llvm_cbe_tmp__4&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__5&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = or i32 %%7, %%5, !dbg !10 for 0x%I64xth hint within @ROTRIGHT  --> \n", ++aesl_llvm_cbe_33_count);
  llvm_cbe_tmp__6 = (unsigned int )llvm_cbe_tmp__5 | llvm_cbe_tmp__3;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__6);
  llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__6;   /* for PHI node */
  goto llvm_cbe_tmp__13;

llvm_cbe_tmp__12:
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = lshr i32 %%a, %%b, !dbg !11 for 0x%I64xth hint within @ROTRIGHT  --> \n", ++aesl_llvm_cbe_35_count);
  llvm_cbe_tmp__7 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_a&4294967295ull)) >> ((unsigned int )(llvm_cbe_b&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__7&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = sub i32 32, %%b, !dbg !11 for 0x%I64xth hint within @ROTRIGHT  --> \n", ++aesl_llvm_cbe_36_count);
  llvm_cbe_tmp__8 = (unsigned int )((unsigned int )(32u&4294967295ull)) - ((unsigned int )(llvm_cbe_b&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__8&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = shl i32 %%a, %%11, !dbg !11 for 0x%I64xth hint within @ROTRIGHT  --> \n", ++aesl_llvm_cbe_37_count);
  llvm_cbe_tmp__9 = (unsigned int )llvm_cbe_a << llvm_cbe_tmp__8;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__9);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = or i32 %%12, %%10, !dbg !11 for 0x%I64xth hint within @ROTRIGHT  --> \n", ++aesl_llvm_cbe_38_count);
  llvm_cbe_tmp__10 = (unsigned int )llvm_cbe_tmp__9 | llvm_cbe_tmp__7;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__10);
  llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__10;   /* for PHI node */
  goto llvm_cbe_tmp__13;

llvm_cbe_tmp__13:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge = phi i32 [ %%8, %%4 ], [ %%13, %%9  for 0x%I64xth hint within @ROTRIGHT  --> \n", ++aesl_llvm_cbe_storemerge_count);
  llvm_cbe_storemerge = (unsigned int )llvm_cbe_storemerge__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge = 0x%X",llvm_cbe_storemerge);
printf("\n = 0x%X",llvm_cbe_tmp__6);
printf("\n = 0x%X",llvm_cbe_tmp__10);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @ROTRIGHT}\n");
  return llvm_cbe_storemerge;
}


signed int CH(signed int llvm_cbe_x, signed int llvm_cbe_y, signed int llvm_cbe_z) {
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  unsigned int llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  unsigned int llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  unsigned int llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  unsigned int llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  unsigned int llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  unsigned int llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  unsigned int llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  unsigned int llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  unsigned int llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  unsigned int llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge_count = 0;
  unsigned int llvm_cbe_storemerge;
  unsigned int llvm_cbe_storemerge__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @CH\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = load i32* @rtl_key, align 4, !dbg !11 for 0x%I64xth hint within @CH  --> \n", ++aesl_llvm_cbe_52_count);
  llvm_cbe_tmp__14 = (unsigned int )*(&rtl_key);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__14);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = and i32 %%1, 32, !dbg !11 for 0x%I64xth hint within @CH  --> \n", ++aesl_llvm_cbe_53_count);
  llvm_cbe_tmp__15 = (unsigned int )llvm_cbe_tmp__14 & 32u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__15);
  if (((llvm_cbe_tmp__15&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__24;
  } else {
    goto llvm_cbe_tmp__25;
  }

llvm_cbe_tmp__24:
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = xor i32 %%x, -1, !dbg !10 for 0x%I64xth hint within @CH  --> \n", ++aesl_llvm_cbe_58_count);
  llvm_cbe_tmp__16 = (unsigned int )llvm_cbe_x ^ 4294967295u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__16);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = and i32 %%z, %%x, !dbg !10 for 0x%I64xth hint within @CH  --> \n", ++aesl_llvm_cbe_59_count);
  llvm_cbe_tmp__17 = (unsigned int )llvm_cbe_z & llvm_cbe_x;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = or i32 %%y, %%5, !dbg !10 for 0x%I64xth hint within @CH  --> \n", ++aesl_llvm_cbe_60_count);
  llvm_cbe_tmp__18 = (unsigned int )llvm_cbe_y | llvm_cbe_tmp__16;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__18);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = or i32 %%7, %%6, !dbg !10 for 0x%I64xth hint within @CH  --> \n", ++aesl_llvm_cbe_61_count);
  llvm_cbe_tmp__19 = (unsigned int )llvm_cbe_tmp__18 | llvm_cbe_tmp__17;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__19);
  llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__19;   /* for PHI node */
  goto llvm_cbe_tmp__26;

llvm_cbe_tmp__25:
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = and i32 %%y, %%x, !dbg !11 for 0x%I64xth hint within @CH  --> \n", ++aesl_llvm_cbe_63_count);
  llvm_cbe_tmp__20 = (unsigned int )llvm_cbe_y & llvm_cbe_x;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__20);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = xor i32 %%x, -1, !dbg !11 for 0x%I64xth hint within @CH  --> \n", ++aesl_llvm_cbe_64_count);
  llvm_cbe_tmp__21 = (unsigned int )llvm_cbe_x ^ 4294967295u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__21);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = and i32 %%z, %%11, !dbg !11 for 0x%I64xth hint within @CH  --> \n", ++aesl_llvm_cbe_65_count);
  llvm_cbe_tmp__22 = (unsigned int )llvm_cbe_z & llvm_cbe_tmp__21;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = xor i32 %%12, %%10, !dbg !11 for 0x%I64xth hint within @CH  --> \n", ++aesl_llvm_cbe_66_count);
  llvm_cbe_tmp__23 = (unsigned int )llvm_cbe_tmp__22 ^ llvm_cbe_tmp__20;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__23);
  llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__23;   /* for PHI node */
  goto llvm_cbe_tmp__26;

llvm_cbe_tmp__26:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge = phi i32 [ %%8, %%4 ], [ %%13, %%9  for 0x%I64xth hint within @CH  --> \n", ++aesl_llvm_cbe_storemerge_count);
  llvm_cbe_storemerge = (unsigned int )llvm_cbe_storemerge__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge = 0x%X",llvm_cbe_storemerge);
printf("\n = 0x%X",llvm_cbe_tmp__19);
printf("\n = 0x%X",llvm_cbe_tmp__23);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @CH}\n");
  return llvm_cbe_storemerge;
}


signed int MAJ(signed int llvm_cbe_x, signed int llvm_cbe_y, signed int llvm_cbe_z) {
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  unsigned int llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  unsigned int llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  unsigned int llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  unsigned int llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  unsigned int llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  unsigned int llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_demorgan_count = 0;
  unsigned int llvm_cbe__2e_demorgan;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  unsigned int llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  unsigned int llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  unsigned int llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  unsigned int llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  unsigned int llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge_count = 0;
  unsigned int llvm_cbe_storemerge;
  unsigned int llvm_cbe_storemerge__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @MAJ\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = load i32* @rtl_key, align 4, !dbg !11 for 0x%I64xth hint within @MAJ  --> \n", ++aesl_llvm_cbe_84_count);
  llvm_cbe_tmp__27 = (unsigned int )*(&rtl_key);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__27);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = and i32 %%1, 16, !dbg !11 for 0x%I64xth hint within @MAJ  --> \n", ++aesl_llvm_cbe_85_count);
  llvm_cbe_tmp__28 = (unsigned int )llvm_cbe_tmp__27 & 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__28);
  if (((llvm_cbe_tmp__28&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__38;
  } else {
    goto llvm_cbe_tmp__39;
  }

llvm_cbe_tmp__38:
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = xor i32 %%z, %%y, !dbg !10 for 0x%I64xth hint within @MAJ  --> \n", ++aesl_llvm_cbe_90_count);
  llvm_cbe_tmp__29 = (unsigned int )llvm_cbe_z ^ llvm_cbe_y;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = and i32 %%5, %%x, !dbg !10 for 0x%I64xth hint within @MAJ  --> \n", ++aesl_llvm_cbe_91_count);
  llvm_cbe_tmp__30 = (unsigned int )llvm_cbe_tmp__29 & llvm_cbe_x;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__30);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = and i32 %%z, %%y, !dbg !10 for 0x%I64xth hint within @MAJ  --> \n", ++aesl_llvm_cbe_92_count);
  llvm_cbe_tmp__31 = (unsigned int )llvm_cbe_z & llvm_cbe_y;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__31);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = xor i32 %%6, %%7, !dbg !10 for 0x%I64xth hint within @MAJ  --> \n", ++aesl_llvm_cbe_93_count);
  llvm_cbe_tmp__32 = (unsigned int )llvm_cbe_tmp__30 ^ llvm_cbe_tmp__31;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__32);
  llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__32;   /* for PHI node */
  goto llvm_cbe_tmp__40;

llvm_cbe_tmp__39:
if (AESL_DEBUG_TRACE)
printf("\n  %%.demorgan = and i32 %%y, %%x, !dbg !11 for 0x%I64xth hint within @MAJ  --> \n", ++aesl_llvm_cbe__2e_demorgan_count);
  llvm_cbe__2e_demorgan = (unsigned int )llvm_cbe_y & llvm_cbe_x;
if (AESL_DEBUG_TRACE)
printf("\n.demorgan = 0x%X\n", llvm_cbe__2e_demorgan);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = or i32 %%z, %%x, !dbg !11 for 0x%I64xth hint within @MAJ  --> \n", ++aesl_llvm_cbe_95_count);
  llvm_cbe_tmp__33 = (unsigned int )llvm_cbe_z | llvm_cbe_x;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__33);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = or i32 %%z, %%y, !dbg !11 for 0x%I64xth hint within @MAJ  --> \n", ++aesl_llvm_cbe_96_count);
  llvm_cbe_tmp__34 = (unsigned int )llvm_cbe_z | llvm_cbe_y;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__34);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = xor i32 %%.demorgan, -1, !dbg !11 for 0x%I64xth hint within @MAJ  --> \n", ++aesl_llvm_cbe_97_count);
  llvm_cbe_tmp__35 = (unsigned int )llvm_cbe__2e_demorgan ^ 4294967295u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__35);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = xor i32 %%11, %%12, !dbg !11 for 0x%I64xth hint within @MAJ  --> \n", ++aesl_llvm_cbe_98_count);
  llvm_cbe_tmp__36 = (unsigned int )llvm_cbe_tmp__34 ^ llvm_cbe_tmp__35;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__36);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = xor i32 %%13, %%10, !dbg !11 for 0x%I64xth hint within @MAJ  --> \n", ++aesl_llvm_cbe_99_count);
  llvm_cbe_tmp__37 = (unsigned int )llvm_cbe_tmp__36 ^ llvm_cbe_tmp__33;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__37);
  llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__37;   /* for PHI node */
  goto llvm_cbe_tmp__40;

llvm_cbe_tmp__40:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge = phi i32 [ %%8, %%4 ], [ %%14, %%9  for 0x%I64xth hint within @MAJ  --> \n", ++aesl_llvm_cbe_storemerge_count);
  llvm_cbe_storemerge = (unsigned int )llvm_cbe_storemerge__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge = 0x%X",llvm_cbe_storemerge);
printf("\n = 0x%X",llvm_cbe_tmp__32);
printf("\n = 0x%X",llvm_cbe_tmp__37);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @MAJ}\n");
  return llvm_cbe_storemerge;
}


signed int EP0(signed int llvm_cbe_x) {
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  unsigned int llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  unsigned int llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  unsigned int llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  unsigned int llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  unsigned int llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  unsigned int llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  unsigned int llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  unsigned int llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  unsigned int llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  unsigned int llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  unsigned int llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  unsigned int llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge_count = 0;
  unsigned int llvm_cbe_storemerge;
  unsigned int llvm_cbe_storemerge__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @EP0\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = load i32* @rtl_key, align 4, !dbg !11 for 0x%I64xth hint within @EP0  --> \n", ++aesl_llvm_cbe_109_count);
  llvm_cbe_tmp__41 = (unsigned int )*(&rtl_key);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__41);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = and i32 %%1, 8, !dbg !11 for 0x%I64xth hint within @EP0  --> \n", ++aesl_llvm_cbe_110_count);
  llvm_cbe_tmp__42 = (unsigned int )llvm_cbe_tmp__41 & 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__42);
  if (((llvm_cbe_tmp__42&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__53;
  } else {
    goto llvm_cbe_tmp__54;
  }

llvm_cbe_tmp__53:
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = tail call i32 @ROTRIGHT(i32 %%x, i32 2), !dbg !10 for 0x%I64xth hint within @EP0  --> \n", ++aesl_llvm_cbe_115_count);
  llvm_cbe_tmp__43 = (unsigned int ) /*tail*/ ROTRIGHT(llvm_cbe_x, 2u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument x = 0x%X",llvm_cbe_x);
printf("\nArgument  = 0x%X",2u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__43);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = tail call i32 @ROTRIGHT(i32 %%x, i32 13), !dbg !11 for 0x%I64xth hint within @EP0  --> \n", ++aesl_llvm_cbe_116_count);
  llvm_cbe_tmp__44 = (unsigned int ) /*tail*/ ROTRIGHT(llvm_cbe_x, 13u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument x = 0x%X",llvm_cbe_x);
printf("\nArgument  = 0x%X",13u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__44);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = tail call i32 @ROTRIGHT(i32 %%x, i32 22), !dbg !11 for 0x%I64xth hint within @EP0  --> \n", ++aesl_llvm_cbe_117_count);
  llvm_cbe_tmp__45 = (unsigned int ) /*tail*/ ROTRIGHT(llvm_cbe_x, 22u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument x = 0x%X",llvm_cbe_x);
printf("\nArgument  = 0x%X",22u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__45);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = xor i32 %%6, %%5, !dbg !11 for 0x%I64xth hint within @EP0  --> \n", ++aesl_llvm_cbe_118_count);
  llvm_cbe_tmp__46 = (unsigned int )llvm_cbe_tmp__44 ^ llvm_cbe_tmp__43;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__46);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = xor i32 %%8, %%7, !dbg !11 for 0x%I64xth hint within @EP0  --> \n", ++aesl_llvm_cbe_119_count);
  llvm_cbe_tmp__47 = (unsigned int )llvm_cbe_tmp__46 ^ llvm_cbe_tmp__45;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__47);
  llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__47;   /* for PHI node */
  goto llvm_cbe_tmp__55;

llvm_cbe_tmp__54:
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = tail call i32 @ROTRIGHT(i32 %%x, i32 6), !dbg !11 for 0x%I64xth hint within @EP0  --> \n", ++aesl_llvm_cbe_121_count);
  llvm_cbe_tmp__48 = (unsigned int ) /*tail*/ ROTRIGHT(llvm_cbe_x, 6u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument x = 0x%X",llvm_cbe_x);
printf("\nArgument  = 0x%X",6u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__48);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = tail call i32 @ROTRIGHT(i32 %%x, i32 18), !dbg !11 for 0x%I64xth hint within @EP0  --> \n", ++aesl_llvm_cbe_122_count);
  llvm_cbe_tmp__49 = (unsigned int ) /*tail*/ ROTRIGHT(llvm_cbe_x, 18u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument x = 0x%X",llvm_cbe_x);
printf("\nArgument  = 0x%X",18u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__49);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = tail call i32 @ROTRIGHT(i32 %%x, i32 65), !dbg !11 for 0x%I64xth hint within @EP0  --> \n", ++aesl_llvm_cbe_123_count);
  llvm_cbe_tmp__50 = (unsigned int ) /*tail*/ ROTRIGHT(llvm_cbe_x, 65u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument x = 0x%X",llvm_cbe_x);
printf("\nArgument  = 0x%X",65u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__50);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = xor i32 %%12, %%11, !dbg !11 for 0x%I64xth hint within @EP0  --> \n", ++aesl_llvm_cbe_124_count);
  llvm_cbe_tmp__51 = (unsigned int )llvm_cbe_tmp__49 ^ llvm_cbe_tmp__48;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__51);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = xor i32 %%14, %%13, !dbg !11 for 0x%I64xth hint within @EP0  --> \n", ++aesl_llvm_cbe_125_count);
  llvm_cbe_tmp__52 = (unsigned int )llvm_cbe_tmp__51 ^ llvm_cbe_tmp__50;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__52);
  llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__52;   /* for PHI node */
  goto llvm_cbe_tmp__55;

llvm_cbe_tmp__55:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge = phi i32 [ %%9, %%4 ], [ %%15, %%10  for 0x%I64xth hint within @EP0  --> \n", ++aesl_llvm_cbe_storemerge_count);
  llvm_cbe_storemerge = (unsigned int )llvm_cbe_storemerge__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge = 0x%X",llvm_cbe_storemerge);
printf("\n = 0x%X",llvm_cbe_tmp__47);
printf("\n = 0x%X",llvm_cbe_tmp__52);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @EP0}\n");
  return llvm_cbe_storemerge;
}


signed int EP1(signed int llvm_cbe_x) {
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  unsigned int llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  unsigned int llvm_cbe_tmp__57;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  unsigned int llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  unsigned int llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  unsigned int llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  unsigned int llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  unsigned int llvm_cbe_tmp__62;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  unsigned int llvm_cbe_tmp__63;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  unsigned int llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  unsigned int llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  unsigned int llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  unsigned int llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge_count = 0;
  unsigned int llvm_cbe_storemerge;
  unsigned int llvm_cbe_storemerge__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @EP1\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = load i32* @rtl_key, align 4, !dbg !11 for 0x%I64xth hint within @EP1  --> \n", ++aesl_llvm_cbe_135_count);
  llvm_cbe_tmp__56 = (unsigned int )*(&rtl_key);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__56);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = and i32 %%1, 4, !dbg !11 for 0x%I64xth hint within @EP1  --> \n", ++aesl_llvm_cbe_136_count);
  llvm_cbe_tmp__57 = (unsigned int )llvm_cbe_tmp__56 & 4u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__57);
  if (((llvm_cbe_tmp__57&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__68;
  } else {
    goto llvm_cbe_tmp__69;
  }

llvm_cbe_tmp__68:
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = tail call i32 @ROTRIGHT(i32 %%x, i32 4), !dbg !10 for 0x%I64xth hint within @EP1  --> \n", ++aesl_llvm_cbe_141_count);
  llvm_cbe_tmp__58 = (unsigned int ) /*tail*/ ROTRIGHT(llvm_cbe_x, 4u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument x = 0x%X",llvm_cbe_x);
printf("\nArgument  = 0x%X",4u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__58);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = tail call i32 @ROTRIGHT(i32 %%x, i32 10), !dbg !11 for 0x%I64xth hint within @EP1  --> \n", ++aesl_llvm_cbe_142_count);
  llvm_cbe_tmp__59 = (unsigned int ) /*tail*/ ROTRIGHT(llvm_cbe_x, 10u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument x = 0x%X",llvm_cbe_x);
printf("\nArgument  = 0x%X",10u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__59);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = tail call i32 @ROTRIGHT(i32 %%x, i32 33), !dbg !11 for 0x%I64xth hint within @EP1  --> \n", ++aesl_llvm_cbe_143_count);
  llvm_cbe_tmp__60 = (unsigned int ) /*tail*/ ROTRIGHT(llvm_cbe_x, 33u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument x = 0x%X",llvm_cbe_x);
printf("\nArgument  = 0x%X",33u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__60);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = xor i32 %%6, %%5, !dbg !11 for 0x%I64xth hint within @EP1  --> \n", ++aesl_llvm_cbe_144_count);
  llvm_cbe_tmp__61 = (unsigned int )llvm_cbe_tmp__59 ^ llvm_cbe_tmp__58;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__61);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = xor i32 %%8, %%7, !dbg !11 for 0x%I64xth hint within @EP1  --> \n", ++aesl_llvm_cbe_145_count);
  llvm_cbe_tmp__62 = (unsigned int )llvm_cbe_tmp__61 ^ llvm_cbe_tmp__60;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__62);
  llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__62;   /* for PHI node */
  goto llvm_cbe_tmp__70;

llvm_cbe_tmp__69:
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = tail call i32 @ROTRIGHT(i32 %%x, i32 6), !dbg !11 for 0x%I64xth hint within @EP1  --> \n", ++aesl_llvm_cbe_147_count);
  llvm_cbe_tmp__63 = (unsigned int ) /*tail*/ ROTRIGHT(llvm_cbe_x, 6u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument x = 0x%X",llvm_cbe_x);
printf("\nArgument  = 0x%X",6u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__63);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = tail call i32 @ROTRIGHT(i32 %%x, i32 11), !dbg !11 for 0x%I64xth hint within @EP1  --> \n", ++aesl_llvm_cbe_148_count);
  llvm_cbe_tmp__64 = (unsigned int ) /*tail*/ ROTRIGHT(llvm_cbe_x, 11u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument x = 0x%X",llvm_cbe_x);
printf("\nArgument  = 0x%X",11u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__64);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = tail call i32 @ROTRIGHT(i32 %%x, i32 25), !dbg !11 for 0x%I64xth hint within @EP1  --> \n", ++aesl_llvm_cbe_149_count);
  llvm_cbe_tmp__65 = (unsigned int ) /*tail*/ ROTRIGHT(llvm_cbe_x, 25u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument x = 0x%X",llvm_cbe_x);
printf("\nArgument  = 0x%X",25u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__65);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = xor i32 %%12, %%11, !dbg !11 for 0x%I64xth hint within @EP1  --> \n", ++aesl_llvm_cbe_150_count);
  llvm_cbe_tmp__66 = (unsigned int )llvm_cbe_tmp__64 ^ llvm_cbe_tmp__63;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__66);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = xor i32 %%14, %%13, !dbg !11 for 0x%I64xth hint within @EP1  --> \n", ++aesl_llvm_cbe_151_count);
  llvm_cbe_tmp__67 = (unsigned int )llvm_cbe_tmp__66 ^ llvm_cbe_tmp__65;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__67);
  llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__67;   /* for PHI node */
  goto llvm_cbe_tmp__70;

llvm_cbe_tmp__70:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge = phi i32 [ %%9, %%4 ], [ %%15, %%10  for 0x%I64xth hint within @EP1  --> \n", ++aesl_llvm_cbe_storemerge_count);
  llvm_cbe_storemerge = (unsigned int )llvm_cbe_storemerge__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge = 0x%X",llvm_cbe_storemerge);
printf("\n = 0x%X",llvm_cbe_tmp__62);
printf("\n = 0x%X",llvm_cbe_tmp__67);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @EP1}\n");
  return llvm_cbe_storemerge;
}


signed int SIG0(signed int llvm_cbe_x) {
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  unsigned int llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  unsigned int llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  unsigned int llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  unsigned int llvm_cbe_tmp__74;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  unsigned int llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  unsigned int llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  unsigned int llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  unsigned int llvm_cbe_tmp__78;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  unsigned int llvm_cbe_tmp__79;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  unsigned int llvm_cbe_tmp__80;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  unsigned int llvm_cbe_tmp__81;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  unsigned int llvm_cbe_tmp__82;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge_count = 0;
  unsigned int llvm_cbe_storemerge;
  unsigned int llvm_cbe_storemerge__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @SIG0\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = load i32* @rtl_key, align 4, !dbg !11 for 0x%I64xth hint within @SIG0  --> \n", ++aesl_llvm_cbe_161_count);
  llvm_cbe_tmp__71 = (unsigned int )*(&rtl_key);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__71);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = and i32 %%1, 2, !dbg !11 for 0x%I64xth hint within @SIG0  --> \n", ++aesl_llvm_cbe_162_count);
  llvm_cbe_tmp__72 = (unsigned int )llvm_cbe_tmp__71 & 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__72);
  if (((llvm_cbe_tmp__72&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__83;
  } else {
    goto llvm_cbe_tmp__84;
  }

llvm_cbe_tmp__83:
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = tail call i32 @ROTRIGHT(i32 %%x, i32 7), !dbg !10 for 0x%I64xth hint within @SIG0  --> \n", ++aesl_llvm_cbe_167_count);
  llvm_cbe_tmp__73 = (unsigned int ) /*tail*/ ROTRIGHT(llvm_cbe_x, 7u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument x = 0x%X",llvm_cbe_x);
printf("\nArgument  = 0x%X",7u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__73);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = tail call i32 @ROTRIGHT(i32 %%x, i32 18), !dbg !11 for 0x%I64xth hint within @SIG0  --> \n", ++aesl_llvm_cbe_168_count);
  llvm_cbe_tmp__74 = (unsigned int ) /*tail*/ ROTRIGHT(llvm_cbe_x, 18u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument x = 0x%X",llvm_cbe_x);
printf("\nArgument  = 0x%X",18u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__74);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = lshr i32 %%x, 3, !dbg !11 for 0x%I64xth hint within @SIG0  --> \n", ++aesl_llvm_cbe_169_count);
  llvm_cbe_tmp__75 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_x&4294967295ull)) >> ((unsigned int )(3u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__75&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = xor i32 %%5, %%7, !dbg !11 for 0x%I64xth hint within @SIG0  --> \n", ++aesl_llvm_cbe_170_count);
  llvm_cbe_tmp__76 = (unsigned int )llvm_cbe_tmp__73 ^ llvm_cbe_tmp__75;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__76);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = xor i32 %%8, %%6, !dbg !11 for 0x%I64xth hint within @SIG0  --> \n", ++aesl_llvm_cbe_171_count);
  llvm_cbe_tmp__77 = (unsigned int )llvm_cbe_tmp__76 ^ llvm_cbe_tmp__74;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__77);
  llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__77;   /* for PHI node */
  goto llvm_cbe_tmp__85;

llvm_cbe_tmp__84:
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = tail call i32 @ROTRIGHT(i32 %%x, i32 6), !dbg !11 for 0x%I64xth hint within @SIG0  --> \n", ++aesl_llvm_cbe_173_count);
  llvm_cbe_tmp__78 = (unsigned int ) /*tail*/ ROTRIGHT(llvm_cbe_x, 6u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument x = 0x%X",llvm_cbe_x);
printf("\nArgument  = 0x%X",6u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__78);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = tail call i32 @ROTRIGHT(i32 %%x, i32 8), !dbg !11 for 0x%I64xth hint within @SIG0  --> \n", ++aesl_llvm_cbe_174_count);
  llvm_cbe_tmp__79 = (unsigned int ) /*tail*/ ROTRIGHT(llvm_cbe_x, 8u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument x = 0x%X",llvm_cbe_x);
printf("\nArgument  = 0x%X",8u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__79);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = tail call i32 @ROTRIGHT(i32 %%x, i32 65), !dbg !11 for 0x%I64xth hint within @SIG0  --> \n", ++aesl_llvm_cbe_175_count);
  llvm_cbe_tmp__80 = (unsigned int ) /*tail*/ ROTRIGHT(llvm_cbe_x, 65u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument x = 0x%X",llvm_cbe_x);
printf("\nArgument  = 0x%X",65u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__80);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = xor i32 %%12, %%11, !dbg !11 for 0x%I64xth hint within @SIG0  --> \n", ++aesl_llvm_cbe_176_count);
  llvm_cbe_tmp__81 = (unsigned int )llvm_cbe_tmp__79 ^ llvm_cbe_tmp__78;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__81);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = xor i32 %%14, %%13, !dbg !11 for 0x%I64xth hint within @SIG0  --> \n", ++aesl_llvm_cbe_177_count);
  llvm_cbe_tmp__82 = (unsigned int )llvm_cbe_tmp__81 ^ llvm_cbe_tmp__80;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__82);
  llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__82;   /* for PHI node */
  goto llvm_cbe_tmp__85;

llvm_cbe_tmp__85:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge = phi i32 [ %%9, %%4 ], [ %%15, %%10  for 0x%I64xth hint within @SIG0  --> \n", ++aesl_llvm_cbe_storemerge_count);
  llvm_cbe_storemerge = (unsigned int )llvm_cbe_storemerge__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge = 0x%X",llvm_cbe_storemerge);
printf("\n = 0x%X",llvm_cbe_tmp__77);
printf("\n = 0x%X",llvm_cbe_tmp__82);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @SIG0}\n");
  return llvm_cbe_storemerge;
}


signed int SIG1(signed int llvm_cbe_x) {
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  unsigned int llvm_cbe_tmp__86;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  unsigned int llvm_cbe_tmp__87;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  unsigned int llvm_cbe_tmp__88;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  unsigned int llvm_cbe_tmp__89;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  unsigned int llvm_cbe_tmp__90;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  unsigned int llvm_cbe_tmp__91;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  unsigned int llvm_cbe_tmp__92;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  unsigned int llvm_cbe_tmp__93;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  unsigned int llvm_cbe_tmp__94;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
  unsigned int llvm_cbe_tmp__95;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
  unsigned int llvm_cbe_tmp__96;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  unsigned int llvm_cbe_tmp__97;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge_count = 0;
  unsigned int llvm_cbe_storemerge;
  unsigned int llvm_cbe_storemerge__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @SIG1\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = load i32* @rtl_key, align 4, !dbg !11 for 0x%I64xth hint within @SIG1  --> \n", ++aesl_llvm_cbe_187_count);
  llvm_cbe_tmp__86 = (unsigned int )*(&rtl_key);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__86);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = and i32 %%1, 1, !dbg !11 for 0x%I64xth hint within @SIG1  --> \n", ++aesl_llvm_cbe_188_count);
  llvm_cbe_tmp__87 = (unsigned int )llvm_cbe_tmp__86 & 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__87);
  if (((llvm_cbe_tmp__87&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__98;
  } else {
    goto llvm_cbe_tmp__99;
  }

llvm_cbe_tmp__98:
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = tail call i32 @ROTRIGHT(i32 %%x, i32 7), !dbg !10 for 0x%I64xth hint within @SIG1  --> \n", ++aesl_llvm_cbe_193_count);
  llvm_cbe_tmp__88 = (unsigned int ) /*tail*/ ROTRIGHT(llvm_cbe_x, 7u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument x = 0x%X",llvm_cbe_x);
printf("\nArgument  = 0x%X",7u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__88);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = tail call i32 @ROTRIGHT(i32 %%x, i32 18), !dbg !11 for 0x%I64xth hint within @SIG1  --> \n", ++aesl_llvm_cbe_194_count);
  llvm_cbe_tmp__89 = (unsigned int ) /*tail*/ ROTRIGHT(llvm_cbe_x, 18u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument x = 0x%X",llvm_cbe_x);
printf("\nArgument  = 0x%X",18u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__89);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = lshr i32 %%x, 3, !dbg !11 for 0x%I64xth hint within @SIG1  --> \n", ++aesl_llvm_cbe_195_count);
  llvm_cbe_tmp__90 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_x&4294967295ull)) >> ((unsigned int )(3u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__90&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = xor i32 %%5, %%7, !dbg !11 for 0x%I64xth hint within @SIG1  --> \n", ++aesl_llvm_cbe_196_count);
  llvm_cbe_tmp__91 = (unsigned int )llvm_cbe_tmp__88 ^ llvm_cbe_tmp__90;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__91);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = xor i32 %%8, %%6, !dbg !11 for 0x%I64xth hint within @SIG1  --> \n", ++aesl_llvm_cbe_197_count);
  llvm_cbe_tmp__92 = (unsigned int )llvm_cbe_tmp__91 ^ llvm_cbe_tmp__89;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__92);
  llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__92;   /* for PHI node */
  goto llvm_cbe_tmp__100;

llvm_cbe_tmp__99:
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = tail call i32 @ROTRIGHT(i32 %%x, i32 17), !dbg !11 for 0x%I64xth hint within @SIG1  --> \n", ++aesl_llvm_cbe_199_count);
  llvm_cbe_tmp__93 = (unsigned int ) /*tail*/ ROTRIGHT(llvm_cbe_x, 17u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument x = 0x%X",llvm_cbe_x);
printf("\nArgument  = 0x%X",17u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__93);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = tail call i32 @ROTRIGHT(i32 %%x, i32 19), !dbg !11 for 0x%I64xth hint within @SIG1  --> \n", ++aesl_llvm_cbe_200_count);
  llvm_cbe_tmp__94 = (unsigned int ) /*tail*/ ROTRIGHT(llvm_cbe_x, 19u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument x = 0x%X",llvm_cbe_x);
printf("\nArgument  = 0x%X",19u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__94);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = lshr i32 %%x, 10, !dbg !11 for 0x%I64xth hint within @SIG1  --> \n", ++aesl_llvm_cbe_201_count);
  llvm_cbe_tmp__95 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_x&4294967295ull)) >> ((unsigned int )(10u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__95&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = xor i32 %%11, %%13, !dbg !11 for 0x%I64xth hint within @SIG1  --> \n", ++aesl_llvm_cbe_202_count);
  llvm_cbe_tmp__96 = (unsigned int )llvm_cbe_tmp__93 ^ llvm_cbe_tmp__95;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__96);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = xor i32 %%14, %%12, !dbg !11 for 0x%I64xth hint within @SIG1  --> \n", ++aesl_llvm_cbe_203_count);
  llvm_cbe_tmp__97 = (unsigned int )llvm_cbe_tmp__96 ^ llvm_cbe_tmp__94;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__97);
  llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__97;   /* for PHI node */
  goto llvm_cbe_tmp__100;

llvm_cbe_tmp__100:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge = phi i32 [ %%9, %%4 ], [ %%15, %%10  for 0x%I64xth hint within @SIG1  --> \n", ++aesl_llvm_cbe_storemerge_count);
  llvm_cbe_storemerge = (unsigned int )llvm_cbe_storemerge__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge = 0x%X",llvm_cbe_storemerge);
printf("\n = 0x%X",llvm_cbe_tmp__92);
printf("\n = 0x%X",llvm_cbe_tmp__97);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @SIG1}\n");
  return llvm_cbe_storemerge;
}


void sha256_transform(l_struct_OC_SHA256_CTX *llvm_cbe_ctx,  char *llvm_cbe_data) {
  static  unsigned long long aesl_llvm_cbe_m_count = 0;
  signed int llvm_cbe_m[64];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;
  static  unsigned long long aesl_llvm_cbe_226_count = 0;
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;
  static  unsigned long long aesl_llvm_cbe_247_count = 0;
  static  unsigned long long aesl_llvm_cbe_248_count = 0;
  static  unsigned long long aesl_llvm_cbe_249_count = 0;
  static  unsigned long long aesl_llvm_cbe_250_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge14_count = 0;
  unsigned int llvm_cbe_storemerge14;
  unsigned int llvm_cbe_storemerge14__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge1313_count = 0;
  unsigned int llvm_cbe_storemerge1313;
  unsigned int llvm_cbe_storemerge1313__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_251_count = 0;
  unsigned long long llvm_cbe_tmp__101;
  static  unsigned long long aesl_llvm_cbe_252_count = 0;
   char *llvm_cbe_tmp__102;
  static  unsigned long long aesl_llvm_cbe_253_count = 0;
  unsigned char llvm_cbe_tmp__103;
  static  unsigned long long aesl_llvm_cbe_254_count = 0;
  unsigned int llvm_cbe_tmp__104;
  static  unsigned long long aesl_llvm_cbe_255_count = 0;
  unsigned int llvm_cbe_tmp__105;
  static  unsigned long long aesl_llvm_cbe_256_count = 0;
  unsigned int llvm_cbe_tmp__106;
  static  unsigned long long aesl_llvm_cbe_257_count = 0;
  unsigned long long llvm_cbe_tmp__107;
  static  unsigned long long aesl_llvm_cbe_258_count = 0;
   char *llvm_cbe_tmp__108;
  static  unsigned long long aesl_llvm_cbe_259_count = 0;
  unsigned char llvm_cbe_tmp__109;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;
  unsigned int llvm_cbe_tmp__110;
  static  unsigned long long aesl_llvm_cbe_261_count = 0;
  unsigned int llvm_cbe_tmp__111;
  static  unsigned long long aesl_llvm_cbe_262_count = 0;
  unsigned int llvm_cbe_tmp__112;
  static  unsigned long long aesl_llvm_cbe_263_count = 0;
  unsigned long long llvm_cbe_tmp__113;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
   char *llvm_cbe_tmp__114;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  unsigned char llvm_cbe_tmp__115;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  unsigned int llvm_cbe_tmp__116;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  unsigned int llvm_cbe_tmp__117;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  unsigned int llvm_cbe_tmp__118;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  unsigned long long llvm_cbe_tmp__119;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
   char *llvm_cbe_tmp__120;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  unsigned char llvm_cbe_tmp__121;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
  unsigned int llvm_cbe_tmp__122;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  unsigned int llvm_cbe_tmp__123;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
  unsigned int llvm_cbe_tmp__124;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  unsigned int llvm_cbe_tmp__125;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;
  unsigned long long llvm_cbe_tmp__126;
  static  unsigned long long aesl_llvm_cbe_277_count = 0;
  signed int *llvm_cbe_tmp__127;
  static  unsigned long long aesl_llvm_cbe_278_count = 0;
  static  unsigned long long aesl_llvm_cbe_279_count = 0;
  unsigned int llvm_cbe_tmp__128;
  static  unsigned long long aesl_llvm_cbe_280_count = 0;
  static  unsigned long long aesl_llvm_cbe_281_count = 0;
  static  unsigned long long aesl_llvm_cbe_282_count = 0;
  static  unsigned long long aesl_llvm_cbe_283_count = 0;
  static  unsigned long long aesl_llvm_cbe_284_count = 0;
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;
  static  unsigned long long aesl_llvm_cbe_288_count = 0;
  static  unsigned long long aesl_llvm_cbe_289_count = 0;
  static  unsigned long long aesl_llvm_cbe_290_count = 0;
  static  unsigned long long aesl_llvm_cbe_291_count = 0;
  static  unsigned long long aesl_llvm_cbe_292_count = 0;
  static  unsigned long long aesl_llvm_cbe_293_count = 0;
  static  unsigned long long aesl_llvm_cbe_294_count = 0;
  unsigned int llvm_cbe_tmp__129;
  static  unsigned long long aesl_llvm_cbe_295_count = 0;
  static  unsigned long long aesl_llvm_cbe_296_count = 0;
  static  unsigned long long aesl_llvm_cbe_297_count = 0;
  static  unsigned long long aesl_llvm_cbe_298_count = 0;
  static  unsigned long long aesl_llvm_cbe_299_count = 0;
  static  unsigned long long aesl_llvm_cbe_300_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond24_count = 0;
  static  unsigned long long aesl_llvm_cbe_301_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1212_count = 0;
  unsigned int llvm_cbe_storemerge1212;
  unsigned int llvm_cbe_storemerge1212__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_302_count = 0;
  unsigned int llvm_cbe_tmp__130;
  static  unsigned long long aesl_llvm_cbe_303_count = 0;
  unsigned long long llvm_cbe_tmp__131;
  static  unsigned long long aesl_llvm_cbe_304_count = 0;
  signed int *llvm_cbe_tmp__132;
  static  unsigned long long aesl_llvm_cbe_305_count = 0;
  unsigned int llvm_cbe_tmp__133;
  static  unsigned long long aesl_llvm_cbe_306_count = 0;
  unsigned int llvm_cbe_tmp__134;
  static  unsigned long long aesl_llvm_cbe_307_count = 0;
  unsigned int llvm_cbe_tmp__135;
  static  unsigned long long aesl_llvm_cbe_308_count = 0;
  unsigned long long llvm_cbe_tmp__136;
  static  unsigned long long aesl_llvm_cbe_309_count = 0;
  signed int *llvm_cbe_tmp__137;
  static  unsigned long long aesl_llvm_cbe_310_count = 0;
  unsigned int llvm_cbe_tmp__138;
  static  unsigned long long aesl_llvm_cbe_311_count = 0;
  unsigned int llvm_cbe_tmp__139;
  static  unsigned long long aesl_llvm_cbe_312_count = 0;
  unsigned long long llvm_cbe_tmp__140;
  static  unsigned long long aesl_llvm_cbe_313_count = 0;
  signed int *llvm_cbe_tmp__141;
  static  unsigned long long aesl_llvm_cbe_314_count = 0;
  unsigned int llvm_cbe_tmp__142;
  static  unsigned long long aesl_llvm_cbe_315_count = 0;
  unsigned int llvm_cbe_tmp__143;
  static  unsigned long long aesl_llvm_cbe_316_count = 0;
  unsigned int llvm_cbe_tmp__144;
  static  unsigned long long aesl_llvm_cbe_317_count = 0;
  unsigned long long llvm_cbe_tmp__145;
  static  unsigned long long aesl_llvm_cbe_318_count = 0;
  signed int *llvm_cbe_tmp__146;
  static  unsigned long long aesl_llvm_cbe_319_count = 0;
  unsigned int llvm_cbe_tmp__147;
  static  unsigned long long aesl_llvm_cbe_320_count = 0;
  unsigned int llvm_cbe_tmp__148;
  static  unsigned long long aesl_llvm_cbe_321_count = 0;
  unsigned int llvm_cbe_tmp__149;
  static  unsigned long long aesl_llvm_cbe_322_count = 0;
  unsigned int llvm_cbe_tmp__150;
  static  unsigned long long aesl_llvm_cbe_323_count = 0;
  unsigned long long llvm_cbe_tmp__151;
  static  unsigned long long aesl_llvm_cbe_324_count = 0;
  signed int *llvm_cbe_tmp__152;
  static  unsigned long long aesl_llvm_cbe_325_count = 0;
  static  unsigned long long aesl_llvm_cbe_326_count = 0;
  unsigned int llvm_cbe_tmp__153;
  static  unsigned long long aesl_llvm_cbe_327_count = 0;
  static  unsigned long long aesl_llvm_cbe_328_count = 0;
  static  unsigned long long aesl_llvm_cbe_329_count = 0;
  static  unsigned long long aesl_llvm_cbe_330_count = 0;
  static  unsigned long long aesl_llvm_cbe_331_count = 0;
  static  unsigned long long aesl_llvm_cbe_332_count = 0;
  static  unsigned long long aesl_llvm_cbe_333_count = 0;
  static  unsigned long long aesl_llvm_cbe_334_count = 0;
  static  unsigned long long aesl_llvm_cbe_335_count = 0;
  static  unsigned long long aesl_llvm_cbe_336_count = 0;
  static  unsigned long long aesl_llvm_cbe_337_count = 0;
  static  unsigned long long aesl_llvm_cbe_338_count = 0;
  static  unsigned long long aesl_llvm_cbe_339_count = 0;
  static  unsigned long long aesl_llvm_cbe_340_count = 0;
  static  unsigned long long aesl_llvm_cbe_341_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond22_count = 0;
  static  unsigned long long aesl_llvm_cbe_342_count = 0;
  static  unsigned long long aesl_llvm_cbe_343_count = 0;
  signed int *llvm_cbe_tmp__154;
  static  unsigned long long aesl_llvm_cbe_344_count = 0;
  unsigned int llvm_cbe_tmp__155;
  static  unsigned long long aesl_llvm_cbe_345_count = 0;
  static  unsigned long long aesl_llvm_cbe_346_count = 0;
  static  unsigned long long aesl_llvm_cbe_347_count = 0;
  static  unsigned long long aesl_llvm_cbe_348_count = 0;
  static  unsigned long long aesl_llvm_cbe_349_count = 0;
  static  unsigned long long aesl_llvm_cbe_350_count = 0;
  signed int *llvm_cbe_tmp__156;
  static  unsigned long long aesl_llvm_cbe_351_count = 0;
  unsigned int llvm_cbe_tmp__157;
  static  unsigned long long aesl_llvm_cbe_352_count = 0;
  static  unsigned long long aesl_llvm_cbe_353_count = 0;
  static  unsigned long long aesl_llvm_cbe_354_count = 0;
  static  unsigned long long aesl_llvm_cbe_355_count = 0;
  static  unsigned long long aesl_llvm_cbe_356_count = 0;
  signed int *llvm_cbe_tmp__158;
  static  unsigned long long aesl_llvm_cbe_357_count = 0;
  unsigned int llvm_cbe_tmp__159;
  static  unsigned long long aesl_llvm_cbe_358_count = 0;
  static  unsigned long long aesl_llvm_cbe_359_count = 0;
  static  unsigned long long aesl_llvm_cbe_360_count = 0;
  static  unsigned long long aesl_llvm_cbe_361_count = 0;
  static  unsigned long long aesl_llvm_cbe_362_count = 0;
  signed int *llvm_cbe_tmp__160;
  static  unsigned long long aesl_llvm_cbe_363_count = 0;
  unsigned int llvm_cbe_tmp__161;
  static  unsigned long long aesl_llvm_cbe_364_count = 0;
  static  unsigned long long aesl_llvm_cbe_365_count = 0;
  static  unsigned long long aesl_llvm_cbe_366_count = 0;
  static  unsigned long long aesl_llvm_cbe_367_count = 0;
  signed int *llvm_cbe_tmp__162;
  static  unsigned long long aesl_llvm_cbe_368_count = 0;
  unsigned int llvm_cbe_tmp__163;
  static  unsigned long long aesl_llvm_cbe_369_count = 0;
  static  unsigned long long aesl_llvm_cbe_370_count = 0;
  static  unsigned long long aesl_llvm_cbe_371_count = 0;
  static  unsigned long long aesl_llvm_cbe_372_count = 0;
  static  unsigned long long aesl_llvm_cbe_373_count = 0;
  static  unsigned long long aesl_llvm_cbe_374_count = 0;
  signed int *llvm_cbe_tmp__164;
  static  unsigned long long aesl_llvm_cbe_375_count = 0;
  unsigned int llvm_cbe_tmp__165;
  static  unsigned long long aesl_llvm_cbe_376_count = 0;
  static  unsigned long long aesl_llvm_cbe_377_count = 0;
  static  unsigned long long aesl_llvm_cbe_378_count = 0;
  static  unsigned long long aesl_llvm_cbe_379_count = 0;
  static  unsigned long long aesl_llvm_cbe_380_count = 0;
  signed int *llvm_cbe_tmp__166;
  static  unsigned long long aesl_llvm_cbe_381_count = 0;
  unsigned int llvm_cbe_tmp__167;
  static  unsigned long long aesl_llvm_cbe_382_count = 0;
  static  unsigned long long aesl_llvm_cbe_383_count = 0;
  static  unsigned long long aesl_llvm_cbe_384_count = 0;
  static  unsigned long long aesl_llvm_cbe_385_count = 0;
  static  unsigned long long aesl_llvm_cbe_386_count = 0;
  signed int *llvm_cbe_tmp__168;
  static  unsigned long long aesl_llvm_cbe_387_count = 0;
  unsigned int llvm_cbe_tmp__169;
  static  unsigned long long aesl_llvm_cbe_388_count = 0;
  static  unsigned long long aesl_llvm_cbe_389_count = 0;
  static  unsigned long long aesl_llvm_cbe_390_count = 0;
  static  unsigned long long aesl_llvm_cbe_391_count = 0;
  static  unsigned long long aesl_llvm_cbe_392_count = 0;
  static  unsigned long long aesl_llvm_cbe_393_count = 0;
  static  unsigned long long aesl_llvm_cbe_394_count = 0;
  static  unsigned long long aesl_llvm_cbe_395_count = 0;
  static  unsigned long long aesl_llvm_cbe_396_count = 0;
  static  unsigned long long aesl_llvm_cbe_397_count = 0;
  static  unsigned long long aesl_llvm_cbe_398_count = 0;
  static  unsigned long long aesl_llvm_cbe_399_count = 0;
  static  unsigned long long aesl_llvm_cbe_400_count = 0;
  static  unsigned long long aesl_llvm_cbe_401_count = 0;
  static  unsigned long long aesl_llvm_cbe_402_count = 0;
  static  unsigned long long aesl_llvm_cbe_403_count = 0;
  static  unsigned long long aesl_llvm_cbe_404_count = 0;
  static  unsigned long long aesl_llvm_cbe_405_count = 0;
  static  unsigned long long aesl_llvm_cbe_406_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge111_count = 0;
  unsigned int llvm_cbe_storemerge111;
  unsigned int llvm_cbe_storemerge111__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_407_count = 0;
  unsigned int llvm_cbe_tmp__170;
  unsigned int llvm_cbe_tmp__170__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_408_count = 0;
  unsigned int llvm_cbe_tmp__171;
  unsigned int llvm_cbe_tmp__171__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_409_count = 0;
  unsigned int llvm_cbe_tmp__172;
  unsigned int llvm_cbe_tmp__172__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_410_count = 0;
  unsigned int llvm_cbe_tmp__173;
  unsigned int llvm_cbe_tmp__173__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_411_count = 0;
  unsigned int llvm_cbe_tmp__174;
  unsigned int llvm_cbe_tmp__174__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_412_count = 0;
  unsigned int llvm_cbe_tmp__175;
  unsigned int llvm_cbe_tmp__175__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_413_count = 0;
  unsigned int llvm_cbe_tmp__176;
  unsigned int llvm_cbe_tmp__176__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_414_count = 0;
  unsigned int llvm_cbe_tmp__177;
  unsigned int llvm_cbe_tmp__177__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_415_count = 0;
  unsigned int llvm_cbe_tmp__178;
  static  unsigned long long aesl_llvm_cbe_416_count = 0;
  unsigned int llvm_cbe_tmp__179;
  static  unsigned long long aesl_llvm_cbe_417_count = 0;
  unsigned long long llvm_cbe_tmp__180;
  static  unsigned long long aesl_llvm_cbe_418_count = 0;
  signed int *llvm_cbe_tmp__181;
  static  unsigned long long aesl_llvm_cbe_419_count = 0;
  unsigned int llvm_cbe_tmp__182;
  static  unsigned long long aesl_llvm_cbe_420_count = 0;
  signed int *llvm_cbe_tmp__183;
  static  unsigned long long aesl_llvm_cbe_421_count = 0;
  unsigned int llvm_cbe_tmp__184;
  static  unsigned long long aesl_llvm_cbe_422_count = 0;
  unsigned int llvm_cbe_tmp__185;
  static  unsigned long long aesl_llvm_cbe_423_count = 0;
  unsigned int llvm_cbe_tmp__186;
  static  unsigned long long aesl_llvm_cbe_424_count = 0;
  unsigned int llvm_cbe_tmp__187;
  static  unsigned long long aesl_llvm_cbe_425_count = 0;
  unsigned int llvm_cbe_tmp__188;
  static  unsigned long long aesl_llvm_cbe_426_count = 0;
  static  unsigned long long aesl_llvm_cbe_427_count = 0;
  static  unsigned long long aesl_llvm_cbe_428_count = 0;
  static  unsigned long long aesl_llvm_cbe_429_count = 0;
  unsigned int llvm_cbe_tmp__189;
  static  unsigned long long aesl_llvm_cbe_430_count = 0;
  unsigned int llvm_cbe_tmp__190;
  static  unsigned long long aesl_llvm_cbe_431_count = 0;
  static  unsigned long long aesl_llvm_cbe_432_count = 0;
  static  unsigned long long aesl_llvm_cbe_433_count = 0;
  static  unsigned long long aesl_llvm_cbe_434_count = 0;
  static  unsigned long long aesl_llvm_cbe_435_count = 0;
  static  unsigned long long aesl_llvm_cbe_436_count = 0;
  static  unsigned long long aesl_llvm_cbe_437_count = 0;
  static  unsigned long long aesl_llvm_cbe_438_count = 0;
  unsigned int llvm_cbe_tmp__191;
  static  unsigned long long aesl_llvm_cbe_439_count = 0;
  static  unsigned long long aesl_llvm_cbe_440_count = 0;
  static  unsigned long long aesl_llvm_cbe_441_count = 0;
  static  unsigned long long aesl_llvm_cbe_442_count = 0;
  static  unsigned long long aesl_llvm_cbe_443_count = 0;
  static  unsigned long long aesl_llvm_cbe_444_count = 0;
  static  unsigned long long aesl_llvm_cbe_445_count = 0;
  static  unsigned long long aesl_llvm_cbe_446_count = 0;
  unsigned int llvm_cbe_tmp__192;
  static  unsigned long long aesl_llvm_cbe_447_count = 0;
  unsigned int llvm_cbe_tmp__193;
  static  unsigned long long aesl_llvm_cbe_448_count = 0;
  unsigned int llvm_cbe_tmp__194;
  static  unsigned long long aesl_llvm_cbe_449_count = 0;
  static  unsigned long long aesl_llvm_cbe_450_count = 0;
  static  unsigned long long aesl_llvm_cbe_451_count = 0;
  static  unsigned long long aesl_llvm_cbe_452_count = 0;
  static  unsigned long long aesl_llvm_cbe_453_count = 0;
  static  unsigned long long aesl_llvm_cbe_454_count = 0;
  static  unsigned long long aesl_llvm_cbe_455_count = 0;
  static  unsigned long long aesl_llvm_cbe_456_count = 0;
  static  unsigned long long aesl_llvm_cbe_457_count = 0;
  static  unsigned long long aesl_llvm_cbe_458_count = 0;
  static  unsigned long long aesl_llvm_cbe_459_count = 0;
  static  unsigned long long aesl_llvm_cbe_460_count = 0;
  static  unsigned long long aesl_llvm_cbe_461_count = 0;
  static  unsigned long long aesl_llvm_cbe_462_count = 0;
  static  unsigned long long aesl_llvm_cbe_463_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_464_count = 0;
  static  unsigned long long aesl_llvm_cbe_465_count = 0;
  unsigned int llvm_cbe_tmp__195;
  static  unsigned long long aesl_llvm_cbe_466_count = 0;
  static  unsigned long long aesl_llvm_cbe_467_count = 0;
  unsigned int llvm_cbe_tmp__196;
  static  unsigned long long aesl_llvm_cbe_468_count = 0;
  static  unsigned long long aesl_llvm_cbe_469_count = 0;
  unsigned int llvm_cbe_tmp__197;
  static  unsigned long long aesl_llvm_cbe_470_count = 0;
  static  unsigned long long aesl_llvm_cbe_471_count = 0;
  unsigned int llvm_cbe_tmp__198;
  static  unsigned long long aesl_llvm_cbe_472_count = 0;
  static  unsigned long long aesl_llvm_cbe_473_count = 0;
  unsigned int llvm_cbe_tmp__199;
  static  unsigned long long aesl_llvm_cbe_474_count = 0;
  static  unsigned long long aesl_llvm_cbe_475_count = 0;
  unsigned int llvm_cbe_tmp__200;
  static  unsigned long long aesl_llvm_cbe_476_count = 0;
  static  unsigned long long aesl_llvm_cbe_477_count = 0;
  unsigned int llvm_cbe_tmp__201;
  static  unsigned long long aesl_llvm_cbe_478_count = 0;
  static  unsigned long long aesl_llvm_cbe_479_count = 0;
  unsigned int llvm_cbe_tmp__202;
  static  unsigned long long aesl_llvm_cbe_480_count = 0;
  static  unsigned long long aesl_llvm_cbe_481_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @sha256_transform\n");
  llvm_cbe_storemerge14__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_storemerge1313__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__203;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__203:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge14 = phi i32 [ 0, %%0 ], [ %%30, %%1  for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_storemerge14_count);
  llvm_cbe_storemerge14 = (unsigned int )llvm_cbe_storemerge14__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge14 = 0x%X",llvm_cbe_storemerge14);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__129);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1313 = phi i32 [ 0, %%0 ], [ %%29, %%1  for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_storemerge1313_count);
  llvm_cbe_storemerge1313 = (unsigned int )llvm_cbe_storemerge1313__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1313 = 0x%X",llvm_cbe_storemerge1313);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__128);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = zext i32 %%storemerge14 to i64, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_251_count);
  llvm_cbe_tmp__101 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge14&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__101);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds i8* %%data, i64 %%2, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_252_count);
  llvm_cbe_tmp__102 = ( char *)(&llvm_cbe_data[(((signed long long )llvm_cbe_tmp__101))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__101));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i8* %%3, align 1, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_253_count);
  llvm_cbe_tmp__103 = (unsigned char )*llvm_cbe_tmp__102;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__103);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = zext i8 %%4 to i32, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_254_count);
  llvm_cbe_tmp__104 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__103&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__104);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = shl nuw i32 %%5, 24, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_255_count);
  llvm_cbe_tmp__105 = (unsigned int )llvm_cbe_tmp__104 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__105);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = or i32 %%storemerge14, 1, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_256_count);
  llvm_cbe_tmp__106 = (unsigned int )llvm_cbe_storemerge14 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__106);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = zext i32 %%7 to i64, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_257_count);
  llvm_cbe_tmp__107 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__106&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__107);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds i8* %%data, i64 %%8, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_258_count);
  llvm_cbe_tmp__108 = ( char *)(&llvm_cbe_data[(((signed long long )llvm_cbe_tmp__107))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__107));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = load i8* %%9, align 1, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_259_count);
  llvm_cbe_tmp__109 = (unsigned char )*llvm_cbe_tmp__108;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__109);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = zext i8 %%10 to i32, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_260_count);
  llvm_cbe_tmp__110 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__109&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__110);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = shl nuw nsw i32 %%11, 16, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_261_count);
  llvm_cbe_tmp__111 = (unsigned int )llvm_cbe_tmp__110 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__111);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = or i32 %%storemerge14, 2, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_262_count);
  llvm_cbe_tmp__112 = (unsigned int )llvm_cbe_storemerge14 | 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__112);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = zext i32 %%13 to i64, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_263_count);
  llvm_cbe_tmp__113 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__112&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__113);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds i8* %%data, i64 %%14, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_264_count);
  llvm_cbe_tmp__114 = ( char *)(&llvm_cbe_data[(((signed long long )llvm_cbe_tmp__113))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__113));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load i8* %%15, align 1, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_265_count);
  llvm_cbe_tmp__115 = (unsigned char )*llvm_cbe_tmp__114;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__115);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = zext i8 %%16 to i32, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_266_count);
  llvm_cbe_tmp__116 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__115&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__116);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = shl nuw nsw i32 %%17, 8, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_267_count);
  llvm_cbe_tmp__117 = (unsigned int )llvm_cbe_tmp__116 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__117);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = or i32 %%storemerge14, 3, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_268_count);
  llvm_cbe_tmp__118 = (unsigned int )llvm_cbe_storemerge14 | 3u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__118);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = zext i32 %%19 to i64, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_269_count);
  llvm_cbe_tmp__119 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__118&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__119);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds i8* %%data, i64 %%20, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_270_count);
  llvm_cbe_tmp__120 = ( char *)(&llvm_cbe_data[(((signed long long )llvm_cbe_tmp__119))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__119));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = load i8* %%21, align 1, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_271_count);
  llvm_cbe_tmp__121 = (unsigned char )*llvm_cbe_tmp__120;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__121);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = zext i8 %%22 to i32, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_272_count);
  llvm_cbe_tmp__122 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__121&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__122);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = or i32 %%12, %%6, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_273_count);
  llvm_cbe_tmp__123 = (unsigned int )llvm_cbe_tmp__111 | llvm_cbe_tmp__105;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__123);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = or i32 %%24, %%23, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_274_count);
  llvm_cbe_tmp__124 = (unsigned int )llvm_cbe_tmp__123 | llvm_cbe_tmp__122;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__124);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = or i32 %%25, %%18, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_275_count);
  llvm_cbe_tmp__125 = (unsigned int )llvm_cbe_tmp__124 | llvm_cbe_tmp__117;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__125);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = zext i32 %%storemerge1313 to i64, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_276_count);
  llvm_cbe_tmp__126 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge1313&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__126);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = getelementptr inbounds [64 x i32]* %%m, i64 0, i64 %%27, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_277_count);
  llvm_cbe_tmp__127 = (signed int *)(&llvm_cbe_m[(((signed long long )llvm_cbe_tmp__126))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__126));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__126) < 64 && "Write access out of array 'm' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%26, i32* %%28, align 4, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_278_count);
  *llvm_cbe_tmp__127 = llvm_cbe_tmp__125;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__125);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = add i32 %%storemerge1313, 1, !dbg !13 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_279_count);
  llvm_cbe_tmp__128 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1313&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__128&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = add i32 %%storemerge14, 4, !dbg !13 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_294_count);
  llvm_cbe_tmp__129 = (unsigned int )((unsigned int )(llvm_cbe_storemerge14&4294967295ull)) + ((unsigned int )(4u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__129&4294967295ull)));
  if (((llvm_cbe_tmp__128&4294967295U) == (16u&4294967295U))) {
    llvm_cbe_storemerge1212__PHI_TEMPORARY = (unsigned int )16u;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    llvm_cbe_storemerge14__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__129;   /* for PHI node */
    llvm_cbe_storemerge1313__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__128;   /* for PHI node */
    goto llvm_cbe_tmp__203;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '.lr.ph' to make GCC happy */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1212 = phi i32 [ %%54, %%.lr.ph ], [ 16, %%1  for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_storemerge1212_count);
  llvm_cbe_storemerge1212 = (unsigned int )llvm_cbe_storemerge1212__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1212 = 0x%X",llvm_cbe_storemerge1212);
printf("\n = 0x%X",llvm_cbe_tmp__153);
printf("\n = 0x%X",16u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = add i32 %%storemerge1212, -2, !dbg !13 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_302_count);
  llvm_cbe_tmp__130 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1212&4294967295ull)) + ((unsigned int )(4294967294u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__130&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = zext i32 %%31 to i64, !dbg !13 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_303_count);
  llvm_cbe_tmp__131 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__130&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__131);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = getelementptr inbounds [64 x i32]* %%m, i64 0, i64 %%32, !dbg !13 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_304_count);
  llvm_cbe_tmp__132 = (signed int *)(&llvm_cbe_m[(((signed long long )llvm_cbe_tmp__131))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__131));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__131) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = load i32* %%33, align 4, !dbg !13 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_305_count);
  llvm_cbe_tmp__133 = (unsigned int )*llvm_cbe_tmp__132;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__133);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = call i32 @SIG1(i32 %%34), !dbg !13 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_306_count);
  llvm_cbe_tmp__134 = (unsigned int )SIG1(llvm_cbe_tmp__133);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__133);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__134);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = add i32 %%storemerge1212, -7, !dbg !13 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_307_count);
  llvm_cbe_tmp__135 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1212&4294967295ull)) + ((unsigned int )(4294967289u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__135&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = zext i32 %%36 to i64, !dbg !13 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_308_count);
  llvm_cbe_tmp__136 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__135&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__136);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = getelementptr inbounds [64 x i32]* %%m, i64 0, i64 %%37, !dbg !13 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_309_count);
  llvm_cbe_tmp__137 = (signed int *)(&llvm_cbe_m[(((signed long long )llvm_cbe_tmp__136))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__136));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__136) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = load i32* %%38, align 4, !dbg !13 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_310_count);
  llvm_cbe_tmp__138 = (unsigned int )*llvm_cbe_tmp__137;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__138);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = add i32 %%storemerge1212, -15, !dbg !13 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_311_count);
  llvm_cbe_tmp__139 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1212&4294967295ull)) + ((unsigned int )(4294967281u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__139&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = zext i32 %%40 to i64, !dbg !13 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_312_count);
  llvm_cbe_tmp__140 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__139&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__140);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = getelementptr inbounds [64 x i32]* %%m, i64 0, i64 %%41, !dbg !13 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_313_count);
  llvm_cbe_tmp__141 = (signed int *)(&llvm_cbe_m[(((signed long long )llvm_cbe_tmp__140))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__140));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__140) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = load i32* %%42, align 4, !dbg !13 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_314_count);
  llvm_cbe_tmp__142 = (unsigned int )*llvm_cbe_tmp__141;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__142);
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = call i32 @SIG0(i32 %%43), !dbg !13 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_315_count);
  llvm_cbe_tmp__143 = (unsigned int )SIG0(llvm_cbe_tmp__142);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__142);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__143);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = add i32 %%storemerge1212, -16, !dbg !13 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_316_count);
  llvm_cbe_tmp__144 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1212&4294967295ull)) + ((unsigned int )(4294967280u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__144&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = zext i32 %%45 to i64, !dbg !13 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_317_count);
  llvm_cbe_tmp__145 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__144&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__145);
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = getelementptr inbounds [64 x i32]* %%m, i64 0, i64 %%46, !dbg !13 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_318_count);
  llvm_cbe_tmp__146 = (signed int *)(&llvm_cbe_m[(((signed long long )llvm_cbe_tmp__145))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__145));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__145) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = load i32* %%47, align 4, !dbg !13 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_319_count);
  llvm_cbe_tmp__147 = (unsigned int )*llvm_cbe_tmp__146;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__147);
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = add i32 %%39, %%35, !dbg !13 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_320_count);
  llvm_cbe_tmp__148 = (unsigned int )((unsigned int )(llvm_cbe_tmp__138&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__134&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__148&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = add i32 %%49, %%44, !dbg !13 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_321_count);
  llvm_cbe_tmp__149 = (unsigned int )((unsigned int )(llvm_cbe_tmp__148&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__143&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__149&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = add i32 %%50, %%48, !dbg !13 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_322_count);
  llvm_cbe_tmp__150 = (unsigned int )((unsigned int )(llvm_cbe_tmp__149&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__147&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__150&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = zext i32 %%storemerge1212 to i64, !dbg !13 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_323_count);
  llvm_cbe_tmp__151 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge1212&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__151);
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = getelementptr inbounds [64 x i32]* %%m, i64 0, i64 %%52, !dbg !13 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_324_count);
  llvm_cbe_tmp__152 = (signed int *)(&llvm_cbe_m[(((signed long long )llvm_cbe_tmp__151))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__151));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__151) < 64 && "Write access out of array 'm' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%51, i32* %%53, align 4, !dbg !13 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_325_count);
  *llvm_cbe_tmp__152 = llvm_cbe_tmp__150;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__150);
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = add i32 %%storemerge1212, 1, !dbg !14 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_326_count);
  llvm_cbe_tmp__153 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1212&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__153&4294967295ull)));
  if (((llvm_cbe_tmp__153&4294967295U) == (64u&4294967295U))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe_storemerge1212__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__153;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  }

  } while (1); /* end of syntactic loop '.lr.ph' */
llvm_cbe__2e__crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 3, i64 0, !dbg !10 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_343_count);
  llvm_cbe_tmp__154 = (signed int *)(&llvm_cbe_ctx->field3[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = load i32* %%55, align 4, !dbg !10 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_344_count);
  llvm_cbe_tmp__155 = (unsigned int )*llvm_cbe_tmp__154;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__155);
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 3, i64 1, !dbg !11 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_350_count);
  llvm_cbe_tmp__156 = (signed int *)(&llvm_cbe_ctx->field3[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = load i32* %%57, align 4, !dbg !11 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_351_count);
  llvm_cbe_tmp__157 = (unsigned int )*llvm_cbe_tmp__156;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__157);
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 3, i64 2, !dbg !11 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_356_count);
  llvm_cbe_tmp__158 = (signed int *)(&llvm_cbe_ctx->field3[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = load i32* %%59, align 4, !dbg !11 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_357_count);
  llvm_cbe_tmp__159 = (unsigned int )*llvm_cbe_tmp__158;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__159);
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 3, i64 3, !dbg !11 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_362_count);
  llvm_cbe_tmp__160 = (signed int *)(&llvm_cbe_ctx->field3[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = load i32* %%61, align 4, !dbg !11 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_363_count);
  llvm_cbe_tmp__161 = (unsigned int )*llvm_cbe_tmp__160;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__161);
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 3, i64 4, !dbg !11 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_367_count);
  llvm_cbe_tmp__162 = (signed int *)(&llvm_cbe_ctx->field3[(((signed long long )4ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = load i32* %%63, align 4, !dbg !11 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_368_count);
  llvm_cbe_tmp__163 = (unsigned int )*llvm_cbe_tmp__162;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__163);
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 3, i64 5, !dbg !11 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_374_count);
  llvm_cbe_tmp__164 = (signed int *)(&llvm_cbe_ctx->field3[(((signed long long )5ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = load i32* %%65, align 4, !dbg !11 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_375_count);
  llvm_cbe_tmp__165 = (unsigned int )*llvm_cbe_tmp__164;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__165);
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 3, i64 6, !dbg !11 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_380_count);
  llvm_cbe_tmp__166 = (signed int *)(&llvm_cbe_ctx->field3[(((signed long long )6ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = load i32* %%67, align 4, !dbg !11 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_381_count);
  llvm_cbe_tmp__167 = (unsigned int )*llvm_cbe_tmp__166;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__167);
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 3, i64 7, !dbg !11 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_386_count);
  llvm_cbe_tmp__168 = (signed int *)(&llvm_cbe_ctx->field3[(((signed long long )7ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = load i32* %%69, align 4, !dbg !11 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_387_count);
  llvm_cbe_tmp__169 = (unsigned int )*llvm_cbe_tmp__168;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__169);
  llvm_cbe_storemerge111__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__170__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__155;   /* for PHI node */
  llvm_cbe_tmp__171__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__157;   /* for PHI node */
  llvm_cbe_tmp__172__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__159;   /* for PHI node */
  llvm_cbe_tmp__173__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__161;   /* for PHI node */
  llvm_cbe_tmp__174__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__163;   /* for PHI node */
  llvm_cbe_tmp__175__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__165;   /* for PHI node */
  llvm_cbe_tmp__176__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__167;   /* for PHI node */
  llvm_cbe_tmp__177__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__169;   /* for PHI node */
  goto llvm_cbe_tmp__204;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__204:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge111 = phi i32 [ 0, %%._crit_edge ], [ %%96, %%71  for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_storemerge111_count);
  llvm_cbe_storemerge111 = (unsigned int )llvm_cbe_storemerge111__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge111 = 0x%X",llvm_cbe_storemerge111);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__194);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = phi i32 [ %%56, %%._crit_edge ], [ %%95, %%71  for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_407_count);
  llvm_cbe_tmp__170 = (unsigned int )llvm_cbe_tmp__170__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__170);
printf("\n = 0x%X",llvm_cbe_tmp__155);
printf("\n = 0x%X",llvm_cbe_tmp__193);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = phi i32 [ %%58, %%._crit_edge ], [ %%72, %%71  for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_408_count);
  llvm_cbe_tmp__171 = (unsigned int )llvm_cbe_tmp__171__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__171);
printf("\n = 0x%X",llvm_cbe_tmp__157);
printf("\n = 0x%X",llvm_cbe_tmp__170);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = phi i32 [ %%60, %%._crit_edge ], [ %%73, %%71  for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_409_count);
  llvm_cbe_tmp__172 = (unsigned int )llvm_cbe_tmp__172__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__172);
printf("\n = 0x%X",llvm_cbe_tmp__159);
printf("\n = 0x%X",llvm_cbe_tmp__171);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = phi i32 [ %%62, %%._crit_edge ], [ %%74, %%71  for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_410_count);
  llvm_cbe_tmp__173 = (unsigned int )llvm_cbe_tmp__173__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__173);
printf("\n = 0x%X",llvm_cbe_tmp__161);
printf("\n = 0x%X",llvm_cbe_tmp__172);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = phi i32 [ %%64, %%._crit_edge ], [ %%93, %%71  for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_411_count);
  llvm_cbe_tmp__174 = (unsigned int )llvm_cbe_tmp__174__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__174);
printf("\n = 0x%X",llvm_cbe_tmp__163);
printf("\n = 0x%X",llvm_cbe_tmp__191);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = phi i32 [ %%66, %%._crit_edge ], [ %%76, %%71  for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_412_count);
  llvm_cbe_tmp__175 = (unsigned int )llvm_cbe_tmp__175__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__175);
printf("\n = 0x%X",llvm_cbe_tmp__165);
printf("\n = 0x%X",llvm_cbe_tmp__174);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = phi i32 [ %%68, %%._crit_edge ], [ %%77, %%71  for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_413_count);
  llvm_cbe_tmp__176 = (unsigned int )llvm_cbe_tmp__176__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__176);
printf("\n = 0x%X",llvm_cbe_tmp__167);
printf("\n = 0x%X",llvm_cbe_tmp__175);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = phi i32 [ %%70, %%._crit_edge ], [ %%78, %%71  for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_414_count);
  llvm_cbe_tmp__177 = (unsigned int )llvm_cbe_tmp__177__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__177);
printf("\n = 0x%X",llvm_cbe_tmp__169);
printf("\n = 0x%X",llvm_cbe_tmp__176);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = call i32 @EP1(i32 %%76), !dbg !15 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_415_count);
  llvm_cbe_tmp__178 = (unsigned int )EP1(llvm_cbe_tmp__174);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__174);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__178);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = call i32 @CH(i32 %%76, i32 %%77, i32 %%78), !dbg !14 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_416_count);
  llvm_cbe_tmp__179 = (unsigned int )CH(llvm_cbe_tmp__174, llvm_cbe_tmp__175, llvm_cbe_tmp__176);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__174);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__175);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__176);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__179);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = zext i32 %%storemerge111 to i64, !dbg !14 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_417_count);
  llvm_cbe_tmp__180 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge111&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__180);
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = getelementptr inbounds [64 x i32]* @k, i64 0, i64 %%82, !dbg !14 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_418_count);
  llvm_cbe_tmp__181 = (signed int *)(&k[(((signed long long )llvm_cbe_tmp__180))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__180));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__180) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'k' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = load i32* %%83, align 4, !dbg !14 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_419_count);
  llvm_cbe_tmp__182 = (unsigned int )*llvm_cbe_tmp__181;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__182);
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = getelementptr inbounds [64 x i32]* %%m, i64 0, i64 %%82, !dbg !14 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_420_count);
  llvm_cbe_tmp__183 = (signed int *)(&llvm_cbe_m[(((signed long long )llvm_cbe_tmp__180))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__180));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__180) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = load i32* %%85, align 4, !dbg !14 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_421_count);
  llvm_cbe_tmp__184 = (unsigned int )*llvm_cbe_tmp__183;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__184);
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = add i32 %%80, %%79, !dbg !15 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_422_count);
  llvm_cbe_tmp__185 = (unsigned int )((unsigned int )(llvm_cbe_tmp__178&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__177&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__185&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = add i32 %%87, %%81, !dbg !14 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_423_count);
  llvm_cbe_tmp__186 = (unsigned int )((unsigned int )(llvm_cbe_tmp__185&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__179&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__186&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%89 = add i32 %%88, %%84, !dbg !14 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_424_count);
  llvm_cbe_tmp__187 = (unsigned int )((unsigned int )(llvm_cbe_tmp__186&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__182&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__187&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = add i32 %%89, %%86, !dbg !14 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_425_count);
  llvm_cbe_tmp__188 = (unsigned int )((unsigned int )(llvm_cbe_tmp__187&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__184&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__188&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = call i32 @EP0(i32 %%72), !dbg !14 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_429_count);
  llvm_cbe_tmp__189 = (unsigned int )EP0(llvm_cbe_tmp__170);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__170);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__189);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = call i32 @MAJ(i32 %%72, i32 %%73, i32 %%74), !dbg !14 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_430_count);
  llvm_cbe_tmp__190 = (unsigned int )MAJ(llvm_cbe_tmp__170, llvm_cbe_tmp__171, llvm_cbe_tmp__172);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__170);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__171);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__172);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__190);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%93 = add i32 %%90, %%75, !dbg !15 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_438_count);
  llvm_cbe_tmp__191 = (unsigned int )((unsigned int )(llvm_cbe_tmp__188&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__173&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__191&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%94 = add i32 %%91, %%90, !dbg !14 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_446_count);
  llvm_cbe_tmp__192 = (unsigned int )((unsigned int )(llvm_cbe_tmp__189&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__188&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__192&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%95 = add i32 %%94, %%92, !dbg !16 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_447_count);
  llvm_cbe_tmp__193 = (unsigned int )((unsigned int )(llvm_cbe_tmp__192&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__190&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__193&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%96 = add i32 %%storemerge111, 1, !dbg !14 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_448_count);
  llvm_cbe_tmp__194 = (unsigned int )((unsigned int )(llvm_cbe_storemerge111&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__194&4294967295ull)));
  if (((llvm_cbe_tmp__194&4294967295U) == (64u&4294967295U))) {
    goto llvm_cbe_tmp__205;
  } else {
    llvm_cbe_storemerge111__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__194;   /* for PHI node */
    llvm_cbe_tmp__170__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__193;   /* for PHI node */
    llvm_cbe_tmp__171__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__170;   /* for PHI node */
    llvm_cbe_tmp__172__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__171;   /* for PHI node */
    llvm_cbe_tmp__173__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__172;   /* for PHI node */
    llvm_cbe_tmp__174__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__191;   /* for PHI node */
    llvm_cbe_tmp__175__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__174;   /* for PHI node */
    llvm_cbe_tmp__176__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__175;   /* for PHI node */
    llvm_cbe_tmp__177__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__176;   /* for PHI node */
    goto llvm_cbe_tmp__204;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__205:
if (AESL_DEBUG_TRACE)
printf("\n  %%98 = add i32 %%56, %%95, !dbg !11 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_465_count);
  llvm_cbe_tmp__195 = (unsigned int )((unsigned int )(llvm_cbe_tmp__155&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__193&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__195&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%98, i32* %%55, align 4, !dbg !11 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_466_count);
  *llvm_cbe_tmp__154 = llvm_cbe_tmp__195;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__195);
if (AESL_DEBUG_TRACE)
printf("\n  %%99 = add i32 %%58, %%72, !dbg !11 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_467_count);
  llvm_cbe_tmp__196 = (unsigned int )((unsigned int )(llvm_cbe_tmp__157&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__170&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__196&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%99, i32* %%57, align 4, !dbg !11 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_468_count);
  *llvm_cbe_tmp__156 = llvm_cbe_tmp__196;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__196);
if (AESL_DEBUG_TRACE)
printf("\n  %%100 = add i32 %%60, %%73, !dbg !11 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_469_count);
  llvm_cbe_tmp__197 = (unsigned int )((unsigned int )(llvm_cbe_tmp__159&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__171&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__197&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%100, i32* %%59, align 4, !dbg !11 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_470_count);
  *llvm_cbe_tmp__158 = llvm_cbe_tmp__197;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__197);
if (AESL_DEBUG_TRACE)
printf("\n  %%101 = add i32 %%62, %%74, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_471_count);
  llvm_cbe_tmp__198 = (unsigned int )((unsigned int )(llvm_cbe_tmp__161&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__172&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__198&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%101, i32* %%61, align 4, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_472_count);
  *llvm_cbe_tmp__160 = llvm_cbe_tmp__198;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__198);
if (AESL_DEBUG_TRACE)
printf("\n  %%102 = add i32 %%64, %%93, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_473_count);
  llvm_cbe_tmp__199 = (unsigned int )((unsigned int )(llvm_cbe_tmp__163&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__191&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__199&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%102, i32* %%63, align 4, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_474_count);
  *llvm_cbe_tmp__162 = llvm_cbe_tmp__199;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__199);
if (AESL_DEBUG_TRACE)
printf("\n  %%103 = add i32 %%66, %%76, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_475_count);
  llvm_cbe_tmp__200 = (unsigned int )((unsigned int )(llvm_cbe_tmp__165&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__174&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__200&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%103, i32* %%65, align 4, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_476_count);
  *llvm_cbe_tmp__164 = llvm_cbe_tmp__200;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__200);
if (AESL_DEBUG_TRACE)
printf("\n  %%104 = add i32 %%68, %%77, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_477_count);
  llvm_cbe_tmp__201 = (unsigned int )((unsigned int )(llvm_cbe_tmp__167&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__175&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__201&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%104, i32* %%67, align 4, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_478_count);
  *llvm_cbe_tmp__166 = llvm_cbe_tmp__201;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__201);
if (AESL_DEBUG_TRACE)
printf("\n  %%105 = add i32 %%70, %%78, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_479_count);
  llvm_cbe_tmp__202 = (unsigned int )((unsigned int )(llvm_cbe_tmp__169&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__176&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__202&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%105, i32* %%69, align 4, !dbg !12 for 0x%I64xth hint within @sha256_transform  --> \n", ++aesl_llvm_cbe_480_count);
  *llvm_cbe_tmp__168 = llvm_cbe_tmp__202;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__202);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @sha256_transform}\n");
  return;
}


void sha256_init(l_struct_OC_SHA256_CTX *llvm_cbe_ctx) {
  static  unsigned long long aesl_llvm_cbe_482_count = 0;
  static  unsigned long long aesl_llvm_cbe_483_count = 0;
  static  unsigned long long aesl_llvm_cbe_484_count = 0;
  static  unsigned long long aesl_llvm_cbe_485_count = 0;
  static  unsigned long long aesl_llvm_cbe_486_count = 0;
  static  unsigned long long aesl_llvm_cbe_487_count = 0;
  static  unsigned long long aesl_llvm_cbe_488_count = 0;
  static  unsigned long long aesl_llvm_cbe_489_count = 0;
  static  unsigned long long aesl_llvm_cbe_490_count = 0;
  static  unsigned long long aesl_llvm_cbe_491_count = 0;
  static  unsigned long long aesl_llvm_cbe_492_count = 0;
  static  unsigned long long aesl_llvm_cbe_493_count = 0;
  static  unsigned long long aesl_llvm_cbe_494_count = 0;
  signed int *llvm_cbe_tmp__206;
  static  unsigned long long aesl_llvm_cbe_495_count = 0;
  static  unsigned long long aesl_llvm_cbe_496_count = 0;
  signed int *llvm_cbe_tmp__207;
  static  unsigned long long aesl_llvm_cbe_497_count = 0;
  static  unsigned long long aesl_llvm_cbe_498_count = 0;
  signed int *llvm_cbe_tmp__208;
  static  unsigned long long aesl_llvm_cbe_499_count = 0;
  static  unsigned long long aesl_llvm_cbe_500_count = 0;
  signed int *llvm_cbe_tmp__209;
  static  unsigned long long aesl_llvm_cbe_501_count = 0;
  static  unsigned long long aesl_llvm_cbe_502_count = 0;
  signed int *llvm_cbe_tmp__210;
  static  unsigned long long aesl_llvm_cbe_503_count = 0;
  static  unsigned long long aesl_llvm_cbe_504_count = 0;
  signed int *llvm_cbe_tmp__211;
  static  unsigned long long aesl_llvm_cbe_505_count = 0;
  static  unsigned long long aesl_llvm_cbe_506_count = 0;
  signed int *llvm_cbe_tmp__212;
  static  unsigned long long aesl_llvm_cbe_507_count = 0;
  static  unsigned long long aesl_llvm_cbe_508_count = 0;
  signed int *llvm_cbe_tmp__213;
  static  unsigned long long aesl_llvm_cbe_509_count = 0;
  static  unsigned long long aesl_llvm_cbe_510_count = 0;
  signed int *llvm_cbe_tmp__214;
  static  unsigned long long aesl_llvm_cbe_511_count = 0;
  static  unsigned long long aesl_llvm_cbe_512_count = 0;
  signed int *llvm_cbe_tmp__215;
  static  unsigned long long aesl_llvm_cbe_513_count = 0;
  static  unsigned long long aesl_llvm_cbe_514_count = 0;
  signed int *llvm_cbe_tmp__216;
  static  unsigned long long aesl_llvm_cbe_515_count = 0;
  static  unsigned long long aesl_llvm_cbe_516_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @sha256_init\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 1, !dbg !10 for 0x%I64xth hint within @sha256_init  --> \n", ++aesl_llvm_cbe_494_count);
  llvm_cbe_tmp__206 = (signed int *)(&llvm_cbe_ctx->field1);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%1, align 4, !dbg !10 for 0x%I64xth hint within @sha256_init  --> \n", ++aesl_llvm_cbe_495_count);
  *llvm_cbe_tmp__206 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 2, i64 0, !dbg !11 for 0x%I64xth hint within @sha256_init  --> \n", ++aesl_llvm_cbe_496_count);
  llvm_cbe_tmp__207 = (signed int *)(&llvm_cbe_ctx->field2[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%2, align 4, !dbg !11 for 0x%I64xth hint within @sha256_init  --> \n", ++aesl_llvm_cbe_497_count);
  *llvm_cbe_tmp__207 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 2, i64 1, !dbg !11 for 0x%I64xth hint within @sha256_init  --> \n", ++aesl_llvm_cbe_498_count);
  llvm_cbe_tmp__208 = (signed int *)(&llvm_cbe_ctx->field2[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%3, align 4, !dbg !11 for 0x%I64xth hint within @sha256_init  --> \n", ++aesl_llvm_cbe_499_count);
  *llvm_cbe_tmp__208 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 3, i64 0, !dbg !11 for 0x%I64xth hint within @sha256_init  --> \n", ++aesl_llvm_cbe_500_count);
  llvm_cbe_tmp__209 = (signed int *)(&llvm_cbe_ctx->field3[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 1779033703, i32* %%4, align 4, !dbg !11 for 0x%I64xth hint within @sha256_init  --> \n", ++aesl_llvm_cbe_501_count);
  *llvm_cbe_tmp__209 = 1779033703u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 1779033703u);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 3, i64 1, !dbg !11 for 0x%I64xth hint within @sha256_init  --> \n", ++aesl_llvm_cbe_502_count);
  llvm_cbe_tmp__210 = (signed int *)(&llvm_cbe_ctx->field3[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 -1150833019, i32* %%5, align 4, !dbg !11 for 0x%I64xth hint within @sha256_init  --> \n", ++aesl_llvm_cbe_503_count);
  *llvm_cbe_tmp__210 = 3144134277u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 3144134277u);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 3, i64 2, !dbg !11 for 0x%I64xth hint within @sha256_init  --> \n", ++aesl_llvm_cbe_504_count);
  llvm_cbe_tmp__211 = (signed int *)(&llvm_cbe_ctx->field3[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 1013904242, i32* %%6, align 4, !dbg !11 for 0x%I64xth hint within @sha256_init  --> \n", ++aesl_llvm_cbe_505_count);
  *llvm_cbe_tmp__211 = 1013904242u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 1013904242u);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 3, i64 3, !dbg !11 for 0x%I64xth hint within @sha256_init  --> \n", ++aesl_llvm_cbe_506_count);
  llvm_cbe_tmp__212 = (signed int *)(&llvm_cbe_ctx->field3[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 -1521486534, i32* %%7, align 4, !dbg !11 for 0x%I64xth hint within @sha256_init  --> \n", ++aesl_llvm_cbe_507_count);
  *llvm_cbe_tmp__212 = 2773480762u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 2773480762u);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 3, i64 4, !dbg !11 for 0x%I64xth hint within @sha256_init  --> \n", ++aesl_llvm_cbe_508_count);
  llvm_cbe_tmp__213 = (signed int *)(&llvm_cbe_ctx->field3[(((signed long long )4ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 1359893119, i32* %%8, align 4, !dbg !11 for 0x%I64xth hint within @sha256_init  --> \n", ++aesl_llvm_cbe_509_count);
  *llvm_cbe_tmp__213 = 1359893119u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 1359893119u);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 3, i64 5, !dbg !11 for 0x%I64xth hint within @sha256_init  --> \n", ++aesl_llvm_cbe_510_count);
  llvm_cbe_tmp__214 = (signed int *)(&llvm_cbe_ctx->field3[(((signed long long )5ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 -1694144372, i32* %%9, align 4, !dbg !11 for 0x%I64xth hint within @sha256_init  --> \n", ++aesl_llvm_cbe_511_count);
  *llvm_cbe_tmp__214 = 2600822924u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 2600822924u);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 3, i64 6, !dbg !11 for 0x%I64xth hint within @sha256_init  --> \n", ++aesl_llvm_cbe_512_count);
  llvm_cbe_tmp__215 = (signed int *)(&llvm_cbe_ctx->field3[(((signed long long )6ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 528734635, i32* %%10, align 4, !dbg !11 for 0x%I64xth hint within @sha256_init  --> \n", ++aesl_llvm_cbe_513_count);
  *llvm_cbe_tmp__215 = 528734635u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 528734635u);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 3, i64 7, !dbg !11 for 0x%I64xth hint within @sha256_init  --> \n", ++aesl_llvm_cbe_514_count);
  llvm_cbe_tmp__216 = (signed int *)(&llvm_cbe_ctx->field3[(((signed long long )7ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 1541459225, i32* %%11, align 4, !dbg !11 for 0x%I64xth hint within @sha256_init  --> \n", ++aesl_llvm_cbe_515_count);
  *llvm_cbe_tmp__216 = 1541459225u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 1541459225u);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @sha256_init}\n");
  return;
}


void sha256_update(l_struct_OC_SHA256_CTX *llvm_cbe_ctx,  char *llvm_cbe_data, signed int llvm_cbe_len) {
  static  unsigned long long aesl_llvm_cbe_517_count = 0;
  static  unsigned long long aesl_llvm_cbe_518_count = 0;
  static  unsigned long long aesl_llvm_cbe_519_count = 0;
  static  unsigned long long aesl_llvm_cbe_520_count = 0;
  static  unsigned long long aesl_llvm_cbe_521_count = 0;
  static  unsigned long long aesl_llvm_cbe_522_count = 0;
  static  unsigned long long aesl_llvm_cbe_523_count = 0;
  static  unsigned long long aesl_llvm_cbe_524_count = 0;
  static  unsigned long long aesl_llvm_cbe_525_count = 0;
  static  unsigned long long aesl_llvm_cbe_526_count = 0;
  static  unsigned long long aesl_llvm_cbe_527_count = 0;
  static  unsigned long long aesl_llvm_cbe_528_count = 0;
  static  unsigned long long aesl_llvm_cbe_529_count = 0;
  static  unsigned long long aesl_llvm_cbe_530_count = 0;
  static  unsigned long long aesl_llvm_cbe_531_count = 0;
  static  unsigned long long aesl_llvm_cbe_532_count = 0;
  static  unsigned long long aesl_llvm_cbe_533_count = 0;
  static  unsigned long long aesl_llvm_cbe_534_count = 0;
  static  unsigned long long aesl_llvm_cbe_535_count = 0;
  static  unsigned long long aesl_llvm_cbe_536_count = 0;
  static  unsigned long long aesl_llvm_cbe_537_count = 0;
  signed int *llvm_cbe_tmp__217;
  static  unsigned long long aesl_llvm_cbe_538_count = 0;
   char *llvm_cbe_tmp__218;
  static  unsigned long long aesl_llvm_cbe_539_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_540_count = 0;
  unsigned long long llvm_cbe_tmp__219;
  static  unsigned long long aesl_llvm_cbe_541_count = 0;
   char *llvm_cbe_tmp__220;
  static  unsigned long long aesl_llvm_cbe_542_count = 0;
  unsigned char llvm_cbe_tmp__221;
  static  unsigned long long aesl_llvm_cbe_543_count = 0;
  unsigned int llvm_cbe_tmp__222;
  static  unsigned long long aesl_llvm_cbe_544_count = 0;
  unsigned long long llvm_cbe_tmp__223;
  static  unsigned long long aesl_llvm_cbe_545_count = 0;
   char *llvm_cbe_tmp__224;
  static  unsigned long long aesl_llvm_cbe_546_count = 0;
  static  unsigned long long aesl_llvm_cbe_547_count = 0;
  unsigned int llvm_cbe_tmp__225;
  static  unsigned long long aesl_llvm_cbe_548_count = 0;
  unsigned int llvm_cbe_tmp__226;
  static  unsigned long long aesl_llvm_cbe_549_count = 0;
  static  unsigned long long aesl_llvm_cbe_550_count = 0;
  static  unsigned long long aesl_llvm_cbe_551_count = 0;
  static  unsigned long long aesl_llvm_cbe_552_count = 0;
  static  unsigned long long aesl_llvm_cbe_553_count = 0;
  static  unsigned long long aesl_llvm_cbe_554_count = 0;
  static  unsigned long long aesl_llvm_cbe_555_count = 0;
  unsigned int llvm_cbe_tmp__227;
  static  unsigned long long aesl_llvm_cbe_556_count = 0;
  static  unsigned long long aesl_llvm_cbe_557_count = 0;
  static  unsigned long long aesl_llvm_cbe_558_count = 0;
  static  unsigned long long aesl_llvm_cbe_559_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_560_count = 0;
  static  unsigned long long aesl_llvm_cbe_561_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @sha256_update\n");
  if (((llvm_cbe_len&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    goto llvm_cbe__2e_lr_2e_ph;
  }

llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 1, !dbg !10 for 0x%I64xth hint within @sha256_update  --> \n", ++aesl_llvm_cbe_537_count);
  llvm_cbe_tmp__217 = (signed int *)(&llvm_cbe_ctx->field1);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 0, i64 0, !dbg !11 for 0x%I64xth hint within @sha256_update  --> \n", ++aesl_llvm_cbe_538_count);
  llvm_cbe_tmp__218 = ( char *)(&llvm_cbe_ctx->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__228;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__228:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%.lr.ph ], [ %%16, %%15  for 0x%I64xth hint within @sha256_update  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__227);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = zext i32 %%storemerge1 to i64, !dbg !10 for 0x%I64xth hint within @sha256_update  --> \n", ++aesl_llvm_cbe_540_count);
  llvm_cbe_tmp__219 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge1&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__219);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds i8* %%data, i64 %%5, !dbg !10 for 0x%I64xth hint within @sha256_update  --> \n", ++aesl_llvm_cbe_541_count);
  llvm_cbe_tmp__220 = ( char *)(&llvm_cbe_data[(((signed long long )llvm_cbe_tmp__219))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__219));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = load i8* %%6, align 1, !dbg !10 for 0x%I64xth hint within @sha256_update  --> \n", ++aesl_llvm_cbe_542_count);
  llvm_cbe_tmp__221 = (unsigned char )*llvm_cbe_tmp__220;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__221);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load i32* %%2, align 4, !dbg !10 for 0x%I64xth hint within @sha256_update  --> \n", ++aesl_llvm_cbe_543_count);
  llvm_cbe_tmp__222 = (unsigned int )*llvm_cbe_tmp__217;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__222);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = zext i32 %%8 to i64, !dbg !10 for 0x%I64xth hint within @sha256_update  --> \n", ++aesl_llvm_cbe_544_count);
  llvm_cbe_tmp__223 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__222&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__223);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 0, i64 %%9, !dbg !10 for 0x%I64xth hint within @sha256_update  --> \n", ++aesl_llvm_cbe_545_count);
  llvm_cbe_tmp__224 = ( char *)(&llvm_cbe_ctx->field0[(((signed long long )llvm_cbe_tmp__223))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__223));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%7, i8* %%10, align 1, !dbg !10 for 0x%I64xth hint within @sha256_update  --> \n", ++aesl_llvm_cbe_546_count);
  *llvm_cbe_tmp__224 = llvm_cbe_tmp__221;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__221);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = load i32* %%2, align 4, !dbg !11 for 0x%I64xth hint within @sha256_update  --> \n", ++aesl_llvm_cbe_547_count);
  llvm_cbe_tmp__225 = (unsigned int )*llvm_cbe_tmp__217;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__225);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = add i32 %%11, 1, !dbg !11 for 0x%I64xth hint within @sha256_update  --> \n", ++aesl_llvm_cbe_548_count);
  llvm_cbe_tmp__226 = (unsigned int )((unsigned int )(llvm_cbe_tmp__225&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__226&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%12, i32* %%2, align 4, !dbg !11 for 0x%I64xth hint within @sha256_update  --> \n", ++aesl_llvm_cbe_549_count);
  *llvm_cbe_tmp__217 = llvm_cbe_tmp__226;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__226);
  if (((llvm_cbe_tmp__226&4294967295U) == (64u&4294967295U))) {
    goto llvm_cbe_tmp__229;
  } else {
    goto llvm_cbe_tmp__230;
  }

llvm_cbe_tmp__230:
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = add i32 %%storemerge1, 1, !dbg !12 for 0x%I64xth hint within @sha256_update  --> \n", ++aesl_llvm_cbe_555_count);
  llvm_cbe_tmp__227 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__227&4294967295ull)));
  if (((llvm_cbe_tmp__227&4294967295U) == (llvm_cbe_len&4294967295U))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__227;   /* for PHI node */
    goto llvm_cbe_tmp__228;
  }

llvm_cbe_tmp__229:
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @sha256_transform(%%struct.SHA256_CTX* %%ctx, i8* %%3), !dbg !11 for 0x%I64xth hint within @sha256_update  --> \n", ++aesl_llvm_cbe_552_count);
   /*tail*/ sha256_transform((l_struct_OC_SHA256_CTX *)llvm_cbe_ctx, ( char *)llvm_cbe_tmp__218);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%2, align 4, !dbg !11 for 0x%I64xth hint within @sha256_update  --> \n", ++aesl_llvm_cbe_553_count);
  *llvm_cbe_tmp__217 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
  goto llvm_cbe_tmp__230;

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e__crit_edge:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @sha256_update}\n");
  return;
}


void sha256_final(l_struct_OC_SHA256_CTX *llvm_cbe_ctx,  char *llvm_cbe_hash) {
  static  unsigned long long aesl_llvm_cbe_562_count = 0;
  static  unsigned long long aesl_llvm_cbe_563_count = 0;
  static  unsigned long long aesl_llvm_cbe_564_count = 0;
  static  unsigned long long aesl_llvm_cbe_565_count = 0;
  static  unsigned long long aesl_llvm_cbe_566_count = 0;
  static  unsigned long long aesl_llvm_cbe_567_count = 0;
  static  unsigned long long aesl_llvm_cbe_568_count = 0;
  static  unsigned long long aesl_llvm_cbe_569_count = 0;
  static  unsigned long long aesl_llvm_cbe_570_count = 0;
  static  unsigned long long aesl_llvm_cbe_571_count = 0;
  static  unsigned long long aesl_llvm_cbe_572_count = 0;
  static  unsigned long long aesl_llvm_cbe_573_count = 0;
  static  unsigned long long aesl_llvm_cbe_574_count = 0;
  static  unsigned long long aesl_llvm_cbe_575_count = 0;
  static  unsigned long long aesl_llvm_cbe_576_count = 0;
  static  unsigned long long aesl_llvm_cbe_577_count = 0;
  static  unsigned long long aesl_llvm_cbe_578_count = 0;
  static  unsigned long long aesl_llvm_cbe_579_count = 0;
  static  unsigned long long aesl_llvm_cbe_580_count = 0;
  static  unsigned long long aesl_llvm_cbe_581_count = 0;
  static  unsigned long long aesl_llvm_cbe_582_count = 0;
  static  unsigned long long aesl_llvm_cbe_583_count = 0;
  static  unsigned long long aesl_llvm_cbe_584_count = 0;
  static  unsigned long long aesl_llvm_cbe_585_count = 0;
  static  unsigned long long aesl_llvm_cbe_586_count = 0;
  static  unsigned long long aesl_llvm_cbe_587_count = 0;
  static  unsigned long long aesl_llvm_cbe_588_count = 0;
  static  unsigned long long aesl_llvm_cbe_589_count = 0;
  static  unsigned long long aesl_llvm_cbe_590_count = 0;
  static  unsigned long long aesl_llvm_cbe_591_count = 0;
  static  unsigned long long aesl_llvm_cbe_592_count = 0;
  static  unsigned long long aesl_llvm_cbe_593_count = 0;
  static  unsigned long long aesl_llvm_cbe_594_count = 0;
  static  unsigned long long aesl_llvm_cbe_595_count = 0;
  static  unsigned long long aesl_llvm_cbe_596_count = 0;
  static  unsigned long long aesl_llvm_cbe_597_count = 0;
  static  unsigned long long aesl_llvm_cbe_598_count = 0;
  static  unsigned long long aesl_llvm_cbe_599_count = 0;
  static  unsigned long long aesl_llvm_cbe_600_count = 0;
  static  unsigned long long aesl_llvm_cbe_601_count = 0;
  static  unsigned long long aesl_llvm_cbe_602_count = 0;
  static  unsigned long long aesl_llvm_cbe_603_count = 0;
  static  unsigned long long aesl_llvm_cbe_604_count = 0;
  static  unsigned long long aesl_llvm_cbe_605_count = 0;
  static  unsigned long long aesl_llvm_cbe_606_count = 0;
  static  unsigned long long aesl_llvm_cbe_607_count = 0;
  static  unsigned long long aesl_llvm_cbe_608_count = 0;
  static  unsigned long long aesl_llvm_cbe_609_count = 0;
  static  unsigned long long aesl_llvm_cbe_610_count = 0;
  signed int *llvm_cbe_tmp__231;
  static  unsigned long long aesl_llvm_cbe_611_count = 0;
  unsigned int llvm_cbe_tmp__232;
  static  unsigned long long aesl_llvm_cbe_612_count = 0;
  static  unsigned long long aesl_llvm_cbe_613_count = 0;
  static  unsigned long long aesl_llvm_cbe_614_count = 0;
  static  unsigned long long aesl_llvm_cbe_615_count = 0;
  static  unsigned long long aesl_llvm_cbe_616_count = 0;
  static  unsigned long long aesl_llvm_cbe_617_count = 0;
  static  unsigned long long aesl_llvm_cbe_618_count = 0;
  static  unsigned long long aesl_llvm_cbe_619_count = 0;
  static  unsigned long long aesl_llvm_cbe_620_count = 0;
  static  unsigned long long aesl_llvm_cbe_621_count = 0;
  static  unsigned long long aesl_llvm_cbe_622_count = 0;
  static  unsigned long long aesl_llvm_cbe_623_count = 0;
  static  unsigned long long aesl_llvm_cbe_624_count = 0;
  static  unsigned long long aesl_llvm_cbe_625_count = 0;
  static  unsigned long long aesl_llvm_cbe_626_count = 0;
  static  unsigned long long aesl_llvm_cbe_627_count = 0;
  static  unsigned long long aesl_llvm_cbe_628_count = 0;
  static  unsigned long long aesl_llvm_cbe_629_count = 0;
  static  unsigned long long aesl_llvm_cbe_630_count = 0;
  static  unsigned long long aesl_llvm_cbe_631_count = 0;
  static  unsigned long long aesl_llvm_cbe_632_count = 0;
  static  unsigned long long aesl_llvm_cbe_633_count = 0;
  static  unsigned long long aesl_llvm_cbe_634_count = 0;
  static  unsigned long long aesl_llvm_cbe_635_count = 0;
  static  unsigned long long aesl_llvm_cbe_636_count = 0;
  static  unsigned long long aesl_llvm_cbe_637_count = 0;
  static  unsigned long long aesl_llvm_cbe_638_count = 0;
  static  unsigned long long aesl_llvm_cbe_639_count = 0;
  static  unsigned long long aesl_llvm_cbe_640_count = 0;
  static  unsigned long long aesl_llvm_cbe_641_count = 0;
  static  unsigned long long aesl_llvm_cbe_642_count = 0;
  unsigned long long llvm_cbe_tmp__233;
  static  unsigned long long aesl_llvm_cbe_643_count = 0;
   char *llvm_cbe_tmp__234;
  static  unsigned long long aesl_llvm_cbe_644_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge139_count = 0;
  unsigned int llvm_cbe_storemerge139;
  static  unsigned long long aesl_llvm_cbe_645_count = 0;
  static  unsigned long long aesl_llvm_cbe_646_count = 0;
  static  unsigned long long aesl_llvm_cbe_647_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1310_count = 0;
  unsigned int llvm_cbe_storemerge1310;
  unsigned int llvm_cbe_storemerge1310__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_648_count = 0;
  unsigned long long llvm_cbe_tmp__235;
  static  unsigned long long aesl_llvm_cbe_649_count = 0;
   char *llvm_cbe_tmp__236;
  static  unsigned long long aesl_llvm_cbe_650_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge13_count = 0;
  unsigned int llvm_cbe_storemerge13;
  static  unsigned long long aesl_llvm_cbe_651_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond15_count = 0;
  static  unsigned long long aesl_llvm_cbe_652_count = 0;
  static  unsigned long long aesl_llvm_cbe_653_count = 0;
  unsigned long long llvm_cbe_tmp__237;
  static  unsigned long long aesl_llvm_cbe_654_count = 0;
   char *llvm_cbe_tmp__238;
  static  unsigned long long aesl_llvm_cbe_655_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge126_count = 0;
  unsigned int llvm_cbe_storemerge126;
  static  unsigned long long aesl_llvm_cbe_656_count = 0;
  static  unsigned long long aesl_llvm_cbe_657_count = 0;
  static  unsigned long long aesl_llvm_cbe_658_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge127_count = 0;
  unsigned int llvm_cbe_storemerge127;
  unsigned int llvm_cbe_storemerge127__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_659_count = 0;
  unsigned long long llvm_cbe_tmp__239;
  static  unsigned long long aesl_llvm_cbe_660_count = 0;
   char *llvm_cbe_tmp__240;
  static  unsigned long long aesl_llvm_cbe_661_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge12_count = 0;
  unsigned int llvm_cbe_storemerge12;
  static  unsigned long long aesl_llvm_cbe_662_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond14_count = 0;
  static  unsigned long long aesl_llvm_cbe_663_count = 0;
  static  unsigned long long aesl_llvm_cbe_664_count = 0;
   char *llvm_cbe_tmp__241;
  static  unsigned long long aesl_llvm_cbe_665_count = 0;
  static  unsigned long long aesl_llvm_cbe_666_count = 0;
  static  unsigned long long aesl_llvm_cbe_667_count = 0;
  static  unsigned long long aesl_llvm_cbe_668_count = 0;
  static  unsigned long long aesl_llvm_cbe_669_count = 0;
  static  unsigned long long aesl_llvm_cbe_670_count = 0;
  static  unsigned long long aesl_llvm_cbe_671_count = 0;
  static  unsigned long long aesl_llvm_cbe_672_count = 0;
  static  unsigned long long aesl_llvm_cbe_673_count = 0;
  static  unsigned long long aesl_llvm_cbe_674_count = 0;
  static  unsigned long long aesl_llvm_cbe_675_count = 0;
  static  unsigned long long aesl_llvm_cbe_676_count = 0;
  static  unsigned long long aesl_llvm_cbe_677_count = 0;
  static  unsigned long long aesl_llvm_cbe_678_count = 0;
  static  unsigned long long aesl_llvm_cbe_679_count = 0;
  static  unsigned long long aesl_llvm_cbe_680_count = 0;
  static  unsigned long long aesl_llvm_cbe_681_count = 0;
  static  unsigned long long aesl_llvm_cbe_682_count = 0;
  static  unsigned long long aesl_llvm_cbe_683_count = 0;
  static  unsigned long long aesl_llvm_cbe_684_count = 0;
  static  unsigned long long aesl_llvm_cbe_685_count = 0;
  static  unsigned long long aesl_llvm_cbe_686_count = 0;
  static  unsigned long long aesl_llvm_cbe_687_count = 0;
  static  unsigned long long aesl_llvm_cbe_688_count = 0;
  static  unsigned long long aesl_llvm_cbe_689_count = 0;
  static  unsigned long long aesl_llvm_cbe_690_count = 0;
  static  unsigned long long aesl_llvm_cbe_691_count = 0;
  static  unsigned long long aesl_llvm_cbe_692_count = 0;
  static  unsigned long long aesl_llvm_cbe_693_count = 0;
  static  unsigned long long aesl_llvm_cbe_694_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge5_count = 0;
  unsigned int llvm_cbe_storemerge5;
  unsigned int llvm_cbe_storemerge5__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_695_count = 0;
  unsigned long long llvm_cbe_tmp__242;
  static  unsigned long long aesl_llvm_cbe_696_count = 0;
   char *llvm_cbe_tmp__243;
  static  unsigned long long aesl_llvm_cbe_697_count = 0;
  static  unsigned long long aesl_llvm_cbe_698_count = 0;
  unsigned int llvm_cbe_tmp__244;
  static  unsigned long long aesl_llvm_cbe_699_count = 0;
  static  unsigned long long aesl_llvm_cbe_700_count = 0;
  static  unsigned long long aesl_llvm_cbe_701_count = 0;
  static  unsigned long long aesl_llvm_cbe_702_count = 0;
  static  unsigned long long aesl_llvm_cbe_703_count = 0;
  static  unsigned long long aesl_llvm_cbe_704_count = 0;
  static  unsigned long long aesl_llvm_cbe_705_count = 0;
  static  unsigned long long aesl_llvm_cbe_706_count = 0;
  static  unsigned long long aesl_llvm_cbe_707_count = 0;
  static  unsigned long long aesl_llvm_cbe_708_count = 0;
  static  unsigned long long aesl_llvm_cbe_709_count = 0;
  static  unsigned long long aesl_llvm_cbe_710_count = 0;
  static  unsigned long long aesl_llvm_cbe_711_count = 0;
  static  unsigned long long aesl_llvm_cbe_712_count = 0;
  static  unsigned long long aesl_llvm_cbe_713_count = 0;
  static  unsigned long long aesl_llvm_cbe_714_count = 0;
  static  unsigned long long aesl_llvm_cbe_715_count = 0;
  static  unsigned long long aesl_llvm_cbe_716_count = 0;
  static  unsigned long long aesl_llvm_cbe_717_count = 0;
  static  unsigned long long aesl_llvm_cbe_718_count = 0;
  static  unsigned long long aesl_llvm_cbe_719_count = 0;
  static  unsigned long long aesl_llvm_cbe_720_count = 0;
  static  unsigned long long aesl_llvm_cbe_721_count = 0;
  static  unsigned long long aesl_llvm_cbe_722_count = 0;
  static  unsigned long long aesl_llvm_cbe_723_count = 0;
  static  unsigned long long aesl_llvm_cbe_724_count = 0;
  static  unsigned long long aesl_llvm_cbe_725_count = 0;
  static  unsigned long long aesl_llvm_cbe_726_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond13_count = 0;
  static  unsigned long long aesl_llvm_cbe_727_count = 0;
  static  unsigned long long aesl_llvm_cbe_728_count = 0;
  static  unsigned long long aesl_llvm_cbe_729_count = 0;
  signed int *llvm_cbe_tmp__245;
  static  unsigned long long aesl_llvm_cbe_730_count = 0;
  unsigned int llvm_cbe_tmp__246;
  static  unsigned long long aesl_llvm_cbe_731_count = 0;
  signed int *llvm_cbe_tmp__247;
  static  unsigned long long aesl_llvm_cbe_732_count = 0;
  unsigned char llvm_cbe_tmp__248;
  static  unsigned long long aesl_llvm_cbe_733_count = 0;
   char *llvm_cbe_tmp__249;
  static  unsigned long long aesl_llvm_cbe_734_count = 0;
  static  unsigned long long aesl_llvm_cbe_735_count = 0;
  unsigned int llvm_cbe_tmp__250;
  static  unsigned long long aesl_llvm_cbe_736_count = 0;
  unsigned char llvm_cbe_tmp__251;
  static  unsigned long long aesl_llvm_cbe_737_count = 0;
   char *llvm_cbe_tmp__252;
  static  unsigned long long aesl_llvm_cbe_738_count = 0;
  static  unsigned long long aesl_llvm_cbe_739_count = 0;
  unsigned int llvm_cbe_tmp__253;
  static  unsigned long long aesl_llvm_cbe_740_count = 0;
  unsigned char llvm_cbe_tmp__254;
  static  unsigned long long aesl_llvm_cbe_741_count = 0;
   char *llvm_cbe_tmp__255;
  static  unsigned long long aesl_llvm_cbe_742_count = 0;
  static  unsigned long long aesl_llvm_cbe_743_count = 0;
  unsigned int llvm_cbe_tmp__256;
  static  unsigned long long aesl_llvm_cbe_744_count = 0;
  unsigned char llvm_cbe_tmp__257;
  static  unsigned long long aesl_llvm_cbe_745_count = 0;
   char *llvm_cbe_tmp__258;
  static  unsigned long long aesl_llvm_cbe_746_count = 0;
  static  unsigned long long aesl_llvm_cbe_747_count = 0;
  unsigned int llvm_cbe_tmp__259;
  static  unsigned long long aesl_llvm_cbe_748_count = 0;
  unsigned char llvm_cbe_tmp__260;
  static  unsigned long long aesl_llvm_cbe_749_count = 0;
   char *llvm_cbe_tmp__261;
  static  unsigned long long aesl_llvm_cbe_750_count = 0;
  static  unsigned long long aesl_llvm_cbe_751_count = 0;
  unsigned int llvm_cbe_tmp__262;
  static  unsigned long long aesl_llvm_cbe_752_count = 0;
  unsigned char llvm_cbe_tmp__263;
  static  unsigned long long aesl_llvm_cbe_753_count = 0;
   char *llvm_cbe_tmp__264;
  static  unsigned long long aesl_llvm_cbe_754_count = 0;
  static  unsigned long long aesl_llvm_cbe_755_count = 0;
  unsigned int llvm_cbe_tmp__265;
  static  unsigned long long aesl_llvm_cbe_756_count = 0;
  unsigned char llvm_cbe_tmp__266;
  static  unsigned long long aesl_llvm_cbe_757_count = 0;
   char *llvm_cbe_tmp__267;
  static  unsigned long long aesl_llvm_cbe_758_count = 0;
  static  unsigned long long aesl_llvm_cbe_759_count = 0;
  unsigned int llvm_cbe_tmp__268;
  static  unsigned long long aesl_llvm_cbe_760_count = 0;
  unsigned char llvm_cbe_tmp__269;
  static  unsigned long long aesl_llvm_cbe_761_count = 0;
   char *llvm_cbe_tmp__270;
  static  unsigned long long aesl_llvm_cbe_762_count = 0;
  static  unsigned long long aesl_llvm_cbe_763_count = 0;
   char *llvm_cbe_tmp__271;
  static  unsigned long long aesl_llvm_cbe_764_count = 0;
  static  unsigned long long aesl_llvm_cbe_765_count = 0;
  static  unsigned long long aesl_llvm_cbe_766_count = 0;
  static  unsigned long long aesl_llvm_cbe_767_count = 0;
  static  unsigned long long aesl_llvm_cbe_768_count = 0;
  static  unsigned long long aesl_llvm_cbe_769_count = 0;
  static  unsigned long long aesl_llvm_cbe_770_count = 0;
  static  unsigned long long aesl_llvm_cbe_771_count = 0;
  static  unsigned long long aesl_llvm_cbe_772_count = 0;
  static  unsigned long long aesl_llvm_cbe_773_count = 0;
  static  unsigned long long aesl_llvm_cbe_774_count = 0;
  static  unsigned long long aesl_llvm_cbe_775_count = 0;
  static  unsigned long long aesl_llvm_cbe_776_count = 0;
  static  unsigned long long aesl_llvm_cbe_777_count = 0;
  static  unsigned long long aesl_llvm_cbe_778_count = 0;
  static  unsigned long long aesl_llvm_cbe_779_count = 0;
  static  unsigned long long aesl_llvm_cbe_780_count = 0;
  static  unsigned long long aesl_llvm_cbe_781_count = 0;
  static  unsigned long long aesl_llvm_cbe_782_count = 0;
  static  unsigned long long aesl_llvm_cbe_783_count = 0;
  static  unsigned long long aesl_llvm_cbe_784_count = 0;
  static  unsigned long long aesl_llvm_cbe_785_count = 0;
  static  unsigned long long aesl_llvm_cbe_786_count = 0;
  static  unsigned long long aesl_llvm_cbe_787_count = 0;
  static  unsigned long long aesl_llvm_cbe_788_count = 0;
  static  unsigned long long aesl_llvm_cbe_789_count = 0;
  static  unsigned long long aesl_llvm_cbe_790_count = 0;
  static  unsigned long long aesl_llvm_cbe_791_count = 0;
  static  unsigned long long aesl_llvm_cbe_792_count = 0;
  static  unsigned long long aesl_llvm_cbe_793_count = 0;
  signed int *llvm_cbe_tmp__272;
  static  unsigned long long aesl_llvm_cbe_794_count = 0;
  signed int *llvm_cbe_tmp__273;
  static  unsigned long long aesl_llvm_cbe_795_count = 0;
  signed int *llvm_cbe_tmp__274;
  static  unsigned long long aesl_llvm_cbe_796_count = 0;
  signed int *llvm_cbe_tmp__275;
  static  unsigned long long aesl_llvm_cbe_797_count = 0;
  signed int *llvm_cbe_tmp__276;
  static  unsigned long long aesl_llvm_cbe_798_count = 0;
  signed int *llvm_cbe_tmp__277;
  static  unsigned long long aesl_llvm_cbe_799_count = 0;
  signed int *llvm_cbe_tmp__278;
  static  unsigned long long aesl_llvm_cbe_800_count = 0;
  signed int *llvm_cbe_tmp__279;
  static  unsigned long long aesl_llvm_cbe_801_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge14_count = 0;
  unsigned int llvm_cbe_storemerge14;
  unsigned int llvm_cbe_storemerge14__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_802_count = 0;
  unsigned int llvm_cbe_tmp__280;
  static  unsigned long long aesl_llvm_cbe_803_count = 0;
  unsigned int llvm_cbe_tmp__281;
  static  unsigned long long aesl_llvm_cbe_804_count = 0;
  unsigned int llvm_cbe_tmp__282;
  static  unsigned long long aesl_llvm_cbe_805_count = 0;
  unsigned int llvm_cbe_tmp__283;
  static  unsigned long long aesl_llvm_cbe_806_count = 0;
  unsigned char llvm_cbe_tmp__284;
  static  unsigned long long aesl_llvm_cbe_807_count = 0;
  unsigned long long llvm_cbe_tmp__285;
  static  unsigned long long aesl_llvm_cbe_808_count = 0;
   char *llvm_cbe_tmp__286;
  static  unsigned long long aesl_llvm_cbe_809_count = 0;
  static  unsigned long long aesl_llvm_cbe_810_count = 0;
  unsigned int llvm_cbe_tmp__287;
  static  unsigned long long aesl_llvm_cbe_811_count = 0;
  unsigned int llvm_cbe_tmp__288;
  static  unsigned long long aesl_llvm_cbe_812_count = 0;
  unsigned char llvm_cbe_tmp__289;
  static  unsigned long long aesl_llvm_cbe_813_count = 0;
  unsigned int llvm_cbe_tmp__290;
  static  unsigned long long aesl_llvm_cbe_814_count = 0;
  unsigned long long llvm_cbe_tmp__291;
  static  unsigned long long aesl_llvm_cbe_815_count = 0;
   char *llvm_cbe_tmp__292;
  static  unsigned long long aesl_llvm_cbe_816_count = 0;
  static  unsigned long long aesl_llvm_cbe_817_count = 0;
  unsigned int llvm_cbe_tmp__293;
  static  unsigned long long aesl_llvm_cbe_818_count = 0;
  unsigned int llvm_cbe_tmp__294;
  static  unsigned long long aesl_llvm_cbe_819_count = 0;
  unsigned char llvm_cbe_tmp__295;
  static  unsigned long long aesl_llvm_cbe_820_count = 0;
  unsigned int llvm_cbe_tmp__296;
  static  unsigned long long aesl_llvm_cbe_821_count = 0;
  unsigned long long llvm_cbe_tmp__297;
  static  unsigned long long aesl_llvm_cbe_822_count = 0;
   char *llvm_cbe_tmp__298;
  static  unsigned long long aesl_llvm_cbe_823_count = 0;
  static  unsigned long long aesl_llvm_cbe_824_count = 0;
  unsigned int llvm_cbe_tmp__299;
  static  unsigned long long aesl_llvm_cbe_825_count = 0;
  unsigned int llvm_cbe_tmp__300;
  static  unsigned long long aesl_llvm_cbe_826_count = 0;
  unsigned char llvm_cbe_tmp__301;
  static  unsigned long long aesl_llvm_cbe_827_count = 0;
  unsigned int llvm_cbe_tmp__302;
  static  unsigned long long aesl_llvm_cbe_828_count = 0;
  unsigned long long llvm_cbe_tmp__303;
  static  unsigned long long aesl_llvm_cbe_829_count = 0;
   char *llvm_cbe_tmp__304;
  static  unsigned long long aesl_llvm_cbe_830_count = 0;
  static  unsigned long long aesl_llvm_cbe_831_count = 0;
  unsigned int llvm_cbe_tmp__305;
  static  unsigned long long aesl_llvm_cbe_832_count = 0;
  unsigned int llvm_cbe_tmp__306;
  static  unsigned long long aesl_llvm_cbe_833_count = 0;
  unsigned char llvm_cbe_tmp__307;
  static  unsigned long long aesl_llvm_cbe_834_count = 0;
  unsigned int llvm_cbe_tmp__308;
  static  unsigned long long aesl_llvm_cbe_835_count = 0;
  unsigned long long llvm_cbe_tmp__309;
  static  unsigned long long aesl_llvm_cbe_836_count = 0;
   char *llvm_cbe_tmp__310;
  static  unsigned long long aesl_llvm_cbe_837_count = 0;
  static  unsigned long long aesl_llvm_cbe_838_count = 0;
  unsigned int llvm_cbe_tmp__311;
  static  unsigned long long aesl_llvm_cbe_839_count = 0;
  unsigned int llvm_cbe_tmp__312;
  static  unsigned long long aesl_llvm_cbe_840_count = 0;
  unsigned char llvm_cbe_tmp__313;
  static  unsigned long long aesl_llvm_cbe_841_count = 0;
  unsigned int llvm_cbe_tmp__314;
  static  unsigned long long aesl_llvm_cbe_842_count = 0;
  unsigned long long llvm_cbe_tmp__315;
  static  unsigned long long aesl_llvm_cbe_843_count = 0;
   char *llvm_cbe_tmp__316;
  static  unsigned long long aesl_llvm_cbe_844_count = 0;
  static  unsigned long long aesl_llvm_cbe_845_count = 0;
  unsigned int llvm_cbe_tmp__317;
  static  unsigned long long aesl_llvm_cbe_846_count = 0;
  unsigned int llvm_cbe_tmp__318;
  static  unsigned long long aesl_llvm_cbe_847_count = 0;
  unsigned char llvm_cbe_tmp__319;
  static  unsigned long long aesl_llvm_cbe_848_count = 0;
  unsigned int llvm_cbe_tmp__320;
  static  unsigned long long aesl_llvm_cbe_849_count = 0;
  unsigned long long llvm_cbe_tmp__321;
  static  unsigned long long aesl_llvm_cbe_850_count = 0;
   char *llvm_cbe_tmp__322;
  static  unsigned long long aesl_llvm_cbe_851_count = 0;
  static  unsigned long long aesl_llvm_cbe_852_count = 0;
  unsigned int llvm_cbe_tmp__323;
  static  unsigned long long aesl_llvm_cbe_853_count = 0;
  unsigned int llvm_cbe_tmp__324;
  static  unsigned long long aesl_llvm_cbe_854_count = 0;
  unsigned char llvm_cbe_tmp__325;
  static  unsigned long long aesl_llvm_cbe_855_count = 0;
  unsigned int llvm_cbe_tmp__326;
  static  unsigned long long aesl_llvm_cbe_856_count = 0;
  unsigned long long llvm_cbe_tmp__327;
  static  unsigned long long aesl_llvm_cbe_857_count = 0;
   char *llvm_cbe_tmp__328;
  static  unsigned long long aesl_llvm_cbe_858_count = 0;
  static  unsigned long long aesl_llvm_cbe_859_count = 0;
  unsigned int llvm_cbe_tmp__329;
  static  unsigned long long aesl_llvm_cbe_860_count = 0;
  static  unsigned long long aesl_llvm_cbe_861_count = 0;
  static  unsigned long long aesl_llvm_cbe_862_count = 0;
  static  unsigned long long aesl_llvm_cbe_863_count = 0;
  static  unsigned long long aesl_llvm_cbe_864_count = 0;
  static  unsigned long long aesl_llvm_cbe_865_count = 0;
  static  unsigned long long aesl_llvm_cbe_866_count = 0;
  static  unsigned long long aesl_llvm_cbe_867_count = 0;
  static  unsigned long long aesl_llvm_cbe_868_count = 0;
  static  unsigned long long aesl_llvm_cbe_869_count = 0;
  static  unsigned long long aesl_llvm_cbe_870_count = 0;
  static  unsigned long long aesl_llvm_cbe_871_count = 0;
  static  unsigned long long aesl_llvm_cbe_872_count = 0;
  static  unsigned long long aesl_llvm_cbe_873_count = 0;
  static  unsigned long long aesl_llvm_cbe_874_count = 0;
  static  unsigned long long aesl_llvm_cbe_875_count = 0;
  static  unsigned long long aesl_llvm_cbe_876_count = 0;
  static  unsigned long long aesl_llvm_cbe_877_count = 0;
  static  unsigned long long aesl_llvm_cbe_878_count = 0;
  static  unsigned long long aesl_llvm_cbe_879_count = 0;
  static  unsigned long long aesl_llvm_cbe_880_count = 0;
  static  unsigned long long aesl_llvm_cbe_881_count = 0;
  static  unsigned long long aesl_llvm_cbe_882_count = 0;
  static  unsigned long long aesl_llvm_cbe_883_count = 0;
  static  unsigned long long aesl_llvm_cbe_884_count = 0;
  static  unsigned long long aesl_llvm_cbe_885_count = 0;
  static  unsigned long long aesl_llvm_cbe_886_count = 0;
  static  unsigned long long aesl_llvm_cbe_887_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_888_count = 0;
  static  unsigned long long aesl_llvm_cbe_889_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @sha256_final\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 1, !dbg !10 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_610_count);
  llvm_cbe_tmp__231 = (signed int *)(&llvm_cbe_ctx->field1);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = load i32* %%1, align 4, !dbg !10 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_611_count);
  llvm_cbe_tmp__232 = (unsigned int )*llvm_cbe_tmp__231;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__232);
  if ((((unsigned int )llvm_cbe_tmp__232&4294967295U) < ((unsigned int )56u&4294967295U))) {
    goto llvm_cbe_tmp__330;
  } else {
    goto llvm_cbe_tmp__331;
  }

llvm_cbe_tmp__330:
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = zext i32 %%2 to i64, !dbg !11 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_642_count);
  llvm_cbe_tmp__233 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__232&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__233);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 0, i64 %%5, !dbg !11 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_643_count);
  llvm_cbe_tmp__234 = ( char *)(&llvm_cbe_ctx->field0[(((signed long long )llvm_cbe_tmp__233))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__233));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 -128, i8* %%6, align 1, !dbg !11 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_644_count);
  *llvm_cbe_tmp__234 = ((unsigned char )128u);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )128u));
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge139 = add i32 %%2, 1, !dbg !15 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_storemerge139_count);
  llvm_cbe_storemerge139 = (unsigned int )((unsigned int )(llvm_cbe_tmp__232&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\nstoremerge139 = 0x%X\n", ((unsigned int )(llvm_cbe_storemerge139&4294967295ull)));
  if ((((unsigned int )llvm_cbe_storemerge139&4294967295U) < ((unsigned int )56u&4294967295U))) {
    llvm_cbe_storemerge1310__PHI_TEMPORARY = (unsigned int )llvm_cbe_storemerge139;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph12;
  } else {
    goto llvm_cbe__2e_loopexit8;
  }

  do {     /* Syntactic loop '.lr.ph12' to make GCC happy */
llvm_cbe__2e_lr_2e_ph12:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1310 = phi i32 [ %%storemerge13, %%.lr.ph12 ], [ %%storemerge139, %%4  for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_storemerge1310_count);
  llvm_cbe_storemerge1310 = (unsigned int )llvm_cbe_storemerge1310__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1310 = 0x%X",llvm_cbe_storemerge1310);
printf("\nstoremerge13 = 0x%X",llvm_cbe_storemerge13);
printf("\nstoremerge139 = 0x%X",llvm_cbe_storemerge139);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = zext i32 %%storemerge1310 to i64, !dbg !11 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_648_count);
  llvm_cbe_tmp__235 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge1310&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__235);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 0, i64 %%8, !dbg !11 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_649_count);
  llvm_cbe_tmp__236 = ( char *)(&llvm_cbe_ctx->field0[(((signed long long )llvm_cbe_tmp__235))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__235));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 0, i8* %%9, align 1, !dbg !11 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_650_count);
  *llvm_cbe_tmp__236 = ((unsigned char )0);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )0));
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge13 = add i32 %%storemerge1310, 1, !dbg !15 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_storemerge13_count);
  llvm_cbe_storemerge13 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1310&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\nstoremerge13 = 0x%X\n", ((unsigned int )(llvm_cbe_storemerge13&4294967295ull)));
  if (((llvm_cbe_storemerge13&4294967295U) == (56u&4294967295U))) {
    goto llvm_cbe__2e_loopexit8;
  } else {
    llvm_cbe_storemerge1310__PHI_TEMPORARY = (unsigned int )llvm_cbe_storemerge13;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph12;
  }

  } while (1); /* end of syntactic loop '.lr.ph12' */
llvm_cbe_tmp__331:
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = zext i32 %%2 to i64, !dbg !11 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_653_count);
  llvm_cbe_tmp__237 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__232&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__237);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 0, i64 %%11, !dbg !11 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_654_count);
  llvm_cbe_tmp__238 = ( char *)(&llvm_cbe_ctx->field0[(((signed long long )llvm_cbe_tmp__237))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__237));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 -128, i8* %%12, align 1, !dbg !11 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_655_count);
  *llvm_cbe_tmp__238 = ((unsigned char )128u);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )128u));
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge126 = add i32 %%2, 1, !dbg !15 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_storemerge126_count);
  llvm_cbe_storemerge126 = (unsigned int )((unsigned int )(llvm_cbe_tmp__232&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\nstoremerge126 = 0x%X\n", ((unsigned int )(llvm_cbe_storemerge126&4294967295ull)));
  if ((((unsigned int )llvm_cbe_storemerge126&4294967295U) < ((unsigned int )64u&4294967295U))) {
    llvm_cbe_storemerge127__PHI_TEMPORARY = (unsigned int )llvm_cbe_storemerge126;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    goto llvm_cbe__2e__crit_edge;
  }

  do {     /* Syntactic loop '.lr.ph' to make GCC happy */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge127 = phi i32 [ %%storemerge12, %%.lr.ph ], [ %%storemerge126, %%10  for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_storemerge127_count);
  llvm_cbe_storemerge127 = (unsigned int )llvm_cbe_storemerge127__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge127 = 0x%X",llvm_cbe_storemerge127);
printf("\nstoremerge12 = 0x%X",llvm_cbe_storemerge12);
printf("\nstoremerge126 = 0x%X",llvm_cbe_storemerge126);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = zext i32 %%storemerge127 to i64, !dbg !11 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_659_count);
  llvm_cbe_tmp__239 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge127&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__239);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 0, i64 %%14, !dbg !11 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_660_count);
  llvm_cbe_tmp__240 = ( char *)(&llvm_cbe_ctx->field0[(((signed long long )llvm_cbe_tmp__239))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__239));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 0, i8* %%15, align 1, !dbg !11 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_661_count);
  *llvm_cbe_tmp__240 = ((unsigned char )0);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )0));
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge12 = add i32 %%storemerge127, 1, !dbg !15 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_storemerge12_count);
  llvm_cbe_storemerge12 = (unsigned int )((unsigned int )(llvm_cbe_storemerge127&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\nstoremerge12 = 0x%X\n", ((unsigned int )(llvm_cbe_storemerge12&4294967295ull)));
  if (((llvm_cbe_storemerge12&4294967295U) == (64u&4294967295U))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe_storemerge127__PHI_TEMPORARY = (unsigned int )llvm_cbe_storemerge12;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  }

  } while (1); /* end of syntactic loop '.lr.ph' */
llvm_cbe__2e__crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 0, i64 0, !dbg !11 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_664_count);
  llvm_cbe_tmp__241 = ( char *)(&llvm_cbe_ctx->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @sha256_transform(%%struct.SHA256_CTX* %%ctx, i8* %%16), !dbg !11 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_665_count);
   /*tail*/ sha256_transform((l_struct_OC_SHA256_CTX *)llvm_cbe_ctx, ( char *)llvm_cbe_tmp__241);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge5__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__332;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__332:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge5 = phi i32 [ 0, %%._crit_edge ], [ %%20, %%17  for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_storemerge5_count);
  llvm_cbe_storemerge5 = (unsigned int )llvm_cbe_storemerge5__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge5 = 0x%X",llvm_cbe_storemerge5);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__244);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = zext i32 %%storemerge5 to i64, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_695_count);
  llvm_cbe_tmp__242 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge5&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__242);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 0, i64 %%18, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_696_count);
  llvm_cbe_tmp__243 = ( char *)(&llvm_cbe_ctx->field0[(((signed long long )llvm_cbe_tmp__242))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__242));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 0, i8* %%19, align 1, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_697_count);
  *llvm_cbe_tmp__243 = ((unsigned char )0);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )0));
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = add i32 %%storemerge5, 1, !dbg !14 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_698_count);
  llvm_cbe_tmp__244 = (unsigned int )((unsigned int )(llvm_cbe_storemerge5&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__244&4294967295ull)));
  if (((llvm_cbe_tmp__244&4294967295U) == (56u&4294967295U))) {
    goto llvm_cbe__2e_loopexit;
  } else {
    llvm_cbe_storemerge5__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__244;   /* for PHI node */
    goto llvm_cbe_tmp__332;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_loopexit8:
  goto llvm_cbe__2e_loopexit;

llvm_cbe__2e_loopexit:
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 2, i64 0, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_729_count);
  llvm_cbe_tmp__245 = (signed int *)(&llvm_cbe_ctx->field2[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = load i32* %%21, align 4, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_730_count);
  llvm_cbe_tmp__246 = (unsigned int )*llvm_cbe_tmp__245;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__246);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 2, i64 1, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_731_count);
  llvm_cbe_tmp__247 = (signed int *)(&llvm_cbe_ctx->field2[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = trunc i32 %%22 to i8, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_732_count);
  llvm_cbe_tmp__248 = (unsigned char )((unsigned char )llvm_cbe_tmp__246&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__248);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 0, i64 63, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_733_count);
  llvm_cbe_tmp__249 = ( char *)(&llvm_cbe_ctx->field0[(((signed long long )63ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%24, i8* %%25, align 1, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_734_count);
  *llvm_cbe_tmp__249 = llvm_cbe_tmp__248;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__248);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = lshr i32 %%22, 8, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_735_count);
  llvm_cbe_tmp__250 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__246&4294967295ull)) >> ((unsigned int )(8u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__250&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = trunc i32 %%26 to i8, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_736_count);
  llvm_cbe_tmp__251 = (unsigned char )((unsigned char )llvm_cbe_tmp__250&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__251);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 0, i64 62, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_737_count);
  llvm_cbe_tmp__252 = ( char *)(&llvm_cbe_ctx->field0[(((signed long long )62ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%27, i8* %%28, align 1, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_738_count);
  *llvm_cbe_tmp__252 = llvm_cbe_tmp__251;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__251);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = lshr i32 %%22, 16, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_739_count);
  llvm_cbe_tmp__253 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__246&4294967295ull)) >> ((unsigned int )(16u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__253&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = trunc i32 %%29 to i8, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_740_count);
  llvm_cbe_tmp__254 = (unsigned char )((unsigned char )llvm_cbe_tmp__253&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__254);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 0, i64 61, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_741_count);
  llvm_cbe_tmp__255 = ( char *)(&llvm_cbe_ctx->field0[(((signed long long )61ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%30, i8* %%31, align 1, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_742_count);
  *llvm_cbe_tmp__255 = llvm_cbe_tmp__254;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__254);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = lshr i32 %%22, 24, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_743_count);
  llvm_cbe_tmp__256 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__246&4294967295ull)) >> ((unsigned int )(24u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__256&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = trunc i32 %%32 to i8, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_744_count);
  llvm_cbe_tmp__257 = (unsigned char )((unsigned char )llvm_cbe_tmp__256&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__257);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 0, i64 60, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_745_count);
  llvm_cbe_tmp__258 = ( char *)(&llvm_cbe_ctx->field0[(((signed long long )60ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%33, i8* %%34, align 1, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_746_count);
  *llvm_cbe_tmp__258 = llvm_cbe_tmp__257;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__257);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = load i32* %%23, align 4, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_747_count);
  llvm_cbe_tmp__259 = (unsigned int )*llvm_cbe_tmp__247;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__259);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = trunc i32 %%35 to i8, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_748_count);
  llvm_cbe_tmp__260 = (unsigned char )((unsigned char )llvm_cbe_tmp__259&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__260);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 0, i64 59, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_749_count);
  llvm_cbe_tmp__261 = ( char *)(&llvm_cbe_ctx->field0[(((signed long long )59ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%36, i8* %%37, align 1, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_750_count);
  *llvm_cbe_tmp__261 = llvm_cbe_tmp__260;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__260);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = lshr i32 %%35, 8, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_751_count);
  llvm_cbe_tmp__262 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__259&4294967295ull)) >> ((unsigned int )(8u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__262&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = trunc i32 %%38 to i8, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_752_count);
  llvm_cbe_tmp__263 = (unsigned char )((unsigned char )llvm_cbe_tmp__262&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__263);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 0, i64 58, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_753_count);
  llvm_cbe_tmp__264 = ( char *)(&llvm_cbe_ctx->field0[(((signed long long )58ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%39, i8* %%40, align 1, !dbg !12 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_754_count);
  *llvm_cbe_tmp__264 = llvm_cbe_tmp__263;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__263);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = lshr i32 %%35, 16, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_755_count);
  llvm_cbe_tmp__265 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__259&4294967295ull)) >> ((unsigned int )(16u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__265&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = trunc i32 %%41 to i8, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_756_count);
  llvm_cbe_tmp__266 = (unsigned char )((unsigned char )llvm_cbe_tmp__265&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__266);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 0, i64 57, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_757_count);
  llvm_cbe_tmp__267 = ( char *)(&llvm_cbe_ctx->field0[(((signed long long )57ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%42, i8* %%43, align 1, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_758_count);
  *llvm_cbe_tmp__267 = llvm_cbe_tmp__266;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__266);
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = lshr i32 %%35, 24, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_759_count);
  llvm_cbe_tmp__268 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__259&4294967295ull)) >> ((unsigned int )(24u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__268&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = trunc i32 %%44 to i8, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_760_count);
  llvm_cbe_tmp__269 = (unsigned char )((unsigned char )llvm_cbe_tmp__268&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__269);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 0, i64 56, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_761_count);
  llvm_cbe_tmp__270 = ( char *)(&llvm_cbe_ctx->field0[(((signed long long )56ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%45, i8* %%46, align 1, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_762_count);
  *llvm_cbe_tmp__270 = llvm_cbe_tmp__269;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__269);
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 0, i64 0, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_763_count);
  llvm_cbe_tmp__271 = ( char *)(&llvm_cbe_ctx->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @sha256_transform(%%struct.SHA256_CTX* %%ctx, i8* %%47), !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_764_count);
   /*tail*/ sha256_transform((l_struct_OC_SHA256_CTX *)llvm_cbe_ctx, ( char *)llvm_cbe_tmp__271);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 3, i64 0, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_793_count);
  llvm_cbe_tmp__272 = (signed int *)(&llvm_cbe_ctx->field3[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 3, i64 1, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_794_count);
  llvm_cbe_tmp__273 = (signed int *)(&llvm_cbe_ctx->field3[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 3, i64 2, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_795_count);
  llvm_cbe_tmp__274 = (signed int *)(&llvm_cbe_ctx->field3[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 3, i64 3, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_796_count);
  llvm_cbe_tmp__275 = (signed int *)(&llvm_cbe_ctx->field3[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 3, i64 4, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_797_count);
  llvm_cbe_tmp__276 = (signed int *)(&llvm_cbe_ctx->field3[(((signed long long )4ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 3, i64 5, !dbg !14 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_798_count);
  llvm_cbe_tmp__277 = (signed int *)(&llvm_cbe_ctx->field3[(((signed long long )5ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 3, i64 6, !dbg !14 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_799_count);
  llvm_cbe_tmp__278 = (signed int *)(&llvm_cbe_ctx->field3[(((signed long long )6ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = getelementptr inbounds %%struct.SHA256_CTX* %%ctx, i64 0, i32 3, i64 7, !dbg !14 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_800_count);
  llvm_cbe_tmp__279 = (signed int *)(&llvm_cbe_ctx->field3[(((signed long long )7ull))]);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge14__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__333;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__333:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge14 = phi i32 [ 0, %%.loopexit ], [ %%106, %%56  for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_storemerge14_count);
  llvm_cbe_storemerge14 = (unsigned int )llvm_cbe_storemerge14__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge14 = 0x%X",llvm_cbe_storemerge14);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__329);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = load i32* %%48, align 4, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_802_count);
  llvm_cbe_tmp__280 = (unsigned int )*llvm_cbe_tmp__272;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__280);
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = shl i32 %%storemerge14, 3, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_803_count);
  llvm_cbe_tmp__281 = (unsigned int )llvm_cbe_storemerge14 << 3u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__281);
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = sub i32 24, %%58, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_804_count);
  llvm_cbe_tmp__282 = (unsigned int )((unsigned int )(24u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__281&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__282&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = lshr i32 %%57, %%59, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_805_count);
  llvm_cbe_tmp__283 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__280&4294967295ull)) >> ((unsigned int )(llvm_cbe_tmp__282&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__283&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = trunc i32 %%60 to i8, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_806_count);
  llvm_cbe_tmp__284 = (unsigned char )((unsigned char )llvm_cbe_tmp__283&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__284);
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = zext i32 %%storemerge14 to i64, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_807_count);
  llvm_cbe_tmp__285 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge14&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__285);
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = getelementptr inbounds i8* %%hash, i64 %%62, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_808_count);
  llvm_cbe_tmp__286 = ( char *)(&llvm_cbe_hash[(((signed long long )llvm_cbe_tmp__285))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__285));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%61, i8* %%63, align 1, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_809_count);
  *llvm_cbe_tmp__286 = llvm_cbe_tmp__284;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__284);
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = load i32* %%49, align 4, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_810_count);
  llvm_cbe_tmp__287 = (unsigned int )*llvm_cbe_tmp__273;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__287);
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = lshr i32 %%64, %%59, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_811_count);
  llvm_cbe_tmp__288 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__287&4294967295ull)) >> ((unsigned int )(llvm_cbe_tmp__282&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__288&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = trunc i32 %%65 to i8, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_812_count);
  llvm_cbe_tmp__289 = (unsigned char )((unsigned char )llvm_cbe_tmp__288&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__289);
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = add i32 %%storemerge14, 4, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_813_count);
  llvm_cbe_tmp__290 = (unsigned int )((unsigned int )(llvm_cbe_storemerge14&4294967295ull)) + ((unsigned int )(4u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__290&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = zext i32 %%67 to i64, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_814_count);
  llvm_cbe_tmp__291 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__290&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__291);
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = getelementptr inbounds i8* %%hash, i64 %%68, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_815_count);
  llvm_cbe_tmp__292 = ( char *)(&llvm_cbe_hash[(((signed long long )llvm_cbe_tmp__291))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__291));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%66, i8* %%69, align 1, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_816_count);
  *llvm_cbe_tmp__292 = llvm_cbe_tmp__289;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__289);
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = load i32* %%50, align 4, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_817_count);
  llvm_cbe_tmp__293 = (unsigned int )*llvm_cbe_tmp__274;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__293);
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = lshr i32 %%70, %%59, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_818_count);
  llvm_cbe_tmp__294 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__293&4294967295ull)) >> ((unsigned int )(llvm_cbe_tmp__282&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__294&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = trunc i32 %%71 to i8, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_819_count);
  llvm_cbe_tmp__295 = (unsigned char )((unsigned char )llvm_cbe_tmp__294&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__295);
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = add i32 %%storemerge14, 8, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_820_count);
  llvm_cbe_tmp__296 = (unsigned int )((unsigned int )(llvm_cbe_storemerge14&4294967295ull)) + ((unsigned int )(8u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__296&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = zext i32 %%73 to i64, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_821_count);
  llvm_cbe_tmp__297 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__296&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__297);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = getelementptr inbounds i8* %%hash, i64 %%74, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_822_count);
  llvm_cbe_tmp__298 = ( char *)(&llvm_cbe_hash[(((signed long long )llvm_cbe_tmp__297))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__297));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%72, i8* %%75, align 1, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_823_count);
  *llvm_cbe_tmp__298 = llvm_cbe_tmp__295;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__295);
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = load i32* %%51, align 4, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_824_count);
  llvm_cbe_tmp__299 = (unsigned int )*llvm_cbe_tmp__275;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__299);
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = lshr i32 %%76, %%59, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_825_count);
  llvm_cbe_tmp__300 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__299&4294967295ull)) >> ((unsigned int )(llvm_cbe_tmp__282&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__300&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = trunc i32 %%77 to i8, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_826_count);
  llvm_cbe_tmp__301 = (unsigned char )((unsigned char )llvm_cbe_tmp__300&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__301);
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = add i32 %%storemerge14, 12, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_827_count);
  llvm_cbe_tmp__302 = (unsigned int )((unsigned int )(llvm_cbe_storemerge14&4294967295ull)) + ((unsigned int )(12u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__302&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = zext i32 %%79 to i64, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_828_count);
  llvm_cbe_tmp__303 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__302&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__303);
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = getelementptr inbounds i8* %%hash, i64 %%80, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_829_count);
  llvm_cbe_tmp__304 = ( char *)(&llvm_cbe_hash[(((signed long long )llvm_cbe_tmp__303))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__303));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%78, i8* %%81, align 1, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_830_count);
  *llvm_cbe_tmp__304 = llvm_cbe_tmp__301;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__301);
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = load i32* %%52, align 4, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_831_count);
  llvm_cbe_tmp__305 = (unsigned int )*llvm_cbe_tmp__276;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__305);
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = lshr i32 %%82, %%59, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_832_count);
  llvm_cbe_tmp__306 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__305&4294967295ull)) >> ((unsigned int )(llvm_cbe_tmp__282&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__306&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = trunc i32 %%83 to i8, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_833_count);
  llvm_cbe_tmp__307 = (unsigned char )((unsigned char )llvm_cbe_tmp__306&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__307);
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = add i32 %%storemerge14, 16, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_834_count);
  llvm_cbe_tmp__308 = (unsigned int )((unsigned int )(llvm_cbe_storemerge14&4294967295ull)) + ((unsigned int )(16u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__308&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = zext i32 %%85 to i64, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_835_count);
  llvm_cbe_tmp__309 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__308&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__309);
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = getelementptr inbounds i8* %%hash, i64 %%86, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_836_count);
  llvm_cbe_tmp__310 = ( char *)(&llvm_cbe_hash[(((signed long long )llvm_cbe_tmp__309))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__309));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%84, i8* %%87, align 1, !dbg !13 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_837_count);
  *llvm_cbe_tmp__310 = llvm_cbe_tmp__307;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__307);
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = load i32* %%53, align 4, !dbg !14 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_838_count);
  llvm_cbe_tmp__311 = (unsigned int )*llvm_cbe_tmp__277;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__311);
if (AESL_DEBUG_TRACE)
printf("\n  %%89 = lshr i32 %%88, %%59, !dbg !14 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_839_count);
  llvm_cbe_tmp__312 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__311&4294967295ull)) >> ((unsigned int )(llvm_cbe_tmp__282&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__312&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = trunc i32 %%89 to i8, !dbg !14 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_840_count);
  llvm_cbe_tmp__313 = (unsigned char )((unsigned char )llvm_cbe_tmp__312&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__313);
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = add i32 %%storemerge14, 20, !dbg !14 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_841_count);
  llvm_cbe_tmp__314 = (unsigned int )((unsigned int )(llvm_cbe_storemerge14&4294967295ull)) + ((unsigned int )(20u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__314&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = zext i32 %%91 to i64, !dbg !14 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_842_count);
  llvm_cbe_tmp__315 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__314&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__315);
if (AESL_DEBUG_TRACE)
printf("\n  %%93 = getelementptr inbounds i8* %%hash, i64 %%92, !dbg !14 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_843_count);
  llvm_cbe_tmp__316 = ( char *)(&llvm_cbe_hash[(((signed long long )llvm_cbe_tmp__315))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__315));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%90, i8* %%93, align 1, !dbg !14 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_844_count);
  *llvm_cbe_tmp__316 = llvm_cbe_tmp__313;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__313);
if (AESL_DEBUG_TRACE)
printf("\n  %%94 = load i32* %%54, align 4, !dbg !14 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_845_count);
  llvm_cbe_tmp__317 = (unsigned int )*llvm_cbe_tmp__278;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__317);
if (AESL_DEBUG_TRACE)
printf("\n  %%95 = lshr i32 %%94, %%59, !dbg !14 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_846_count);
  llvm_cbe_tmp__318 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__317&4294967295ull)) >> ((unsigned int )(llvm_cbe_tmp__282&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__318&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%96 = trunc i32 %%95 to i8, !dbg !14 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_847_count);
  llvm_cbe_tmp__319 = (unsigned char )((unsigned char )llvm_cbe_tmp__318&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__319);
if (AESL_DEBUG_TRACE)
printf("\n  %%97 = add i32 %%storemerge14, 24, !dbg !14 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_848_count);
  llvm_cbe_tmp__320 = (unsigned int )((unsigned int )(llvm_cbe_storemerge14&4294967295ull)) + ((unsigned int )(24u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__320&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%98 = zext i32 %%97 to i64, !dbg !14 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_849_count);
  llvm_cbe_tmp__321 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__320&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__321);
if (AESL_DEBUG_TRACE)
printf("\n  %%99 = getelementptr inbounds i8* %%hash, i64 %%98, !dbg !14 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_850_count);
  llvm_cbe_tmp__322 = ( char *)(&llvm_cbe_hash[(((signed long long )llvm_cbe_tmp__321))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__321));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%96, i8* %%99, align 1, !dbg !14 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_851_count);
  *llvm_cbe_tmp__322 = llvm_cbe_tmp__319;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__319);
if (AESL_DEBUG_TRACE)
printf("\n  %%100 = load i32* %%55, align 4, !dbg !14 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_852_count);
  llvm_cbe_tmp__323 = (unsigned int )*llvm_cbe_tmp__279;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__323);
if (AESL_DEBUG_TRACE)
printf("\n  %%101 = lshr i32 %%100, %%59, !dbg !14 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_853_count);
  llvm_cbe_tmp__324 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__323&4294967295ull)) >> ((unsigned int )(llvm_cbe_tmp__282&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__324&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%102 = trunc i32 %%101 to i8, !dbg !14 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_854_count);
  llvm_cbe_tmp__325 = (unsigned char )((unsigned char )llvm_cbe_tmp__324&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__325);
if (AESL_DEBUG_TRACE)
printf("\n  %%103 = add i32 %%storemerge14, 28, !dbg !14 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_855_count);
  llvm_cbe_tmp__326 = (unsigned int )((unsigned int )(llvm_cbe_storemerge14&4294967295ull)) + ((unsigned int )(28u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__326&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%104 = zext i32 %%103 to i64, !dbg !14 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_856_count);
  llvm_cbe_tmp__327 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__326&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__327);
if (AESL_DEBUG_TRACE)
printf("\n  %%105 = getelementptr inbounds i8* %%hash, i64 %%104, !dbg !14 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_857_count);
  llvm_cbe_tmp__328 = ( char *)(&llvm_cbe_hash[(((signed long long )llvm_cbe_tmp__327))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__327));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%102, i8* %%105, align 1, !dbg !14 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_858_count);
  *llvm_cbe_tmp__328 = llvm_cbe_tmp__325;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__325);
if (AESL_DEBUG_TRACE)
printf("\n  %%106 = add i32 %%storemerge14, 1, !dbg !15 for 0x%I64xth hint within @sha256_final  --> \n", ++aesl_llvm_cbe_859_count);
  llvm_cbe_tmp__329 = (unsigned int )((unsigned int )(llvm_cbe_storemerge14&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__329&4294967295ull)));
  if (((llvm_cbe_tmp__329&4294967295U) == (4u&4294967295U))) {
    goto llvm_cbe_tmp__334;
  } else {
    llvm_cbe_storemerge14__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__329;   /* for PHI node */
    goto llvm_cbe_tmp__333;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__334:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @sha256_final}\n");
  return;
}

