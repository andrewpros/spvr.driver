/*
 * Copyright (c) 2016
 *  Somebody
 */
#ifndef SVR_SVRLIBCONFIG_H
#define SVR_SVRLIBCONFIG_H

#if defined(_WIN32)
#define HMD_DLL_EXPORT extern "C" __declspec(dllexport)
#define HMD_DLL_IMPORT extern "C" __declspec(dllimport)
#elif defined(__GNUC__) || defined(COMPILER_GCC)
#define HMD_DLL_EXPORT extern "C" __attribute__((visibility("default")))
#define HMD_DLL_IMPORT extern "C"
#else
#error "Unsupported Platform."
#endif

#endif // SVR_SVRLIBCONFIG_H
