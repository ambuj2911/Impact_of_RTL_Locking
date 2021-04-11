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
extern signed int bases[5];
extern signed int sizes[5];

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
signed int main(signed int llvm_cbe_argc,  char **llvm_cbe_argv);
void sha256_init_tb(l_struct_OC_SHA256_CTX *);
void sha256_update_tb(l_struct_OC_SHA256_CTX *,  char *, signed int );
void sha256_final_tb(l_struct_OC_SHA256_CTX *,  char *);
void sha256(signed int , signed int ,  char *, signed int , signed int ,  char *);


/* Global Variable Definitions and Initialization */
signed int sizes[5] = { 0u, 1u, 64u, 127u, 256u };
signed int bases[5] = { 0u, 1u, 0u, 3u, 0u };
static  char aesl_internal__OC_str[26] = "%d br_key value in main \n";
static  char aesl_internal__OC_str1[26] = "%d dp_key value in main \n";
static  char aesl_internal__OC_str2[15] = "Data to hash: ";
static  char aesl_internal_str1[7] = "FAILED";
static  char aesl_internal__OC_str5[30] = "Test %d, base: %d length %d:\n";
static  char aesl_internal__OC_str6[12] = "SHA256_SW: ";
static  char aesl_internal__OC_str7[6] = "%02X ";
static  char aesl_internal__OC_str9[12] = "SHA256_HW: ";
static  char aesl_internal_str[2] = "\n";
static  char aesl_internal_str2[7] = "PASSED";


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

signed int main(signed int llvm_cbe_argc,  char **llvm_cbe_argv) {
  static  unsigned long long aesl_llvm_cbe_data_count = 0;
   char llvm_cbe_data[256];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_digest_count = 0;
   char llvm_cbe_digest[32];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_sw_hash_count = 0;
   char llvm_cbe_sw_hash[32];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_ctx_count = 0;
  l_struct_OC_SHA256_CTX llvm_cbe_ctx;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
   char **llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
   char *llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  unsigned int llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
   char **llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
   char *llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  unsigned int llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  unsigned int llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  unsigned int llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  unsigned int llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge12_count = 0;
  unsigned int llvm_cbe_storemerge12;
  unsigned int llvm_cbe_storemerge12__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  unsigned int llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  unsigned char llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  unsigned char llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  unsigned long long llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
   char *llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  unsigned int llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_putchar_count = 0;
  unsigned int llvm_cbe_putchar;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  unsigned int llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond15_count = 0;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_puts_count = 0;
  unsigned int llvm_cbe_puts;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
   char *llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
   char *llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
   char *llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge111_count = 0;
  unsigned int llvm_cbe_storemerge111;
  unsigned int llvm_cbe_storemerge111__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  unsigned int llvm_cbe_tmp__20;
  unsigned int llvm_cbe_tmp__20__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  unsigned long long llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  signed int *llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  unsigned int llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  signed int *llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  unsigned int llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  unsigned int llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  unsigned long long llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
   char *llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  unsigned int llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge210_count = 0;
  unsigned int llvm_cbe_storemerge210;
  unsigned int llvm_cbe_storemerge210__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  unsigned long long llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
   char *llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  unsigned char llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  unsigned int llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  unsigned int llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  unsigned int llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond13_count = 0;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  static  unsigned long long aesl_llvm_cbe_putchar4_count = 0;
  unsigned int llvm_cbe_putchar4;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  unsigned int llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge39_count = 0;
  unsigned int llvm_cbe_storemerge39;
  unsigned int llvm_cbe_storemerge39__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  unsigned long long llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
   char *llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  unsigned char llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  unsigned int llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  unsigned int llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  unsigned int llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  static  unsigned long long aesl_llvm_cbe_putchar5_count = 0;
  unsigned int llvm_cbe_putchar5;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  unsigned int llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  static  unsigned long long aesl_llvm_cbe_puts6_count = 0;
  unsigned int llvm_cbe_puts6;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  unsigned int llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_puts7_count = 0;
  unsigned int llvm_cbe_puts7;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  unsigned int llvm_cbe_tmp__45;
  unsigned int llvm_cbe_tmp__45__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_putchar8_count = 0;
  unsigned int llvm_cbe_putchar8;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  unsigned int llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond14_count = 0;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;

  CODE_FOR_MAIN();
const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @main\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds i8** %%argv, i64 1, !dbg !4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_5_count);
  llvm_cbe_tmp__1 = ( char **)(&llvm_cbe_argv[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = load i8** %%1, align 8, !dbg !4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_6_count);
  llvm_cbe_tmp__2 = ( char *)*llvm_cbe_tmp__1;
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = call i32 @atoi(i8* %%2) nounwind, !dbg !4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_7_count);
  llvm_cbe_tmp__3 = (unsigned int )atoi(( char *)llvm_cbe_tmp__2);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__3);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds i8** %%argv, i64 2, !dbg !4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_11_count);
  llvm_cbe_tmp__4 = ( char **)(&llvm_cbe_argv[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i8** %%4, align 8, !dbg !4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_12_count);
  llvm_cbe_tmp__5 = ( char *)*llvm_cbe_tmp__4;
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = call i32 @atoi(i8* %%5) nounwind, !dbg !4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_13_count);
  llvm_cbe_tmp__6 = (unsigned int )atoi(( char *)llvm_cbe_tmp__5);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__6);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([26 x i8]* @aesl_internal_.str, i64 0, i64 0), i32 %%3) nounwind, !dbg !4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_17_count);
  printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 26
