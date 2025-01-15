///
/// HybridUnistylesStyleSheetSpec.hpp
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

// Forward declaration of `UnistyleDependency` to properly resolve imports.
namespace margelo::nitro::unistyles { enum class UnistyleDependency; }

#include <functional>
#include <vector>
#include "UnistyleDependency.hpp"

namespace margelo::nitro::unistyles {

  using namespace margelo::nitro;

  /**
   * An abstract base class for `UnistylesStyleSheet`
   * Inherit this class to create instances of `HybridUnistylesStyleSheetSpec` in C++.
   * You must explicitly call `HybridObject`'s constructor yourself, because it is virtual.
   * @example
   * ```cpp
   * class HybridUnistylesStyleSheet: public HybridUnistylesStyleSheetSpec {
   * public:
   *   HybridUnistylesStyleSheet(...): HybridObject(TAG) { ... }
   *   // ...
   * };
   * ```
   */
  class HybridUnistylesStyleSheetSpec: public virtual HybridObject {
    public:
      // Constructor
      explicit HybridUnistylesStyleSheetSpec(): HybridObject(TAG) { }

      // Destructor
      virtual ~HybridUnistylesStyleSheetSpec() { }

    public:
      // Properties
      virtual double getHairlineWidth() = 0;
      virtual double getUnid() = 0;

    public:
      // Methods
      virtual std::function<void()> addChangeListener(const std::function<void(const std::vector<UnistyleDependency>& /* dependencies */)>& onChanged) = 0;

    protected:
      // Hybrid Setup
      void loadHybridMethods() override;

    protected:
      // Tag for logging
      static constexpr auto TAG = "UnistylesStyleSheet";
  };

} // namespace margelo::nitro::unistyles
