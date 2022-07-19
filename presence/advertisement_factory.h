// Copyright 2022 Google LLC
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

#ifndef THIRD_PARTY_NEARBY_PRESENCE_ADVERTISEMENT_FACTORY_H_
#define THIRD_PARTY_NEARBY_PRESENCE_ADVERTISEMENT_FACTORY_H_

#include <string>

#include "absl/status/status.h"
#include "absl/status/statusor.h"
#include "internal/platform/implementation/ble_v2.h"
#include "third_party/nearby/presence/broadcast_request.h"
#include "third_party/nearby/presence/certificate_manager.h"
#include "third_party/nearby/presence/presence_identity.h"

namespace nearby {
namespace presence {

// An opaque container with the advertisement data.
using ::location::nearby::api::ble_v2::BleAdvertisementData;

/** Builds BLE advertisements from broadcast requests. */
class AdvertisementFactory {
 public:
  explicit AdvertisementFactory(CertificateManager* certificate_manager)
      : certificate_manager_(*certificate_manager) {}

  /** Returns a BLE advertisement for given `request` */
  absl::StatusOr<BleAdvertisementData> CreateAdvertisement(
      const BroadcastRequest& request) const;

 private:
  absl::StatusOr<BleAdvertisementData> CreateBaseNpAdvertisement(
      const BroadcastRequest& request) const;

  CertificateManager& certificate_manager_;
};

}  // namespace presence
}  // namespace nearby

#endif  // THIRD_PARTY_NEARBY_PRESENCE_ADVERTISEMENT_FACTORY_H_