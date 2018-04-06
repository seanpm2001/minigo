// Copyright 2018 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "cc/move.h"

namespace minigo {

std::ostream& operator<<(std::ostream& os, const Move& move) {
  if (move.color == Color::kBlack) {
    os << "B";
  } else if (move.color == Color::kWhite) {
    os << "W";
  } else {
    os << "<" << static_cast<int>(move.color) << ">";
  }
  os << "[" << move.c.ToSgf() << "]";
  return os;
}

}  // namespace minigo
