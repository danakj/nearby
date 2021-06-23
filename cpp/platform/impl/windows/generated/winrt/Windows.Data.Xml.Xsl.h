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

#ifndef WINRT_Windows_Data_Xml_Xsl_H
#define WINRT_Windows_Data_Xml_Xsl_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.210505.3"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.210505.3"
#include "winrt/impl/Windows.Data.Xml.Dom.2.h"
#include "winrt/impl/Windows.Data.Xml.Xsl.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Data_Xml_Xsl_IXsltProcessor<D>::TransformToString(winrt::Windows::Data::Xml::Dom::IXmlNode const& inputNode) const
    {
        void* output{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Data::Xml::Xsl::IXsltProcessor)->TransformToString(*(void**)(&inputNode), &output));
        return hstring{ output, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Data::Xml::Dom::XmlDocument) consume_Windows_Data_Xml_Xsl_IXsltProcessor2<D>::TransformToDocument(winrt::Windows::Data::Xml::Dom::IXmlNode const& inputNode) const
    {
        void* output{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Data::Xml::Xsl::IXsltProcessor2)->TransformToDocument(*(void**)(&inputNode), &output));
        return winrt::Windows::Data::Xml::Dom::XmlDocument{ output, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Data::Xml::Xsl::XsltProcessor) consume_Windows_Data_Xml_Xsl_IXsltProcessorFactory<D>::CreateInstance(winrt::Windows::Data::Xml::Dom::XmlDocument const& document) const
    {
        void* xsltProcessor{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Data::Xml::Xsl::IXsltProcessorFactory)->CreateInstance(*(void**)(&document), &xsltProcessor));
        return winrt::Windows::Data::Xml::Xsl::XsltProcessor{ xsltProcessor, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Data::Xml::Xsl::IXsltProcessor> : produce_base<D, winrt::Windows::Data::Xml::Xsl::IXsltProcessor>
    {
        int32_t __stdcall TransformToString(void* inputNode, void** output) noexcept final try
        {
            clear_abi(output);
            typename D::abi_guard guard(this->shim());
            *output = detach_from<hstring>(this->shim().TransformToString(*reinterpret_cast<winrt::Windows::Data::Xml::Dom::IXmlNode const*>(&inputNode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Data::Xml::Xsl::IXsltProcessor2> : produce_base<D, winrt::Windows::Data::Xml::Xsl::IXsltProcessor2>
    {
        int32_t __stdcall TransformToDocument(void* inputNode, void** output) noexcept final try
        {
            clear_abi(output);
            typename D::abi_guard guard(this->shim());
            *output = detach_from<winrt::Windows::Data::Xml::Dom::XmlDocument>(this->shim().TransformToDocument(*reinterpret_cast<winrt::Windows::Data::Xml::Dom::IXmlNode const*>(&inputNode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Data::Xml::Xsl::IXsltProcessorFactory> : produce_base<D, winrt::Windows::Data::Xml::Xsl::IXsltProcessorFactory>
    {
        int32_t __stdcall CreateInstance(void* document, void** xsltProcessor) noexcept final try
        {
            clear_abi(xsltProcessor);
            typename D::abi_guard guard(this->shim());
            *xsltProcessor = detach_from<winrt::Windows::Data::Xml::Xsl::XsltProcessor>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Data::Xml::Dom::XmlDocument const*>(&document)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Data::Xml::Xsl
{
    inline XsltProcessor::XsltProcessor(winrt::Windows::Data::Xml::Dom::XmlDocument const& document) :
        XsltProcessor(impl::call_factory<XsltProcessor, IXsltProcessorFactory>([&](IXsltProcessorFactory const& f) { return f.CreateInstance(document); }))
    {
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Data::Xml::Xsl::IXsltProcessor> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Data::Xml::Xsl::IXsltProcessor2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Data::Xml::Xsl::IXsltProcessorFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Data::Xml::Xsl::XsltProcessor> : winrt::impl::hash_base {};
#endif
}
#endif