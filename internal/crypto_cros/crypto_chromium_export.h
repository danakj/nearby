// Copyright 2020 Google LLC
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

#ifndef THIRD_PARTY_NEARBY_INTERNAL_CRYPTO_CRYPTO_CHROMIUM_EXPORT_H_
#define THIRD_PARTY_NEARBY_INTERNAL_CRYPTO_CRYPTO_CHROMIUM_EXPORT_H_

// Defines CRYPTO_CHROMIUM_EXPORT so that functionality implemented by the crypto module
// can be exported to consumers.

#if defined(COMPONENT_BUILD)
#if defined(WIN32)

#if defined(CRYPTO_IMPLEMENTATION)
#define CRYPTO_CHROMIUM_EXPORT __declspec(dllexport)
#else
#define CRYPTO_CHROMIUM_EXPORT __declspec(dllimport)
#endif  // defined(CRYPTO_IMPLEMENTATION)

#else  // defined(WIN32)
#if defined(CRYPTO_IMPLEMENTATION)
#define CRYPTO_CHROMIUM_EXPORT __attribute__((visibility("default")))
#else
#define CRYPTO_CHROMIUM_EXPORT
#endif
#endif

#else  // defined(COMPONENT_BUILD)
#define CRYPTO_CHROMIUM_EXPORT
#endif

#endif  // THIRD_PARTY_NEARBY_INTERNAL_CRYPTO_CRYPTO_CHROMIUM_EXPORT_H_
