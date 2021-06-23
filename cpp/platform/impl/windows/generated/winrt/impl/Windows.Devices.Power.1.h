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

// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210505.3

#ifndef WINRT_Windows_Devices_Power_1_H
#define WINRT_Windows_Devices_Power_1_H
#include "winrt/impl/Windows.Devices.Power.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Power
{
    struct __declspec(empty_bases) IBattery :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBattery>
    {
        IBattery(std::nullptr_t = nullptr) noexcept {}
        IBattery(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IBattery(IBattery const&) noexcept = default;
        IBattery(IBattery&&) noexcept = default;
        IBattery& operator=(IBattery const&) & noexcept = default;
        IBattery& operator=(IBattery&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IBatteryReport :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBatteryReport>
    {
        IBatteryReport(std::nullptr_t = nullptr) noexcept {}
        IBatteryReport(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IBatteryReport(IBatteryReport const&) noexcept = default;
        IBatteryReport(IBatteryReport&&) noexcept = default;
        IBatteryReport& operator=(IBatteryReport const&) & noexcept = default;
        IBatteryReport& operator=(IBatteryReport&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IBatteryStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBatteryStatics>
    {
        IBatteryStatics(std::nullptr_t = nullptr) noexcept {}
        IBatteryStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IBatteryStatics(IBatteryStatics const&) noexcept = default;
        IBatteryStatics(IBatteryStatics&&) noexcept = default;
        IBatteryStatics& operator=(IBatteryStatics const&) & noexcept = default;
        IBatteryStatics& operator=(IBatteryStatics&&) & noexcept = default;
    };
}
#endif