#endif
])), llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__3);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__7);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([26 x i8]* @aesl_internal_.str1, i64 0, i64 0), i32 %%6) nounwind, !dbg !4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_18_count);
  printf(( char *)((&aesl_internal__OC_str1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 26
#endif
])), llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__6);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__8);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([15 x i8]* @aesl_internal_.str2, i64 0, i64 0)) nounwind, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_26_count);
  printf(( char *)((&aesl_internal__OC_str2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 15
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__9);
}
  llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__47;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__47:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge12 = phi i32 [ 0, %%0 ], [ %%17, %%10  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_storemerge12_count);
  llvm_cbe_storemerge12 = (unsigned int )llvm_cbe_storemerge12__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge12 = 0x%X",llvm_cbe_storemerge12);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__16);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = urem i32 %%storemerge12, 26, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_40_count);
  llvm_cbe_tmp__10 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_storemerge12&4294967295ull)) % ((unsigned int )(26u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__10&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = trunc i32 %%11 to i8, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_41_count);
  llvm_cbe_tmp__11 = (unsigned char )((unsigned char )llvm_cbe_tmp__10&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__11);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = add i8 %%12, 65, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_42_count);
  llvm_cbe_tmp__12 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_tmp__11&255ull)) + ((unsigned char )(((unsigned char )65)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__12&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = zext i32 %%storemerge12 to i64, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_43_count);
  llvm_cbe_tmp__13 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge12&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__13);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds [256 x i8]* %%data, i64 0, i64 %%14, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_44_count);
  llvm_cbe_tmp__14 = ( char *)(&llvm_cbe_data[(((signed long long )llvm_cbe_tmp__13))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__13));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__13) < 256 && "Write access out of array 'data' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%13, i8* %%15, align 1, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_45_count);
  *llvm_cbe_tmp__14 = llvm_cbe_tmp__12;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__12);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = zext i8 %%13 to i32, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_46_count);
  llvm_cbe_tmp__15 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__12&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__15);
if (AESL_DEBUG_TRACE)
printf("\n  %%putchar = call i32 @putchar(i32 %%16) nounwind, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_putchar_count);
  putchar(llvm_cbe_tmp__15);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__15);
