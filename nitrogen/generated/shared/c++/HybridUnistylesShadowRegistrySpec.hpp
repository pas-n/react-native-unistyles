///
/// HybridUnistylesShadowRegistrySpec.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/HybridObject.hpp>)
#include <NitroModules/HybridObject.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif





namespace margelo::nitro::unistyles {

  using namespace margelo::nitro;

  /**
   * An abstract base class for `UnistylesShadowRegistry`
   * Inherit this class to create instances of `HybridUnistylesShadowRegistrySpec` in C++.
   * You must explicitly call `HybridObject`'s constructor yourself, because it is virtual.
   * @example
   * ```cpp
   * class HybridUnistylesShadowRegistry: public HybridUnistylesShadowRegistrySpec {
   * public:
   *   HybridUnistylesShadowRegistry(...): HybridObject(TAG) { ... }
   *   // ...
   * };
   * ```
   */
  class HybridUnistylesShadowRegistrySpec: public virtual HybridObject {
    public:
      // Constructor
      explicit HybridUnistylesShadowRegistrySpec(): HybridObject(TAG) { }

      // Destructor
      virtual ~HybridUnistylesShadowRegistrySpec() { }

    public:
      // Properties
      

    public:
      // Methods
      

    protected:
      // Hybrid Setup
      void loadHybridMethods() override;

    protected:
      // Tag for logging
      static constexpr auto TAG = "UnistylesShadowRegistry";
  };

} // namespace margelo::nitro::unistyles
