// Copyright 2024 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Chromium provides in //third_party/nearby the implementation when built
// inside Chromium.
#if !defined(NEARBY_CHROMIUM)

#include <stddef.h>
#include <stdint.h>
#include <openssl/rand.h>

#include "absl/types/span.h"

namespace nearby {

void RandBytes(void* bytes, size_t length) {
  RAND_bytes(reinterpret_cast<uint8_t*>(bytes), length);
}

void RandBytes(absl::Span<uint8_t> bytes) {
  RAND_bytes(bytes.data(), bytes.size());
}

}  // namespace nearby

#endif  // !defined(NEARBY_CHROMIUM)