printf("\nReturn putchar = 0x%X",llvm_cbe_putchar);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = add i32 %%storemerge12, 1, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_47_count);
  llvm_cbe_tmp__16 = (unsigned int )((unsigned int )(llvm_cbe_storemerge12&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__16&4294967295ull)));
  if (((llvm_cbe_tmp__16&4294967295U) == (256u&4294967295U))) {
    goto llvm_cbe_tmp__48;
  } else {
    llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__16;   /* for PHI node */
    goto llvm_cbe_tmp__47;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__48:
if (AESL_DEBUG_TRACE)
printf("\n  %%puts = call i32 @puts(i8* getelementptr inbounds ([2 x i8]* @aesl_internal_str, i64 0, i64 0)), !dbg !10 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts_count);
  puts(( char *)((&aesl_internal_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts = 0x%X",llvm_cbe_puts);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds [32 x i8]* %%sw_hash, i64 0, i64 0, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_67_count);
  llvm_cbe_tmp__17 = ( char *)(&llvm_cbe_sw_hash[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds [256 x i8]* %%data, i64 0, i64 0, !dbg !4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_68_count);
  llvm_cbe_tmp__18 = ( char *)(&llvm_cbe_data[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds [32 x i8]* %%digest, i64 0, i64 0, !dbg !4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_69_count);
  llvm_cbe_tmp__19 = ( char *)(&llvm_cbe_digest[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge111__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__20__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__49;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__49:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge111 = phi i32 [ 0, %%18 ], [ %%57, %%55  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_storemerge111_count);
  llvm_cbe_storemerge111 = (unsigned int )llvm_cbe_storemerge111__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge111 = 0x%X",llvm_cbe_storemerge111);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__46);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = phi i32 [ 0, %%18 ], [ %%56, %%55  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_71_count);
  llvm_cbe_tmp__20 = (unsigned int )llvm_cbe_tmp__20__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__20);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__45);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = zext i32 %%storemerge111 to i64, !dbg !10 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_72_count);
  llvm_cbe_tmp__21 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge111&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__21);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = getelementptr inbounds [5 x i32]* @bases, i64 0, i64 %%24, !dbg !10 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_73_count);
  llvm_cbe_tmp__22 = (signed int *)(&bases[(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__21) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'bases' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = load i32* %%25, align 4, !dbg !10 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_74_count);
  llvm_cbe_tmp__23 = (unsigned int )*llvm_cbe_tmp__22;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__23);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds [5 x i32]* @sizes, i64 0, i64 %%24, !dbg !10 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_79_count);
  llvm_cbe_tmp__24 = (signed int *)(&sizes[(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__21) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'sizes' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = load i32* %%27, align 4, !dbg !10 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_80_count);
  llvm_cbe_tmp__25 = (unsigned int )*llvm_cbe_tmp__24;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([30 x i8]* @aesl_internal_.str5, i64 0, i64 0), i32 %%storemerge111, i32 %%26, i32 %%28) nounwind, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_85_count);
  printf(( char *)((&aesl_internal__OC_str5[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 30
#endif
])), llvm_cbe_storemerge111, llvm_cbe_tmp__23, llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE) {
printf("\nArgument storemerge111 = 0x%X",llvm_cbe_storemerge111);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__23);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__25);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__26);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @sha256_init_tb(%%struct.SHA256_CTX* %%ctx) nounwind, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_86_count);
  sha256_init_tb((l_struct_OC_SHA256_CTX *)(&llvm_cbe_ctx));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = zext i32 %%26 to i64, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_87_count);
  llvm_cbe_tmp__27 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__23&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__27);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = getelementptr inbounds [256 x i8]* %%data, i64 0, i64 %%30, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_88_count);
  llvm_cbe_tmp__28 = ( char *)(&llvm_cbe_data[(((signed long long )llvm_cbe_tmp__27))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__27));
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @sha256_update_tb(%%struct.SHA256_CTX* %%ctx, i8* %%31, i32 %%28) nounwind, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_89_count);
  sha256_update_tb((l_struct_OC_SHA256_CTX *)(&llvm_cbe_ctx), ( char *)llvm_cbe_tmp__28, llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__25);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @sha256_final_tb(%%struct.SHA256_CTX* %%ctx, i8* %%19) nounwind, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_90_count);
  sha256_final_tb((l_struct_OC_SHA256_CTX *)(&llvm_cbe_ctx), ( char *)llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([12 x i8]* @aesl_internal_.str6, i64 0, i64 0)) nounwind, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_91_count);
  printf(( char *)((&aesl_internal__OC_str6[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 12
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__29);
}
  llvm_cbe_storemerge210__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__50;

llvm_cbe_tmp__51:
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = phi i32 [ %%23, %%54 ], [ %%53, %%52  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_167_count);
  llvm_cbe_tmp__45 = (unsigned int )llvm_cbe_tmp__45__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__45);
printf("\n = 0x%X",llvm_cbe_tmp__20);
printf("\n = 0x%X",llvm_cbe_tmp__44);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%putchar8 = call i32 @putchar(i32 10) nounwind, !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_putchar8_count);
  putchar(10u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",10u);
printf("\nReturn putchar8 = 0x%X",llvm_cbe_putchar8);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = add i32 %%storemerge111, 1, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_168_count);
  llvm_cbe_tmp__46 = (unsigned int )((unsigned int )(llvm_cbe_storemerge111&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__46&4294967295ull)));
  if (((llvm_cbe_tmp__46&4294967295U) == (5u&4294967295U))) {
    goto llvm_cbe_tmp__52;
  } else {
    llvm_cbe_storemerge111__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__46;   /* for PHI node */
    llvm_cbe_tmp__20__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__45;   /* for PHI node */
    goto llvm_cbe_tmp__49;
  }

