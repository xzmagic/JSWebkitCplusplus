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

#include "libcef_dll/cpptoc/binary_value_cpptoc.h"
#include "libcef_dll/cpptoc/sslcert_principal_cpptoc.h"
#include "libcef_dll/cpptoc/sslinfo_cpptoc.h"


namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

cef_sslcert_principal_t* CEF_CALLBACK sslinfo_get_subject(
    struct _cef_sslinfo_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefSSLCertPrincipal> _retval = CefSSLInfoCppToC::Get(
      self)->GetSubject();

  // Return type: refptr_same
  return CefSSLCertPrincipalCppToC::Wrap(_retval);
}

cef_sslcert_principal_t* CEF_CALLBACK sslinfo_get_issuer(
    struct _cef_sslinfo_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefSSLCertPrincipal> _retval = CefSSLInfoCppToC::Get(
      self)->GetIssuer();

  // Return type: refptr_same
  return CefSSLCertPrincipalCppToC::Wrap(_retval);
}

struct _cef_binary_value_t* CEF_CALLBACK sslinfo_get_serial_number(
    struct _cef_sslinfo_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefBinaryValue> _retval = CefSSLInfoCppToC::Get(
      self)->GetSerialNumber();

  // Return type: refptr_same
  return CefBinaryValueCppToC::Wrap(_retval);
}

cef_time_t CEF_CALLBACK sslinfo_get_valid_start(struct _cef_sslinfo_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return CefTime();

  // Execute
  cef_time_t _retval = CefSSLInfoCppToC::Get(self)->GetValidStart();

  // Return type: simple
  return _retval;
}

cef_time_t CEF_CALLBACK sslinfo_get_valid_expiry(struct _cef_sslinfo_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return CefTime();

  // Execute
  cef_time_t _retval = CefSSLInfoCppToC::Get(self)->GetValidExpiry();

  // Return type: simple
  return _retval;
}

struct _cef_binary_value_t* CEF_CALLBACK sslinfo_get_derencoded(
    struct _cef_sslinfo_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefBinaryValue> _retval = CefSSLInfoCppToC::Get(
      self)->GetDEREncoded();

  // Return type: refptr_same
  return CefBinaryValueCppToC::Wrap(_retval);
}

struct _cef_binary_value_t* CEF_CALLBACK sslinfo_get_pemencoded(
    struct _cef_sslinfo_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefBinaryValue> _retval = CefSSLInfoCppToC::Get(
      self)->GetPEMEncoded();

  // Return type: refptr_same
  return CefBinaryValueCppToC::Wrap(_retval);
}

}  // namespace


// CONSTRUCTOR - Do not edit by hand.

CefSSLInfoCppToC::CefSSLInfoCppToC() {
  GetStruct()->get_subject = sslinfo_get_subject;
  GetStruct()->get_issuer = sslinfo_get_issuer;
  GetStruct()->get_serial_number = sslinfo_get_serial_number;
  GetStruct()->get_valid_start = sslinfo_get_valid_start;
  GetStruct()->get_valid_expiry = sslinfo_get_valid_expiry;
  GetStruct()->get_derencoded = sslinfo_get_derencoded;
  GetStruct()->get_pemencoded = sslinfo_get_pemencoded;
}

template<> CefRefPtr<CefSSLInfo> CefCppToC<CefSSLInfoCppToC, CefSSLInfo,
    cef_sslinfo_t>::UnwrapDerived(CefWrapperType type, cef_sslinfo_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#ifndef NDEBUG
template<> base::AtomicRefCount CefCppToC<CefSSLInfoCppToC, CefSSLInfo,
    cef_sslinfo_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCppToC<CefSSLInfoCppToC, CefSSLInfo,
    cef_sslinfo_t>::kWrapperType = WT_SSLINFO;
