/*
  Simple DirectMedia Layer
  Copyright (C) 1997-2021 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

#ifndef SDL_config_h_
#define SDL_config_h_

/**
 *  \file SDL_config.h.in
 *
 *  This is a set of defines to configure the SDL features
 */

/* General platform specific identifiers */
#include "SDL_platform.h"

/* C language features */
/* #undef const */
/* #undef inline */
/* #undef volatile */

/* C datatypes */
/* Define SIZEOF_VOIDP for 64/32 architectures */
#if defined(__LP64__) || defined(_LP64) || defined(_WIN64)
#define SIZEOF_VOIDP 8
#else
#define SIZEOF_VOIDP 4
#endif

#define HAVE_GCC_ATOMICS 1
/* #undef HAVE_GCC_SYNC_LOCK_TEST_AND_SET */

/* Comment this if you want to build without any C library requirements */
#define HAVE_LIBC 1
#if HAVE_LIBC

/* Useful headers */
/* #undef STDC_HEADERS */
#define HAVE_ALLOCA_H 1
#define HAVE_CTYPE_H 1
/* #undef HAVE_FLOAT_H */
/* #undef HAVE_ICONV_H */
#define HAVE_INTTYPES_H 1
#define HAVE_LIMITS_H 1
/* #undef HAVE_MALLOC_H */
#define HAVE_MATH_H 1
/* #undef HAVE_MEMORY_H */
/* #undef HAVE_SIGNAL_H */
#define HAVE_STDARG_H 1
#define HAVE_STDINT_H 1
/* #undef HAVE_STDIO_H */
/* #undef HAVE_STDLIB_H */
/* #undef HAVE_STRINGS_H */
/* #undef HAVE_STRING_H */
/* #undef HAVE_SYS_TYPES_H */
/* #undef HAVE_WCHAR_H */
/* #undef HAVE_PTHREAD_NP_H */
/* #undef HAVE_LIBUNWIND_H */

