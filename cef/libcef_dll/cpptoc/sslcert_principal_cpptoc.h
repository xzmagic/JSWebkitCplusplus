// Copyright (c) 2015 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_SSLCERT_PRINCIPAL_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_SSLCERT_PRINCIPAL_CPPTOC_H_
#pragma once

#ifndef BUILDING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed DLL-side only")
#else  // BUILDING_CEF_SHARED

#include "include/cef_ssl_info.h"
#include "include/capi/cef_ssl_info_capi.h"
#include "libcef_dll/cpptoc/cpptoc.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed DLL-side only.
class CefSSLCertPrincipalCppToC
    : public CefCppToC<CefSSLCertPrincipalCppToC, CefSSLCertPrincipal,
        cef_sslcert_principal_t> {
 public:
  CefSSLCertPrincipalCppToC();
};

#endif  // BUILDING_CEF_SHARED
#endif  // CEF_LIBCEF_DLL_CPPTOC_SSLCERT_PRINCIPAL_CPPTOC_H_
