#ifndef MY_PROJECT_H
#define MY_PROJECT_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

EXPORT int add(int a, int b);
EXPORT const char* hello_world();
EXPORT int add_foo(int a, int b);

#ifdef __cplusplus
}
#endif

#endif // MY_PROJECT_H