/* C library functions */
/* #undef HAVE_MALLOC */
/* #undef HAVE_CALLOC */
/* #undef HAVE_REALLOC */
/* #undef HAVE_FREE */
#define HAVE_ALLOCA 1
#ifndef __WIN32__ /* Don't use C runtime versions of these on Windows */
/* #undef HAVE_GETENV */
/* #undef HAVE_SETENV */
/* #undef HAVE_PUTENV */
/* #undef HAVE_UNSETENV */
#endif
/* #undef HAVE_QSORT */
/* #undef HAVE_ABS */
/* #undef HAVE_BCOPY */
/* #undef HAVE_MEMSET */
/* #undef HAVE_MEMCPY */
/* #undef HAVE_MEMMOVE */
/* #undef HAVE_MEMCMP */
/* #undef HAVE_WCSLEN */
/* #undef HAVE_WCSLCPY */
/* #undef HAVE_WCSLCAT */
/* #undef HAVE__WCSDUP */
/* #undef HAVE_WCSDUP */
/* #undef HAVE_WCSSTR */
/* #undef HAVE_WCSCMP */
/* #undef HAVE_WCSNCMP */
/* #undef HAVE_WCSCASECMP */
/* #undef HAVE__WCSICMP */
/* #undef HAVE_WCSNCASECMP */
/* #undef HAVE__WCSNICMP */
/* #undef HAVE_STRLEN */
/* #undef HAVE_STRLCPY */
/* #undef HAVE_STRLCAT */
/* #undef HAVE__STRREV */
/* #undef HAVE__STRUPR */
/* #undef HAVE__STRLWR */
/* #undef HAVE_INDEX */
/* #undef HAVE_RINDEX */
/* #undef HAVE_STRCHR */
/* #undef HAVE_STRRCHR */
/* #undef HAVE_STRSTR */
/* #undef HAVE_STRTOK_R */
/* #undef HAVE_ITOA */
/* #undef HAVE__LTOA */
/* #undef HAVE__UITOA */
/* #undef HAVE__ULTOA */
/* #undef HAVE_STRTOL */
/* #undef HAVE_STRTOUL */
/* #undef HAVE__I64TOA */
/* #undef HAVE__UI64TOA */
/* #undef HAVE_STRTOLL */
/* #undef HAVE_STRTOULL */
/* #undef HAVE_STRTOD */
/* #undef HAVE_ATOI */
/* #undef HAVE_ATOF */
/* #undef HAVE_STRCMP */
/* #undef HAVE_STRNCMP */
/* #undef HAVE__STRICMP */
/* #undef HAVE_STRCASECMP */
/* #undef HAVE__STRNICMP */
/* #undef HAVE_STRNCASECMP */
/* #undef HAVE_SSCANF */
/* #undef HAVE_VSSCANF */
/* #undef HAVE_VSNPRINTF */
#define HAVE_M_PI 1
#define HAVE_ACOS 1
#define HAVE_ACOSF 1
#define HAVE_ASIN 1
#define HAVE_ASINF 1
#define HAVE_ATAN 1
#define HAVE_ATANF 1
#define HAVE_ATAN2 1
#define HAVE_ATAN2F 1
#define HAVE_CEIL 1
#define HAVE_CEILF 1
#define HAVE_COPYSIGN 1
#define HAVE_COPYSIGNF 1
#define HAVE_COS 1
#define HAVE_COSF 1
#define HAVE_EXP 1
#define HAVE_EXPF 1
#define HAVE_FABS 1
#define HAVE_FABSF 1
#define HAVE_FLOOR 1
#define HAVE_FLOORF 1
#define HAVE_FMOD 1
#define HAVE_FMODF 1
#define HAVE_LOG 1
#define HAVE_LOGF 1
#define HAVE_LOG10 1
#define HAVE_LOG10F 1
#define HAVE_LROUND 1
#define HAVE_LROUNDF 1
#define HAVE_POW 1
#define HAVE_POWF 1
#define HAVE_ROUND 1
#define HAVE_ROUNDF 1
#define HAVE_SCALBN 1
#define HAVE_SCALBNF 1
#define HAVE_SIN 1
#define HAVE_SINF 1
#define HAVE_SQRT 1
#define HAVE_SQRTF 1
#define HAVE_TAN 1
#define HAVE_TANF 1
#define HAVE_TRUNC 1
#define HAVE_TRUNCF 1
/* #undef HAVE_FOPEN64 */
/* #undef HAVE_FSEEKO */
/* #undef HAVE_FSEEKO64 */
/* #undef HAVE_SIGACTION */
/* #undef HAVE_SA_SIGACTION */
#define HAVE_SETJMP 1
/* #undef HAVE_NANOSLEEP */
/* #undef HAVE_SYSCONF */
/* #undef HAVE_SYSCTLBYNAME */
/* #undef HAVE_CLOCK_GETTIME */
/* #undef HAVE_GETPAGESIZE */
/* #undef HAVE_MPROTECT */
/* #undef HAVE_ICONV */
/* #undef HAVE_PTHREAD_SETNAME_NP */
/* #undef HAVE_PTHREAD_SET_NAME_NP */
/* #undef HAVE_SEM_TIMEDWAIT */
/* #undef HAVE_GETAUXVAL */
/* #undef HAVE_ELF_AUX_INFO */
/* #undef HAVE_POLL */
/* #undef HAVE__EXIT */

#elif __WIN32__
#define HAVE_STDARG_H 1
#define HAVE_STDDEF_H 1
/* #undef HAVE_FLOAT_H */

#else
/* We may need some replacement for stdarg.h here */
#include <stdarg.h>
#endif /* HAVE_LIBC */

/* #undef HAVE_ALTIVEC_H */
/* #undef HAVE_DBUS_DBUS_H */
/* #undef HAVE_FCITX */
/* #undef HAVE_IBUS_IBUS_H */
/* #undef HAVE_SYS_INOTIFY_H */
/* #undef HAVE_INOTIFY_INIT */
/* #undef HAVE_INOTIFY_INIT1 */
/* #undef HAVE_INOTIFY */
/* #undef HAVE_IMMINTRIN_H */
/* #undef HAVE_LIBUDEV_H */
/* #undef HAVE_LIBSAMPLERATE_H */
/* #undef HAVE_LIBDECOR_H */

