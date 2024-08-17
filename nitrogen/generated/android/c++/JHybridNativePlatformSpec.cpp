///
/// JHybridNativePlatformSpec.cpp
/// Fri Aug 16 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "JHybridNativePlatformSpec.hpp"



#include "JInsets.hpp"
#include "JStatusBarStyle.hpp"

namespace margelo::nitro::unistyles {

  jni::local_ref<JHybridNativePlatformSpec::jhybriddata> JHybridNativePlatformSpec::initHybrid(jni::alias_ref<jhybridobject> jThis) {
    return makeCxxInstance(jThis);
  }

  void JHybridNativePlatformSpec::registerNatives() {
    registerHybrid({
      makeNativeMethod("initHybrid", JHybridNativePlatformSpec::initHybrid),
    });
  }

  size_t JHybridNativePlatformSpec::getExternalMemorySize() noexcept {
    static const auto method = _javaPart->getClass()->getMethod<jlong()>("getMemorySize");
    return method(_javaPart.get());
  }

  // Properties
  

  // Methods
  Insets JHybridNativePlatformSpec::getInsets() {
    static const auto method = _javaPart->getClass()->getMethod<JInsets()>("getInsets");
    throw std::runtime_error("getInsets(...) is not yet implemented!");
  }
  std::string JHybridNativePlatformSpec::getColorScheme() {
    static const auto method = _javaPart->getClass()->getMethod<std::string()>("getColorScheme");
    throw std::runtime_error("getColorScheme(...) is not yet implemented!");
  }
  double JHybridNativePlatformSpec::getFontScale() {
    static const auto method = _javaPart->getClass()->getMethod<double()>("getFontScale");
    throw std::runtime_error("getFontScale(...) is not yet implemented!");
  }
  std::string JHybridNativePlatformSpec::getContentSizeCategory() {
    static const auto method = _javaPart->getClass()->getMethod<std::string()>("getContentSizeCategory");
    throw std::runtime_error("getContentSizeCategory(...) is not yet implemented!");
  }
  void JHybridNativePlatformSpec::setRootViewBackgroundColor(const std::optional<std::string>& hex, std::optional<double> alpha) {
    static const auto method = _javaPart->getClass()->getMethod<void(std::optional<std::string>, std::optional<double>)>("setRootViewBackgroundColor");
    throw std::runtime_error("setRootViewBackgroundColor(...) is not yet implemented!");
  }
  void JHybridNativePlatformSpec::setNavigationBarBackgroundColor(const std::optional<std::string>& hex, std::optional<double> alpha) {
    static const auto method = _javaPart->getClass()->getMethod<void(std::optional<std::string>, std::optional<double>)>("setNavigationBarBackgroundColor");
    throw std::runtime_error("setNavigationBarBackgroundColor(...) is not yet implemented!");
  }
  void JHybridNativePlatformSpec::setNavigationBarHidden(bool isHidden) {
    static const auto method = _javaPart->getClass()->getMethod<void(bool)>("setNavigationBarHidden");
    throw std::runtime_error("setNavigationBarHidden(...) is not yet implemented!");
  }
  void JHybridNativePlatformSpec::setStatusBarStyle(StatusBarStyle style) {
    static const auto method = _javaPart->getClass()->getMethod<void(JStatusBarStyle)>("setStatusBarStyle");
    throw std::runtime_error("setStatusBarStyle(...) is not yet implemented!");
  }
  void JHybridNativePlatformSpec::setStatusBarHidden(bool isHidden) {
    static const auto method = _javaPart->getClass()->getMethod<void(bool)>("setStatusBarHidden");
    throw std::runtime_error("setStatusBarHidden(...) is not yet implemented!");
  }
  void JHybridNativePlatformSpec::setStatusBarBackgroundColor(const std::optional<std::string>& hex, std::optional<double> alpha) {
    static const auto method = _javaPart->getClass()->getMethod<void(std::optional<std::string>, std::optional<double>)>("setStatusBarBackgroundColor");
    throw std::runtime_error("setStatusBarBackgroundColor(...) is not yet implemented!");
  }
  void JHybridNativePlatformSpec::setImmersiveMode(bool isEnabled) {
    static const auto method = _javaPart->getClass()->getMethod<void(bool)>("setImmersiveMode");
    throw std::runtime_error("setImmersiveMode(...) is not yet implemented!");
  }

} // namespace margelo::nitro::unistyles
