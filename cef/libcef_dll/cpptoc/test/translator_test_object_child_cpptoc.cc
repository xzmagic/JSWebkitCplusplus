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

#include "libcef_dll/cpptoc/test/translator_test_object_child_cpptoc.h"
#include "libcef_dll/cpptoc/test/translator_test_object_child_child_cpptoc.h"


// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT cef_translator_test_object_child_t* cef_translator_test_object_child_create(
    int value, int other_value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefRefPtr<CefTranslatorTestObjectChild> _retval =
      CefTranslatorTestObjectChild::Create(
      value,
      other_value);

  // Return type: refptr_same
  return CefTranslatorTestObjectChildCppToC::Wrap(_retval);
}


namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK translator_test_object_child_get_other_value(
    struct _cef_translator_test_object_child_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval = CefTranslatorTestObjectChildCppToC::Get(self)->GetOtherValue();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK translator_test_object_child_set_other_value(
    struct _cef_translator_test_object_child_t* self, int value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefTranslatorTestObjectChildCppToC::Get(self)->SetOtherValue(
      value);
}

int CEF_CALLBACK translator_test_object_child_get_value(
    struct _cef_translator_test_object_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval = CefTranslatorTestObjectChildCppToC::Get(
      reinterpret_cast<cef_translator_test_object_child_t*>(self))->GetValue();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK translator_test_object_child_set_value(
    struct _cef_translator_test_object_t* self, int value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefTranslatorTestObjectChildCppToC::Get(
      reinterpret_cast<cef_translator_test_object_child_t*>(self))->SetValue(
      value);
}

}  // namespace


// CONSTRUCTOR - Do not edit by hand.

CefTranslatorTestObjectChildCppToC::CefTranslatorTestObjectChildCppToC() {
  GetStruct()->get_other_value = translator_test_object_child_get_other_value;
  GetStruct()->set_other_value = translator_test_object_child_set_other_value;
  GetStruct()->base.get_value = translator_test_object_child_get_value;
  GetStruct()->base.set_value = translator_test_object_child_set_value;
}

template<> CefRefPtr<CefTranslatorTestObjectChild> CefCppToC<CefTranslatorTestObjectChildCppToC,
    CefTranslatorTestObjectChild,
    cef_translator_test_object_child_t>::UnwrapDerived(CefWrapperType type,
    cef_translator_test_object_child_t* s) {
  if (type == WT_TRANSLATOR_TEST_OBJECT_CHILD_CHILD) {
    return CefTranslatorTestObjectChildChildCppToC::Unwrap(
        reinterpret_cast<cef_translator_test_object_child_child_t*>(s));
  }
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#ifndef NDEBUG
template<> base::AtomicRefCount CefCppToC<CefTranslatorTestObjectChildCppToC,
    CefTranslatorTestObjectChild,
    cef_translator_test_object_child_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCppToC<CefTranslatorTestObjectChildCppToC,
    CefTranslatorTestObjectChild,
    cef_translator_test_object_child_t>::kWrapperType =
    WT_TRANSLATOR_TEST_OBJECT_CHILD;
