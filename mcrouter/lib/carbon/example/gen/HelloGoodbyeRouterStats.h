/*
 *  Copyright (c) 2017, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

/*
 *  THIS FILE IS AUTOGENERATED. DO NOT MODIFY IT; ALL CHANGES WILL BE LOST IN
 *  VAIN.
 *
 *  @generated
 */
#pragma once

#include <array>

#include <folly/Range.h>
#include <folly/dynamic.h>

namespace hellogoodbye {

struct HelloGoodbyeRouterStatsConfig {
  static constexpr size_t kNumRequestGroups = 2;
  static constexpr std::array<folly::StringPiece, 1 * kNumRequestGroups>
      sumStatNames{{folly::StringPiece("cmd_goodbye_count"),
                    folly::StringPiece("cmd_hello_count")}};
  static constexpr std::array<folly::StringPiece, 3 * kNumRequestGroups>
      rateStatNames{{folly::StringPiece("cmd_goodbye"),
                     folly::StringPiece("cmd_hello"),
                     folly::StringPiece("cmd_goodbye_out"),
                     folly::StringPiece("cmd_hello_out"),
                     folly::StringPiece("cmd_goodbye_out_all"),
                     folly::StringPiece("cmd_hello_out_all")}};

  template <class Request>
  static constexpr size_t getStatGroup();
};

template <>
inline constexpr size_t
HelloGoodbyeRouterStatsConfig::getStatGroup<GoodbyeRequest>() {
  return 0; // stat group 'goodbye'
}

template <>
inline constexpr size_t
HelloGoodbyeRouterStatsConfig::getStatGroup<HelloRequest>() {
  return 1; // stat group 'hello'
}

} // namespace hellogoodbye
