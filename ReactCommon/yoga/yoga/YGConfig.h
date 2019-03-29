/*
 *  Copyright (c) Facebook, Inc. and its affiliates.
 *
 *  This source code is licensed under the MIT license found in the LICENSE
 *  file in the root directory of this source tree.
 *
 */
#pragma once
#include "Yoga-internal.h"
#include "Yoga.h"

struct YGConfig {
  std::array<bool, YGExperimentalFeatureCount> experimentalFeatures = {};
  bool useWebDefaults = false;
  bool useLegacyStretchBehaviour = false;
  bool shouldDiffLayoutWithoutLegacyStretchBehaviour = false;
  float pointScaleFactor = 1.0f;
  YGLogger logger;
  YGCloneNodeFunc cloneNodeCallback = nullptr;
  void* context = nullptr;
  bool printTree = false;

  YGConfig(YGLogger logger);
};