/* #undef HAVE_D3D_H */
/* #undef HAVE_D3D11_H */
/* #undef HAVE_DDRAW_H */
/* #undef HAVE_DSOUND_H */
/* #undef HAVE_DINPUT_H */
/* #undef HAVE_XINPUT_H */
/* #undef HAVE_DXGI_H */

/* #undef HAVE_MMDEVICEAPI_H */
/* #undef HAVE_AUDIOCLIENT_H */
/* #undef HAVE_SENSORSAPI_H */

/* #undef HAVE_XINPUT_GAMEPAD_EX */
/* #undef HAVE_XINPUT_STATE_EX */

/* SDL internal assertion support */
/* #undef SDL_DEFAULT_ASSERT_LEVEL */

/* Allow disabling of core subsystems */
/* #undef SDL_ATOMIC_DISABLED */
/* #undef SDL_AUDIO_DISABLED */
/* #undef SDL_CPUINFO_DISABLED */
/* #undef SDL_EVENTS_DISABLED */
/* #undef SDL_FILE_DISABLED */
/* #undef SDL_JOYSTICK_DISABLED */
/* #undef SDL_HAPTIC_DISABLED */
/* #undef SDL_SENSOR_DISABLED */
/* #undef SDL_LOADSO_DISABLED */
/* #undef SDL_RENDER_DISABLED */
#define SDL_THREADS_DISABLED 1
/* #undef SDL_TIMERS_DISABLED */
/* #undef SDL_VIDEO_DISABLED */
/* #undef SDL_POWER_DISABLED */
/* #undef SDL_FILESYSTEM_DISABLED */

/* Enable various audio drivers */
/* #undef SDL_AUDIO_DRIVER_ALSA */
/* #undef SDL_AUDIO_DRIVER_ALSA_DYNAMIC */
#define SDL_AUDIO_DRIVER_ANDROID 1
#define SDL_AUDIO_DRIVER_OPENSLES 1
/* #undef SDL_AUDIO_DRIVER_AAUDIO */
/* #undef SDL_AUDIO_DRIVER_ARTS */
/* #undef SDL_AUDIO_DRIVER_ARTS_DYNAMIC */
/* #undef SDL_AUDIO_DRIVER_COREAUDIO */
#define SDL_AUDIO_DRIVER_DISK 1
/* #undef SDL_AUDIO_DRIVER_DSOUND */
#define SDL_AUDIO_DRIVER_DUMMY 1
/* #undef SDL_AUDIO_DRIVER_EMSCRIPTEN */
/* #undef SDL_AUDIO_DRIVER_ESD */
/* #undef SDL_AUDIO_DRIVER_ESD_DYNAMIC */
/* #undef SDL_AUDIO_DRIVER_FUSIONSOUND */
/* #undef SDL_AUDIO_DRIVER_FUSIONSOUND_DYNAMIC */
/* #undef SDL_AUDIO_DRIVER_HAIKU */
/* #undef SDL_AUDIO_DRIVER_JACK */
/* #undef SDL_AUDIO_DRIVER_JACK_DYNAMIC */
/* #undef SDL_AUDIO_DRIVER_NAS */
/* #undef SDL_AUDIO_DRIVER_NAS_DYNAMIC */
/* #undef SDL_AUDIO_DRIVER_NETBSD */
/* #undef SDL_AUDIO_DRIVER_OSS */
/* #undef SDL_AUDIO_DRIVER_OSS_SOUNDCARD_H */
/* #undef SDL_AUDIO_DRIVER_PAUDIO */
/* #undef SDL_AUDIO_DRIVER_PIPEWIRE */
/* #undef SDL_AUDIO_DRIVER_PIPEWIRE_DYNAMIC */
/* #undef SDL_AUDIO_DRIVER_PULSEAUDIO */
/* #undef SDL_AUDIO_DRIVER_PULSEAUDIO_DYNAMIC */
/* #undef SDL_AUDIO_DRIVER_QSA */
/* #undef SDL_AUDIO_DRIVER_SNDIO */
/* #undef SDL_AUDIO_DRIVER_SNDIO_DYNAMIC */
/* #undef SDL_AUDIO_DRIVER_SUNAUDIO */
/* #undef SDL_AUDIO_DRIVER_WASAPI */
/* #undef SDL_AUDIO_DRIVER_WINMM */
/* #undef SDL_AUDIO_DRIVER_OS2 */
/* #undef SDL_AUDIO_DRIVER_VITA */

