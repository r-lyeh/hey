#ifdef _WIN32 // remove some stupid APIENTRY compiler warning
#define UNICODE
#define OEMRESOURCE
#include "winsock2.h"
#endif

#ifdef _WIN32
#ifdef _MSC_VER
#pragma comment(lib, "user32.lib")
#pragma comment(lib, "shell32.lib")
#pragma comment(lib, "gdi32.lib")
#endif
#define _GLFW_WIN32
#endif

#include "GLFW/src/cocoa_time.c"
#include "GLFW/src/cocoa_init.m"
#include "GLFW/src/cocoa_joystick.m"
#include "GLFW/src/cocoa_monitor.m"
#include "GLFW/src/cocoa_window.m"
#include "GLFW/src/nsgl_context.m"
#include "GLFW/src/context.c"
#include "GLFW/src/egl_context.c"
#include "GLFW/src/glx_context.c"
#include "GLFW/src/init.c"
#include "GLFW/src/input.c"
#include "GLFW/src/linux_joystick.c"
#include "GLFW/src/monitor.c"
#include "GLFW/src/osmesa_context.c"
#include "GLFW/src/platform.c"
#include "GLFW/src/posix_module.c"
#include "GLFW/src/posix_poll.c"
#include "GLFW/src/posix_thread.c"
#include "GLFW/src/posix_time.c"
#include "GLFW/src/vulkan.c"
#include "GLFW/src/wgl_context.c"
#include "GLFW/src/win32_init.c"
#include "GLFW/src/win32_joystick.c"
#include "GLFW/src/win32_module.c"
#include "GLFW/src/win32_monitor.c"
#include "GLFW/src/win32_thread.c"
#include "GLFW/src/win32_time.c"
#include "GLFW/src/win32_window.c"
#include "GLFW/src/window.c"
#include "GLFW/src/wl_init.c"
#include "GLFW/src/wl_monitor.c"
#include "GLFW/src/wl_window.c"
#include "GLFW/src/x11_init.c"
#include "GLFW/src/x11_monitor.c"
#include "GLFW/src/x11_window.c"
#include "GLFW/src/xkb_unicode.c"

#define fitToMonitor null##fitToMonitor
#define acquireMonitor null##acquireMonitor
#define releaseMonitor null##releaseMonitor
#define createNativeWindow null##createNativeWindow
#include "GLFW/src/null_init.c"
#include "GLFW/src/null_joystick.c"
#include "GLFW/src/null_monitor.c"
#include "GLFW/src/null_window.c"