llvm_cbe_tmp__53:
if (AESL_DEBUG_TRACE)
printf("\n  %%puts6 = call i32 @puts(i8* getelementptr inbounds ([7 x i8]* @aesl_internal_str1, i64 0, i64 0)), !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts6_count);
  puts(( char *)((&aesl_internal_str1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 7
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts6 = 0x%X",llvm_cbe_puts6);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = add i32 %%23, 1, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_161_count);
  llvm_cbe_tmp__44 = (unsigned int )((unsigned int )(llvm_cbe_tmp__20&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__44&4294967295ull)));
  llvm_cbe_tmp__45__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__44;   /* for PHI node */
  goto llvm_cbe_tmp__51;

llvm_cbe_tmp__54:
if (AESL_DEBUG_TRACE)
printf("\n  %%putchar5 = call i32 @putchar(i32 10) nounwind, !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_putchar5_count);
  putchar(10u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",10u);
printf("\nReturn putchar5 = 0x%X",llvm_cbe_putchar5);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = call i32 @strncmp(i8* %%21, i8* %%19, i64 32) nounwind, !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_158_count);
  llvm_cbe_tmp__43 = (unsigned int )strncmp(( char *)llvm_cbe_tmp__19, ( char *)llvm_cbe_tmp__17, 32ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",32ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__43);
}
  if (((llvm_cbe_tmp__43&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__55;
  } else {
    goto llvm_cbe_tmp__53;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__56:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge39 = phi i32 [ 0, %%40 ], [ %%48, %%42  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_storemerge39_count);
  llvm_cbe_storemerge39 = (unsigned int )llvm_cbe_storemerge39__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge39 = 0x%X",llvm_cbe_storemerge39);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__42);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = zext i32 %%storemerge39 to i64, !dbg !10 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_139_count);
  llvm_cbe_tmp__37 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge39&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__37);
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = getelementptr inbounds [32 x i8]* %%digest, i64 0, i64 %%43, !dbg !10 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_140_count);
  llvm_cbe_tmp__38 = ( char *)(&llvm_cbe_digest[(((signed long long )llvm_cbe_tmp__37))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__37));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__37) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'digest' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = load i8* %%44, align 1, !dbg !10 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_141_count);
  llvm_cbe_tmp__39 = (unsigned char )*llvm_cbe_tmp__38;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__39);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = zext i8 %%45 to i32, !dbg !10 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_142_count);
  llvm_cbe_tmp__40 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__39&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__40);
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([6 x i8]* @aesl_internal_.str7, i64 0, i64 0), i32 %%46) nounwind, !dbg !10 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_143_count);
  printf(( char *)((&aesl_internal__OC_str7[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
])), llvm_cbe_tmp__40);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__40);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__41);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = add i32 %%storemerge39, 1, !dbg !10 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_144_count);
  llvm_cbe_tmp__42 = (unsigned int )((unsigned int )(llvm_cbe_storemerge39&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__42&4294967295ull)));
  if (((llvm_cbe_tmp__42&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe_tmp__54;
  } else {
    llvm_cbe_storemerge39__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__42;   /* for PHI node */
    goto llvm_cbe_tmp__56;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__57:
if (AESL_DEBUG_TRACE)
printf("\n  %%putchar4 = call i32 @putchar(i32 10) nounwind, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_putchar4_count);
  putchar(10u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",10u);
printf("\nReturn putchar4 = 0x%X",llvm_cbe_putchar4);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @sha256(i32 %%3, i32 %%6, i8* %%20, i32 %%26, i32 %%28, i8* %%21) nounwind, !dbg !4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_124_count);
  sha256(llvm_cbe_tmp__3, llvm_cbe_tmp__6, ( char *)llvm_cbe_tmp__18, llvm_cbe_tmp__23, llvm_cbe_tmp__25, ( char *)llvm_cbe_tmp__19);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__3);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__6);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__23);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__25);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([12 x i8]* @aesl_internal_.str9, i64 0, i64 0)) nounwind, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_125_count);
  printf(( char *)((&aesl_internal__OC_str9[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 12
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__36);
}
  llvm_cbe_storemerge39__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__56;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__50:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge210 = phi i32 [ 0, %%22 ], [ %%39, %%33  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_storemerge210_count);
  llvm_cbe_storemerge210 = (unsigned int )llvm_cbe_storemerge210__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge210 = 0x%X",llvm_cbe_storemerge210);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__35);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = zext i32 %%storemerge210 to i64, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_105_count);
  llvm_cbe_tmp__30 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge210&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__30);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = getelementptr inbounds [32 x i8]* %%sw_hash, i64 0, i64 %%34, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_106_count);
  llvm_cbe_tmp__31 = ( char *)(&llvm_cbe_sw_hash[(((signed long long )llvm_cbe_tmp__30))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__30));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__30) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'sw_hash' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = load i8* %%35, align 1, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_107_count);
  llvm_cbe_tmp__32 = (unsigned char )*llvm_cbe_tmp__31;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__32);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = zext i8 %%36 to i32, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_108_count);
  llvm_cbe_tmp__33 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__32&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__33);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([6 x i8]* @aesl_internal_.str7, i64 0, i64 0), i32 %%37) nounwind, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_109_count);
  printf(( char *)((&aesl_internal__OC_str7[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
])), llvm_cbe_tmp__33);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__33);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__34);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = add i32 %%storemerge210, 1, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_110_count);
  llvm_cbe_tmp__35 = (unsigned int )((unsigned int )(llvm_cbe_storemerge210&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__35&4294967295ull)));
  if (((llvm_cbe_tmp__35&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe_tmp__57;
  } else {
    llvm_cbe_storemerge210__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__35;   /* for PHI node */
    goto llvm_cbe_tmp__50;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__55:
if (AESL_DEBUG_TRACE)
printf("\n  %%puts7 = call i32 @puts(i8* getelementptr inbounds ([7 x i8]* @aesl_internal_str2, i64 0, i64 0)), !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts7_count);
  puts(( char *)((&aesl_internal_str2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 7
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts7 = 0x%X",llvm_cbe_puts7);
}
  llvm_cbe_tmp__45__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__20;   /* for PHI node */
  goto llvm_cbe_tmp__51;

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__52:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @main}\n");
  return llvm_cbe_tmp__45;
}