/* Enable various input drivers */
/* #undef SDL_INPUT_LINUXEV */
/* #undef SDL_INPUT_LINUXKD */
/* #undef SDL_INPUT_FBSDKBIO */
#define SDL_JOYSTICK_ANDROID 1
/* #undef SDL_JOYSTICK_HAIKU */
/* #undef SDL_JOYSTICK_DINPUT */
/* #undef SDL_JOYSTICK_XINPUT */
/* #undef SDL_JOYSTICK_DUMMY */
/* #undef SDL_JOYSTICK_IOKIT */
/* #undef SDL_JOYSTICK_MFI */
/* #undef SDL_JOYSTICK_LINUX */
/* #undef SDL_JOYSTICK_WINMM */
/* #undef SDL_JOYSTICK_OS2 */
/* #undef SDL_JOYSTICK_USBHID */
/* #undef SDL_HAVE_MACHINE_JOYSTICK_H */
#define SDL_JOYSTICK_HIDAPI 1
/* #undef SDL_JOYSTICK_RAWINPUT */
/* #undef SDL_JOYSTICK_EMSCRIPTEN */
#define SDL_JOYSTICK_VIRTUAL 1
/* #undef SDL_JOYSTICK_VITA */
/* #undef SDL_HAPTIC_DUMMY */
/* #undef SDL_HAPTIC_LINUX */
/* #undef SDL_HAPTIC_IOKIT */
/* #undef SDL_HAPTIC_DINPUT */
/* #undef SDL_HAPTIC_XINPUT */
#define SDL_HAPTIC_ANDROID 1
/* #undef SDL_LIBUSB_DYNAMIC */

/* Enable various sensor drivers */
#define SDL_SENSOR_ANDROID 1
/* #undef SDL_SENSOR_COREMOTION */
/* #undef SDL_SENSOR_WINDOWS */
/* #undef SDL_SENSOR_DUMMY */
/* #undef SDL_SENSOR_VITA */

/* Enable various shared object loading systems */
#define SDL_LOADSO_DLOPEN 1
/* #undef SDL_LOADSO_DUMMY */
/* #undef SDL_LOADSO_LDG */
/* #undef SDL_LOADSO_WINDOWS */
/* #undef SDL_LOADSO_OS2 */

/* Enable various threading systems */
/* #undef SDL_THREAD_GENERIC_COND_SUFFIX */
/* #undef SDL_THREAD_PTHREAD */
/* #undef SDL_THREAD_PTHREAD_RECURSIVE_MUTEX */
/* #undef SDL_THREAD_PTHREAD_RECURSIVE_MUTEX_NP */
/* #undef SDL_THREAD_WINDOWS */
/* #undef SDL_THREAD_OS2 */
/* #undef SDL_THREAD_VITA */

/* Enable various timer systems */
/* #undef SDL_TIMER_HAIKU */
/* #undef SDL_TIMER_DUMMY */
#define SDL_TIMER_UNIX 1
/* #undef SDL_TIMER_WINDOWS */
/* #undef SDL_TIMER_OS2 */
/* #undef SDL_TIMER_VITA */

/* Enable various video drivers */
#define SDL_VIDEO_DRIVER_ANDROID 1
/* #undef SDL_VIDEO_DRIVER_EMSCRIPTEN */
/* #undef SDL_VIDEO_DRIVER_HAIKU */
/* #undef SDL_VIDEO_DRIVER_COCOA */
/* #undef SDL_VIDEO_DRIVER_UIKIT */
/* #undef SDL_VIDEO_DRIVER_DIRECTFB */
/* #undef SDL_VIDEO_DRIVER_DIRECTFB_DYNAMIC */
/* #undef SDL_VIDEO_DRIVER_DUMMY */
/* #undef SDL_VIDEO_DRIVER_OFFSCREEN */
/* #undef SDL_VIDEO_DRIVER_WINDOWS */
/* #undef SDL_VIDEO_DRIVER_WINRT */
/* #undef SDL_VIDEO_DRIVER_WAYLAND */
/* #undef SDL_VIDEO_DRIVER_RPI */
/* #undef SDL_VIDEO_DRIVER_VIVANTE */
/* #undef SDL_VIDEO_DRIVER_VIVANTE_VDK */
/* #undef SDL_VIDEO_DRIVER_OS2 */
/* #undef SDL_VIDEO_DRIVER_QNX */

