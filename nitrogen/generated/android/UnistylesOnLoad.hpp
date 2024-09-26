///
/// UnistylesOnLoad.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include <jni.h>
#include <NitroModules/NitroDefines.hpp>

namespace margelo::nitro::unistyles {

  /**
   * Initializes the native (C++) part of unistyles, and autolinks all Hybrid Objects.
   * Call this in your `JNI_OnLoad` function (probably inside `cpp-adapter.cpp`).
   * Example:
   * ```cpp (cpp-adapter.cpp)
   * JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void*) {
   *   return margelo::nitro::unistyles::initialize(vm);
   * }
   * ```
   */
  int initialize(JavaVM* vm);

} // namespace margelo::nitro::unistyles