/* #undef SDL_VIDEO_DRIVER_KMSDRM */
/* #undef SDL_VIDEO_DRIVER_KMSDRM_DYNAMIC */
/* #undef SDL_VIDEO_DRIVER_KMSDRM_DYNAMIC_GBM */

/* #undef SDL_VIDEO_DRIVER_WAYLAND_QT_TOUCH */
/* #undef SDL_VIDEO_DRIVER_WAYLAND_DYNAMIC */
/* #undef SDL_VIDEO_DRIVER_WAYLAND_DYNAMIC_EGL */
/* #undef SDL_VIDEO_DRIVER_WAYLAND_DYNAMIC_CURSOR */
/* #undef SDL_VIDEO_DRIVER_WAYLAND_DYNAMIC_XKBCOMMON */
/* #undef SDL_VIDEO_DRIVER_WAYLAND_DYNAMIC_LIBDECOR */

/* #undef SDL_VIDEO_DRIVER_X11 */
/* #undef SDL_VIDEO_DRIVER_X11_DYNAMIC */
/* #undef SDL_VIDEO_DRIVER_X11_DYNAMIC_XEXT */
/* #undef SDL_VIDEO_DRIVER_X11_DYNAMIC_XCURSOR */
/* #undef SDL_VIDEO_DRIVER_X11_DYNAMIC_XINERAMA */
/* #undef SDL_VIDEO_DRIVER_X11_DYNAMIC_XINPUT2 */
/* #undef SDL_VIDEO_DRIVER_X11_DYNAMIC_XRANDR */
/* #undef SDL_VIDEO_DRIVER_X11_DYNAMIC_XSS */
/* #undef SDL_VIDEO_DRIVER_X11_DYNAMIC_XVIDMODE */
/* #undef SDL_VIDEO_DRIVER_X11_XCURSOR */
/* #undef SDL_VIDEO_DRIVER_X11_XDBE */
/* #undef SDL_VIDEO_DRIVER_X11_XINERAMA */
/* #undef SDL_VIDEO_DRIVER_X11_XINPUT2 */
/* #undef SDL_VIDEO_DRIVER_X11_XINPUT2_SUPPORTS_MULTITOUCH */
/* #undef SDL_VIDEO_DRIVER_X11_XRANDR */
/* #undef SDL_VIDEO_DRIVER_X11_XSCRNSAVER */
/* #undef SDL_VIDEO_DRIVER_X11_XSHAPE */
/* #undef SDL_VIDEO_DRIVER_X11_XVIDMODE */
/* #undef SDL_VIDEO_DRIVER_X11_SUPPORTS_GENERIC_EVENTS */
/* #undef SDL_VIDEO_DRIVER_X11_CONST_PARAM_XEXTADDDISPLAY */
/* #undef SDL_VIDEO_DRIVER_X11_HAS_XKBKEYCODETOKEYSYM */
/* #undef SDL_VIDEO_DRIVER_VITA */

/* #undef SDL_VIDEO_RENDER_D3D */
/* #undef SDL_VIDEO_RENDER_D3D11 */
/* #undef SDL_VIDEO_RENDER_OGL */
#define SDL_VIDEO_RENDER_OGL_ES 1
#define SDL_VIDEO_RENDER_OGL_ES2 1
/* #undef SDL_VIDEO_RENDER_DIRECTFB */
/* #undef SDL_VIDEO_RENDER_METAL */
/* #undef SDL_VIDEO_RENDER_VITA_GXM */

/* Enable OpenGL support */
/* #undef SDL_VIDEO_OPENGL */
#define SDL_VIDEO_OPENGL_ES 1
#define SDL_VIDEO_OPENGL_ES2 1
/* #undef SDL_VIDEO_OPENGL_BGL */
/* #undef SDL_VIDEO_OPENGL_CGL */
/* #undef SDL_VIDEO_OPENGL_GLX */
/* #undef SDL_VIDEO_OPENGL_WGL */
#define SDL_VIDEO_OPENGL_EGL 1
/* #undef SDL_VIDEO_OPENGL_OSMESA */
/* #undef SDL_VIDEO_OPENGL_OSMESA_DYNAMIC */

/* Enable Vulkan support */
/* #undef SDL_VIDEO_VULKAN */

/* Enable Metal support */
/* #undef SDL_VIDEO_METAL */

/* Enable system power support */
#define SDL_POWER_ANDROID 1
/* #undef SDL_POWER_LINUX */
/* #undef SDL_POWER_WINDOWS */
/* #undef SDL_POWER_WINRT */
/* #undef SDL_POWER_MACOSX */
/* #undef SDL_POWER_UIKIT */
/* #undef SDL_POWER_HAIKU */
/* #undef SDL_POWER_EMSCRIPTEN */
/* #undef SDL_POWER_HARDWIRED */
/* #undef SDL_POWER_VITA */

/* Enable system filesystem support */
#define SDL_FILESYSTEM_ANDROID 1
/* #undef SDL_FILESYSTEM_HAIKU */
/* #undef SDL_FILESYSTEM_COCOA */
/* #undef SDL_FILESYSTEM_DUMMY */
/* #undef SDL_FILESYSTEM_UNIX */
/* #undef SDL_FILESYSTEM_WINDOWS */
/* #undef SDL_FILESYSTEM_EMSCRIPTEN */
/* #undef SDL_FILESYSTEM_OS2 */
/* #undef SDL_FILESYSTEM_VITA */

/* Enable assembly routines */
#define SDL_ASSEMBLY_ROUTINES 1
/* #undef SDL_ALTIVEC_BLITTERS */
/* #undef SDL_ARM_SIMD_BLITTERS */
/* #undef SDL_ARM_NEON_BLITTERS */

/* Enable dynamic libsamplerate support */
/* #undef SDL_LIBSAMPLERATE_DYNAMIC */

/* Platform specific definitions */
/* #undef SDL_IPHONE_KEYBOARD */
/* #undef SDL_IPHONE_LAUNCHSCREEN */

/* #undef SDL_VIDEO_VITA_PIB */

#if !defined(__WIN32__) && !defined(__WINRT__)
#  if !defined(_STDINT_H_) && !defined(_STDINT_H) && !defined(HAVE_STDINT_H) && !defined(_HAVE_STDINT_H)
typedef unsigned int size_t;
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
typedef unsigned long uintptr_t;
#  endif /* if (stdint.h isn't available) */
#else /* __WIN32__ */
#  if !defined(_STDINT_H_) && !defined(HAVE_STDINT_H) && !defined(_HAVE_STDINT_H)
#    if defined(__GNUC__) || defined(__DMC__) || defined(__WATCOMC__)
#define HAVE_STDINT_H	1
#    elif defined(_MSC_VER)
typedef signed __int8 int8_t;
typedef unsigned __int8 uint8_t;
typedef signed __int16 int16_t;
typedef unsigned __int16 uint16_t;
typedef signed __int32 int32_t;
typedef unsigned __int32 uint32_t;
typedef signed __int64 int64_t;
typedef unsigned __int64 uint64_t;
#      ifndef _UINTPTR_T_DEFINED
#        ifdef  _WIN64
typedef unsigned __int64 uintptr_t;
#          else
typedef unsigned int uintptr_t;
#        endif
#define _UINTPTR_T_DEFINED
#      endif
/* Older Visual C++ headers don't have the Win64-compatible typedefs... */
#      if ((_MSC_VER <= 1200) && (!defined(DWORD_PTR)))
#define DWORD_PTR DWORD
#      endif
#      if ((_MSC_VER <= 1200) && (!defined(LONG_PTR)))
#define LONG_PTR LONG
#      endif
#    else /* !__GNUC__ && !_MSC_VER */
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
#      ifndef _SIZE_T_DEFINED_
#define _SIZE_T_DEFINED_
typedef unsigned int size_t;
#      endif
typedef unsigned int uintptr_t;
#    endif /* __GNUC__ || _MSC_VER */
#  endif /* !_STDINT_H_ && !HAVE_STDINT_H */
#endif /* __WIN32__ */

#endif /* SDL_config_h_ */